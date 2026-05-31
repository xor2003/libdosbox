#include <cstdlib>
#include <cstddef>
#include <iostream>
#include <type_traits>

#include "../../src/custom/state.h"

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
	m2c::_STATE s{};
	check(std::is_standard_layout_v<m2c::_STATE>, "state.h standard layout");
	check(std::is_trivially_copyable_v<m2c::_STATE>, "state.h trivially copyable");
	check(s.eax == 0 && s.ebx == 0 && s.eip == 0, "state.h reg zero init");
	check(s.cs == 0 && s.ss == 0, "state.h segment zero init");
	check(!s.CF && !s.ZF && !s.OF, "state.h flags zero init");
	check(offsetof(m2c::_STATE, ebx) > offsetof(m2c::_STATE, eax),
	      "state.h register ordering");
	check(offsetof(m2c::_STATE, cs) > offsetof(m2c::_STATE, eip),
	      "state.h segment fields after eip");
	check(sizeof(m2c::_STATE) >= 44, "state.h expected minimum size");

	if (failures) {
		std::cerr << "\ncustom_state_header_tests: " << failures << " failure(s)\n";
		return EXIT_FAILURE;
	}

	std::cout << "\ncustom_state_header_tests: all checks passed\n";
	return EXIT_SUCCESS;
}
