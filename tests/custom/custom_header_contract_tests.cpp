#include <cstdlib>
#include <iostream>
#include <type_traits>

#define DOSBOX_CUSTOM 1
#include "../../src/custom/custom_hooks.h"
#include "../../src/custom/shadowstack_fwd.h"

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
} // namespace

int main()
{
	check(std::is_same_v<decltype(&masm2c_init),
	                     bool (*)(char *, unsigned short, unsigned short, unsigned short)>,
	      "custom_hooks masm2c_init signature");
	check(std::is_same_v<decltype(&masm2c_exit), void (*)(unsigned char)>,
	      "custom_hooks masm2c_exit signature");
	check(std::is_same_v<decltype(&masm2c_callf), int (*)(unsigned, unsigned)>,
	      "custom_hooks masm2c_callf signature");
	check(std::is_same_v<decltype(&masm2c_calln16), int (*)(unsigned)>,
	      "custom_hooks masm2c_calln16 signature");

	// Forward-declaration contract: pointers/references are valid with incomplete types.
	m2c::ShadowStack *stack_ptr = nullptr;
	m2c::_STATE *state_ptr = nullptr;
	check(stack_ptr == nullptr && state_ptr == nullptr,
	      "shadowstack_fwd incomplete type pointer usage");

	if (failures) {
		std::cerr << "\ncustom_header_contract_tests: " << failures << " failure(s)\n";
		return EXIT_FAILURE;
	}
	std::cout << "\ncustom_header_contract_tests: all checks passed\n";
	return EXIT_SUCCESS;
}
