#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <vector>

// Prevent pulling the real, heavy asm.h.
#define __asm_h__

typedef uint8_t db;
typedef uint16_t dw;
typedef uint32_t dd;

namespace m2c {

struct _STATE {
	dd esp = 0;
	dd eip = 0;
	dw cs = 0;
	dw ss = 0;
	dw sp = 0;
};

struct Frame {
	bool init = false;
	dw cs = 0;
	dd ip = 0;
	dw sp = 0;
	dd value = 0;
	size_t addcounter = 0;
	size_t remcounter = 0;
	dw *pointer_ = nullptr;
	bool itwascall = false;
	size_t call_deep = 0;
};

class ShadowStack {
public:
	void init(size_t size)
	{
		m_ss.clear();
		m_ss.resize(size);
		m_current = 0;
		m_needtoskipcall = 0;
		m_deep = 0;
		m_currentdeep = 0;
		m_itiscall = false;
		m_itisret = false;
		m_active = true;
		m_forceactive = false;
	}
	void push(_STATE *_state, dd value);
	void pop(_STATE *_state, size_t word_size = 2);
	bool itwascall();
	void decreasedeep();
	bool needtoskipcalls();
	void print_frame(const Frame &f);
	void print(_STATE *_state);
	void mark_frame_start() {}
	size_t get_frame_size() const { return 0; }
	size_t size() const { return m_ss.size(); }
	bool empty() const { return m_ss.empty(); }
	int getneedtoskipcallndclean()
	{
		int v = m_needtoskipcall;
		m_needtoskipcall = 0;
		return v;
	}
	void forceenable() { m_forceactive = true; }
	void forcedisable() { m_forceactive = false; }
	void itiscall() { m_itiscall = true; }
	void itisret() { m_itisret = true; }

	std::vector<Frame> m_ss{};
	dd m_current = 0;
	bool m_active = false;
	bool m_forceactive = false;
	bool m_itiscall = false;
	bool m_itisret = false;
	int m_needtoskipcall = 0;
	int m_deep = 0;
	int m_currentdeep = 0;
};

size_t counter = 0;
size_t debug = 0;
dw cs = 0;
dd eip = 0;
dd esp = 0;
dw ss = 0;
dw sp = 0;

static dw fake_mem[1 << 16] = {};

void *raddr_(dw ss, dw sp)
{
	const size_t idx = (static_cast<size_t>(ss) * 16u + sp) & 0xffffu;
	return &fake_mem[idx];
}

int log_debug(const char *, ...)
{
	return 0;
}

int log_error(const char *, ...)
{
	return 0;
}

} // namespace m2c

#define X86_REGREF

#include "../../src/custom/shadowstack.cpp"

namespace {
int failures = 0;

void check(bool condition, const char *name)
{
	if (!condition) {
		std::cerr << "[FAIL] " << name << "\n";
		++failures;
	} else {
		std::cout << "[PASS] " << name << "\n";
	}
}

void sync_regs_from_state(const m2c::_STATE &s)
{
	m2c::cs = s.cs;
	m2c::eip = s.eip;
	m2c::esp = s.esp;
	m2c::ss = s.ss;
	m2c::sp = s.sp;
}
} // namespace

int main()
{
	m2c::ShadowStack stack;
	m2c::_STATE s{};
	s.cs = 0x1234;
	s.eip = 0x5678;
	s.ss = 0x0200;
	s.sp = 0x0040;
	s.esp = 4;
	m2c::counter = 7;

	// Push ignored if stack inactive and not forced.
	sync_regs_from_state(s);
	stack.push(&s, 0xabcd);
	check(stack.m_ss.empty(), "shadowstack_impl inactive push ignored");

	stack.init(32);
	check(stack.m_ss.size() == 32, "shadowstack_impl init resizes backing storage");

	// Non-call push should not mark frame as call.
	sync_regs_from_state(s);
	stack.push(&s, 0x1111);
	check(!stack.itwascall(), "shadowstack_impl regular push not marked call");
	check(stack.m_ss.at(s.esp).init, "shadowstack_impl frame initialized at esp index");
	check(stack.m_ss.at(s.esp).value == 0x1111, "shadowstack_impl frame stores pushed value");

	// Call push should mark call and increase depth.
	s.esp = 6;
	s.sp = 0x0030;
	sync_regs_from_state(s);
	stack.itiscall();
	stack.push(&s, 0x2222);
	check(stack.itwascall(), "shadowstack_impl call push marked call");
	check(stack.m_deep == 1, "shadowstack_impl call push increments depth");
	check(stack.m_ss.at(s.esp).call_deep == 1, "shadowstack_impl frame stores call depth");

	// Pop without return marker increases skip-call count for call frames.
	sync_regs_from_state(s);
	stack.pop(&s, 2);
	check(stack.needtoskipcalls(), "shadowstack_impl pop marks skip-call for call frame");
	check(stack.m_itisret == false, "shadowstack_impl pop resets return marker");
	(void)stack.getneedtoskipcallndclean();

	// Pop with return marker should decrease skip-call count for call frame.
	s.esp = 6;
	sync_regs_from_state(s);
	stack.itisret();
	stack.pop(&s, 2);
	check(!stack.needtoskipcalls(), "shadowstack_impl return pop balances skip-call count");

	// Force-active mode executes push when inactive.
	stack.m_active = false;
	stack.forceenable();
	s.esp = 8;
	sync_regs_from_state(s);
	stack.push(&s, 0x3333);
	check(stack.m_ss.at(s.esp).init, "shadowstack_impl forceenable allows push while inactive");
	stack.forcedisable();

	if (failures) {
		std::cerr << "\nshadowstack_impl_tests: " << failures << " failure(s)\n";
		return EXIT_FAILURE;
	}
	std::cout << "\nshadowstack_impl_tests: all checks passed\n";
	return EXIT_SUCCESS;
}
