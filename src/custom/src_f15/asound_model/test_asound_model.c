#include "asound_model.h"

#include <assert.h>
#include <stdio.h>

static void expect_event(const AsoundEventLog* log, size_t index,
                         AsoundEventType type, AsoundU8 voice, AsoundU16 a,
                         AsoundU16 b)
{
	assert(index < log->count);
	assert(log->events[index].type == type);
	assert(log->events[index].voice == voice);
	assert(log->events[index].a == a);
	assert(log->events[index].b == b);
}

static void test_sample_ranges(void)
{
	SampleRange r;
	assert(asound_sample_variant_max_index(0x0000u) == 0);
	assert(asound_sample_variant_max_index(0x6a19u) == 0);
	assert(asound_sample_variant_max_index(0x6a1au) == 1);
	assert(asound_sample_variant_max_index(0x7d9cu) == 1);
	assert(asound_sample_variant_max_index(0x7d9du) == 2);
	assert(asound_sample_variant_next(0, 0) == 0);
	assert(asound_sample_variant_next(0, 1) == 1);
	assert(asound_sample_variant_next(1, 1) == 0);
	assert(asound_sample_variant_next(1, 2) == 2);
	assert(asound_sample_variant_next(2, 2) == 0);
	r = asound_sample_variant_range(0);
	assert(r.start == 0x4797u && r.end == 0x5c92u);
	r = asound_sample_variant_range(1);
	assert(r.start == 0x5c93u && r.end == 0x6a1au);
	r = asound_sample_variant_range(2);
	assert(r.start == 0x6a1bu && r.end == 0x7d9du);
}

static void test_pitch_slide_stream_prefix(void)
{
	AsoundEvent events[16];
	AsoundEventLog log;
	SoundStreamState state;

	asound_log_init(&log, events, 16);
	asound_stream_init(&state, asound_stream_pitch_slide_1222e);
	asound_stream_step(&state, 3, &log);

	assert(log.count == 5);
	expect_event(&log, 0, ASOUND_EVENT_INSTRUMENT, 3, 0x08u, 0);
	expect_event(&log, 1, ASOUND_EVENT_VOLUME, 3, 0x2cu, 0);
	expect_event(&log, 2, ASOUND_EVENT_KEYOFF_GAP, 3, 0x08u, 0);
	expect_event(&log, 3, ASOUND_EVENT_PITCH_DELTA, 3, 0x11u, 0);
	expect_event(&log, 4, ASOUND_EVENT_KEY_ON, 3, 0x44u, 0x14u);
	assert(state.ticks_left == 0x14u);
	assert(state.keyoff_ticks_left == 0x0cu);
}

static void test_pitch_slide_stream_finishes(void)
{
	AsoundEvent events[32];
	AsoundEventLog log;
	SoundStreamState state;
	int i;

	asound_log_init(&log, events, 32);
	asound_stream_init(&state, asound_stream_pitch_slide_1222e);
	asound_stream_step(&state, 3, &log);
	for (i = 0; i < 20; ++i) {
		asound_stream_step(&state, 3, &log);
	}

	assert(log.count >= 9);
	expect_event(&log, 5, ASOUND_EVENT_KEY_OFF, 3, 0, 0);
	expect_event(&log, 6, ASOUND_EVENT_PITCH_DELTA, 3, 0, 0);
	expect_event(&log, 7, ASOUND_EVENT_KEY_OFF, 3, 0, 0);
	expect_event(&log, 8, ASOUND_EVENT_STREAM_END, 3, 0, 0);
	assert(state.stream_ptr == 0);
}

static void test_driver_dispatch_pitch_slide(void)
{
	AsoundEvent events[16];
	AsoundEventLog log;
	AsoundDriver driver;

	asound_log_init(&log, events, 16);
	asound_driver_init(&driver, 0x7d9du);

	assert(asound_driver_dispatch_sound_offset(&driver, 0x0au));
	assert(driver.streams[3].stream_ptr == asound_stream_pitch_slide_1222e);

	asound_driver_tick(&driver, &log);
	assert(log.count == 5);
	expect_event(&log, 0, ASOUND_EVENT_INSTRUMENT, 3, 0x08u, 0);
	expect_event(&log, 4, ASOUND_EVENT_KEY_ON, 3, 0x44u, 0x14u);
}

