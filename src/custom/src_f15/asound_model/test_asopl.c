#include "asopl.h"

#include <assert.h>
#include <stdio.h>

static void test_asopl_init_defaults(void)
{
	AsoplState opl;

	asopl_init(&opl);
	assert(asopl_get_register(&opl, 0x01u) == 0x20u);
	assert(asopl_get_register(&opl, 0xbdu) == 0x20u);
}

static void test_asopl_applies_pitch_slide_stream(void)
{
	AsoplState opl;
	AsoundDriver driver;
	AsoundEvent events[16];
	size_t count;
	size_t i;

	asopl_init(&opl);
	asound_driver_init(&driver, 0x7d9du);
	assert(asound_driver_dispatch_sound(&driver, 0x0au));

	count = asound_driver_tick_events(&driver, events, 16);
	for (i = 0; i < count; ++i) {
		asopl_apply_event(&opl, &driver, &events[i]);
	}
	asopl_service_tick(&opl, &driver);

	assert(asopl_get_register(&opl, 0xa3u) == 0x3eu);
	assert(asopl_get_register(&opl, 0xb3u) == 0x37u);
	assert((asopl_get_register(&opl, 0x4bu) & 0x3fu) == 0x13u);

	count = asound_driver_tick_events(&driver, events, 16);
	for (i = 0; i < count; ++i) {
		asopl_apply_event(&opl, &driver, &events[i]);
	}
	asopl_service_tick(&opl, &driver);

	assert(asopl_get_register(&opl, 0xa3u) == 0x4fu);
	assert(asopl_get_register(&opl, 0xb3u) == 0x37u);
}

static void test_asopl_updates_drone_mode(void)
{
	AsoplState opl;
	AsoundDriver driver;

	asopl_init(&opl);
	asound_driver_init(&driver, 0);

	asopl_set_drone_enable(&opl, 1u);
	asopl_set_drone_pitch(&opl, 0x0200u);
	asopl_service_tick(&opl, &driver);

	assert((asopl_get_register(&opl, 0xb5u) & 0x20u) != 0u);
	assert((asopl_get_register(&opl, 0xbdu) & 0x10u) != 0u);
	assert(asopl_get_register(&opl, 0xa5u) == 0xfcu);
	assert(asopl_get_register(&opl, 0xb5u) == 0x2au);
	assert((asopl_get_register(&opl, 0x4du) & 0x3fu) == 0x2cu);
	assert((asopl_get_register(&opl, 0x53u) & 0x3fu) == 0x28u);

	asopl_set_drone_enable(&opl, 0u);
	asopl_service_tick(&opl, &driver);
	assert((asopl_get_register(&opl, 0xb5u) & 0x20u) == 0u);
	assert((asopl_get_register(&opl, 0xbdu) & 0x10u) == 0u);
}

int main(void)
{
	test_asopl_init_defaults();
	test_asopl_applies_pitch_slide_stream();
	test_asopl_updates_drone_mode();
	puts("asopl tests passed");
	return 0;
}
