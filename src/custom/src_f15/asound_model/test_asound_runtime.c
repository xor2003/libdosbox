#include "asound_runtime.h"

#include <assert.h>
#include <stdio.h>

static size_t event_count;

static void test_cb(void* user,
                    AsoundEventType type,
                    AsoundU8 voice,
                    AsoundU16 a,
                    AsoundU16 b)
{
	(void)user;
	(void)type;
	(void)voice;
	(void)a;
	(void)b;
	++event_count;
}

int main(void)
{
	AsoundRuntime rt;
	AsoundEvent events[32];
	AsoundU16 start;
	AsoundU16 end;

	event_count = 0u;
	asound_runtime_init(&rt, 0x7d9du, test_cb, 0);
	assert(asound_runtime_dispatch_sound(&rt, 0x0au));
	assert(asound_runtime_tick_and_dispatch(&rt, events, 32, 0) >= 5u);
	assert(event_count >= 5u);

	asound_runtime_sample_variant_range(&rt, &start, &end);
	assert(start == 0x4797u || start == 0x5c93u || start == 0x6a1bu);
	assert(end == 0x5c92u || end == 0x6a1au || end == 0x7d9du);

	asound_runtime_shutdown(&rt);
	puts("asound_runtime tests passed");
	return 0;
}