static void test_driver_dispatch_dual_stream(void)
{
	AsoundEvent events[16];
	AsoundEventLog log;
	AsoundDriver driver;

	asound_log_init(&log, events, 16);
	asound_driver_init(&driver, 0);

	assert(asound_driver_dispatch_sound_offset(&driver, 0x20u));
	assert(driver.streams[1].stream_ptr == asound_stream_122ac);
	assert(driver.streams[3].stream_ptr == asound_stream_122b4);

	asound_driver_tick(&driver, &log);
	assert(log.count == 6);
	expect_event(&log, 0, ASOUND_EVENT_INSTRUMENT, 1, 0x1bu, 0);
	expect_event(&log, 2, ASOUND_EVENT_KEY_ON, 1, 0x04u, 0x3cu);
	expect_event(&log, 3, ASOUND_EVENT_INSTRUMENT, 3, 0x1au, 0);
	expect_event(&log, 5, ASOUND_EVENT_KEY_ON, 3, 0x21u, 0x3cu);
}

static void test_driver_dispatch_random_streams(void)
{
	AsoundEvent events[16];
	AsoundEventLog log;
	AsoundDriver driver;

	asound_log_init(&log, events, 16);
	asound_driver_init(&driver, 0);

	driver.random_seed = 0x0000u;
	assert(asound_driver_dispatch_sound_offset(&driver, 0x00u));
	assert(driver.streams[0].stream_ptr == asound_stream_random0_voice0_07c8);
	assert(driver.streams[0].ticks_left == 1u);
	asound_driver_tick(&driver, &log);
	expect_event(&log, 0, ASOUND_EVENT_INSTRUMENT, 0, 0x03u, 0);
	expect_event(&log, 1, ASOUND_EVENT_VOLUME, 0, 0x3fu, 0);
	expect_event(&log, 2, ASOUND_EVENT_KEY_ON, 0, 0x09u, 0x78u);

	asound_log_init(&log, events, 16);
	asound_driver_init(&driver, 0);
	driver.random_seed = 0x1234u;
	assert(asound_driver_dispatch_sound_offset(&driver, 0x00u));
	assert(driver.streams[0].stream_ptr == asound_stream_random0_voice0_07e0);

	asound_log_init(&log, events, 16);
	asound_driver_init(&driver, 0);
	driver.random_seed = 0x0000u;
	assert(asound_driver_dispatch_sound_offset(&driver, 0x02u));
	assert(driver.streams[2].stream_ptr == asound_stream_random2_voice2_07a8);
	asound_driver_tick(&driver, &log);
	expect_event(&log, 0, ASOUND_EVENT_INSTRUMENT, 2, 0x02u, 0);
	expect_event(&log, 1, ASOUND_EVENT_VOLUME, 2, 0x3eu, 0);
	expect_event(&log, 2, ASOUND_EVENT_KEY_ON, 2, 0x09u, 0x51u);
}

static void test_driver_dispatch_idle_guard(void)
{
	AsoundDriver driver;

	asound_driver_init(&driver, 0);
	assert(asound_driver_dispatch_sound_offset(&driver, 0x14u));
	assert(driver.streams[4].stream_ptr == asound_stream_12274);
	driver.streams[4].stream_pos = 5;

	assert(asound_driver_dispatch_sound_offset(&driver, 0x14u));
	assert(driver.streams[4].stream_pos == 5);
}

static void test_driver_dispatch_rejects_unknown_or_odd_offsets(void)
{
	AsoundDriver driver;

	asound_driver_init(&driver, 0);
	assert(!asound_driver_dispatch_sound_offset(&driver, 0x01u));
	assert(!asound_driver_dispatch_sound_offset(&driver, 0x24u));
	assert(!asound_driver_dispatch_sound_offset(&driver, 0x23u));
}

int main(void)
{
	test_sample_ranges();
	test_pitch_slide_stream_prefix();
	test_pitch_slide_stream_finishes();
	test_driver_dispatch_pitch_slide();
	test_driver_dispatch_dual_stream();
	test_driver_dispatch_random_streams();
	test_driver_dispatch_idle_guard();
	test_driver_dispatch_rejects_unknown_or_odd_offsets();
	puts("asound_model tests passed");
	return 0;
}
