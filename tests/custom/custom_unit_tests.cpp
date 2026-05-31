#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <vector>

#include "../../src/custom/circular_buffer.h"
#include "../../src/custom/custom.h"
#include "../../src/custom/memmgr.h"
#include "../../src/custom/shadowstack.h"
#include "../../src/custom/shadowstack_fwd.h"
#include "../../src/custom/state_common.h"

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

template <typename Fn>
void check_throws(Fn &&fn, const char *name)
{
	try {
		fn();
		std::cerr << "[FAIL] " << name << " (no exception)\n";
		++failures;
	} catch (const std::exception &) {
		std::cout << "[PASS] " << name << "\n";
	}
}
} // namespace

int main()
{
	// 1) API signatures: compile-time checks on public custom API.
	check(std::is_same_v<decltype(&init_get_fname), void (*)(char *, char *)>,
	      "custom.h init_get_fname signature");
	check(std::is_same_v<decltype(&custom_init_prog),
	                     void (*)(char *, uint16_t, uint16_t, uint16_t)>,
	      "custom.h custom_init_prog signature");
	check(std::is_invocable_r_v<int, decltype(&custom_callf), uint32_t, uint32_t>,
	      "custom.h custom_callf signature");

	// 2) Memory manager API is present and callable by signature.
	check(std::is_same_v<decltype(&memmgr_alloc), void *(*)(size_t)>,
	      "memmgr_alloc signature");
	check(std::is_same_v<decltype(&memmgr_free), void (*)(void *)>,
	      "memmgr_free signature");
	check(std::is_same_v<decltype(&memmgr_read_byte), uint8_t (*)(uint32_t)>,
	      "memmgr_read_byte signature");
	check(std::is_same_v<decltype(&memmgr_write_dword),
	                     void (*)(uint32_t, uint32_t)>,
	      "memmgr_write_dword signature");

	// 3) State layout sanity: struct should be value-initializable.
	m2c::_STATE s1{};
	check(s1.eax == 0 && s1.ss == 0, "state_common value-init to zero");

	// 4) ShadowStack header behavior (current stub/no-op contract).
	m2c::ShadowStack stack{};
	check(stack.m_needtoskipcall == 0, "shadowstack skip-call counter starts at zero");
	check(std::is_same_v<decltype(&m2c::ShadowStack::push),
	                     void (m2c::ShadowStack::*)(m2c::_STATE *, uint32_t)>,
	      "shadowstack push signature");
	check(std::is_same_v<decltype(&m2c::ShadowStack::pop),
	                     void (m2c::ShadowStack::*)(m2c::_STATE *, size_t)>,
	      "shadowstack pop signature");
	check(std::is_same_v<decltype(&m2c::ShadowStack::itwascall),
	                     bool (m2c::ShadowStack::*)()>,
	      "shadowstack itwascall signature");

	// 5) CircularBuffer behavioral coverage.
	CircularBuffer<int> cb(3);
	check(cb.capacity() == 3, "circular_buffer capacity");
	check(cb.empty(), "circular_buffer empty at start");
	check(!cb.full(), "circular_buffer not full at start");
	check(cb.size() == 0, "circular_buffer size at start");

	check_throws([&]() { (void)cb.front(); }, "circular_buffer front throws when empty");
	check_throws([&]() { (void)cb.back(); }, "circular_buffer back throws when empty");
	check_throws([&]() { cb.pop_front(); }, "circular_buffer pop_front throws when empty");
	check_throws([&]() { (void)cb.at(0); }, "circular_buffer at throws when empty");

	cb.push_back(10);
	cb.push_back(20);
	check(cb.front() == 10, "circular_buffer front after push");
	check(cb.back() == 20, "circular_buffer back after push");
	check(cb.size() == 2, "circular_buffer size after push");
	check(!cb.full(), "circular_buffer not full at size 2");

	cb.push_back(30);
	check(cb.full(), "circular_buffer full at capacity");
	check(cb[0] == 10 && cb[1] == 20 && cb[2] == 30,
	      "circular_buffer indexing basic order");

	cb.push_back(40); // overwrite oldest element (10)
	check(cb.full(), "circular_buffer remains full after overwrite");
	check(cb.front() == 20 && cb.back() == 40,
	      "circular_buffer overwrite updates front/back");
	check(cb[0] == 20 && cb[1] == 30 && cb[2] == 40,
	      "circular_buffer wraparound order");

	cb.pop_front();
	check(cb.size() == 2, "circular_buffer size after pop_front");
	check(cb.front() == 30, "circular_buffer front after pop_front");
	check_throws([&]() { (void)cb[2]; }, "circular_buffer operator[] throws OOB");

	std::vector<int> iter_values;
	for (auto it = cb.begin(); it != cb.end(); ++it) {
		iter_values.push_back(*it);
	}
	check(iter_values.size() == 2 && iter_values[0] == 30 && iter_values[1] == 40,
	      "circular_buffer iterator forward traversal");

	std::vector<int> rev_values;
	for (auto it = cb.rbegin(); it != cb.rend(); ++it) {
		rev_values.push_back(*it);
	}
	check(rev_values.size() == 2 && rev_values[0] == 40 && rev_values[1] == 30,
	      "circular_buffer iterator reverse traversal");

	CircularBuffer<int> copy_cb = cb;
	check(copy_cb.size() == cb.size() && copy_cb[0] == cb[0] && copy_cb[1] == cb[1],
	      "circular_buffer copy constructor");

	CircularBuffer<int> assign_cb(2);
	assign_cb = cb;
	check(assign_cb.size() == cb.size() && assign_cb[0] == cb[0] && assign_cb[1] == cb[1],
	      "circular_buffer copy assignment");

	CircularBuffer<int> moved_cb = std::move(copy_cb);
	check(moved_cb.size() == 2 && moved_cb[0] == 30 && moved_cb[1] == 40,
	      "circular_buffer move constructor");
	check(copy_cb.capacity() == 0 && copy_cb.size() == 0,
	      "circular_buffer moved-from state");

	CircularBuffer<std::string> str_cb(2);
	str_cb.push_back(std::string("a"));
	std::string b = "b";
	str_cb.push_back(std::move(b));
	check(str_cb.front() == "a" && str_cb.back() == "b",
	      "circular_buffer rvalue push_back");

	str_cb.clear();
	check(str_cb.empty() && str_cb.size() == 0, "circular_buffer clear resets state");

	if (failures) {
		std::cerr << "\ncustom_unit_tests: " << failures << " failure(s)\n";
		return EXIT_FAILURE;
	}
	std::cout << "\ncustom_unit_tests: all checks passed\n";
	return EXIT_SUCCESS;
}
