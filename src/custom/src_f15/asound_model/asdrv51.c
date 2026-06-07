#include <dos.h>

#include "asopl.h"
#include "asound_model.h"

/*
 * This file is the DOS-facing bridge between the clean ASOUND model and the
 * original overlay ABI. For a modern SDL rewrite, keep the model semantics and
 * replace most of this file with an audio backend callback or mixer code.
 *
 * Rough split:
 * - asound_model.*: game-visible behavior, script parsing, timing rules
 * - asopl.*: OPL-style state model useful for tracing and compatibility
 * - this file: DOS/AdLib glue, direct I/O, sample hot path, old entry points
 */

int ash_inp(int port);
int ash_outp(int port, int value);
void ash_cli(void);
void ash_sti(void);
#if ASDRV_SAMPLE_LIMIT == 0
void asdrv_write_reg_asm(AsoundU8 reg, AsoundU8 value);
int far asdrv_play_sample_range_asm(AsoundU16 sample_seg, AsoundU16 start, AsoundU16 end);
#endif

#ifndef ASDRV_SAMPLE_LIMIT
#define ASDRV_SAMPLE_LIMIT 0
#endif

static AsoplState asopl_state;
static AsoundU8 asopl_hw_shadow[ASOPL_REGISTER_COUNT];
static AsoundU16 asdrv_sample_seg;
static AsoundU8 asdrv_saved_pic_mask;
static AsoundU8 asdrv_saved_port61;
static AsoundU16 asdrv_trace_count;
static AsoundU8 asdrv_trace_data[4096];

/*
 * The original sample effect path does not play PCM directly. It repeatedly
 * writes OPL register 43h using a 6-bit lookup derived from source bytes.
 * An SDL rewrite can ignore that hardware detail and treat this as a tiny
 * baked sample/instrument transfer function.
 */
static const AsoundU8 asdrv_sample_to_opl[64] = {
        0x3fu, 0x2du, 0x26u, 0x23u, 0x20u, 0x1du, 0x1bu, 0x19u,
        0x18u, 0x16u, 0x15u, 0x14u, 0x13u, 0x12u, 0x11u, 0x10u,
        0x10u, 0x0fu, 0x0eu, 0x0eu, 0x0du, 0x0du, 0x0cu, 0x0cu,
        0x0bu, 0x0bu, 0x0au, 0x0au, 0x09u, 0x09u, 0x09u, 0x08u,
        0x08u, 0x07u, 0x07u, 0x07u, 0x06u, 0x06u, 0x06u, 0x06u,
        0x05u, 0x05u, 0x05u, 0x04u, 0x04u, 0x04u, 0x04u, 0x03u,
        0x03u, 0x03u, 0x03u, 0x02u, 0x02u, 0x02u, 0x02u, 0x02u,
        0x01u, 0x01u, 0x01u, 0x01u, 0x00u, 0x00u, 0x00u, 0x00u,
};

static void asdrv_io_delay_status(int port, int count)
{
	while (count-- > 0) {
		(void)ash_inp(port);
	}
}

static void asdrv_trace_reg(AsoundU8 reg, AsoundU8 value)
{
	if (asdrv_trace_count + 2u > (AsoundU16)sizeof(asdrv_trace_data)) {
		return;
	}
	asdrv_trace_data[asdrv_trace_count++] = reg;
	asdrv_trace_data[asdrv_trace_count++] = value;
}

static void asdrv_write_reg(AsoundU8 reg, AsoundU8 value)
{
	asdrv_trace_reg(reg, value);
#if ASDRV_SAMPLE_LIMIT == 0
	/* Real DOS build: use fixed-delay port writes close to original ASOUND. */
	asdrv_write_reg_asm(reg, value);
#else
	/* Harness build: keep a simple observable path for oracle trace tests. */
	ash_outp(0x388, reg);
	asdrv_io_delay_status(0x388, 6);
	ash_outp(0x389, value);
	asdrv_io_delay_status(0x388, 35);
#endif
}

static void asdrv_invalidate_hw_shadow(void)
{
	unsigned reg;

	for (reg = 0; reg < ASOPL_REGISTER_COUNT; ++reg) {
		asopl_hw_shadow[reg] = 0xffu;
	}
}

static void asdrv_prime_hw_shadow_setup(void)
{
	unsigned reg;

	for (reg = 0; reg < ASOPL_REGISTER_COUNT; ++reg) {
		asopl_hw_shadow[reg] = 0u;
	}
	asopl_hw_shadow[0x84u] = 0x0fu;
	asopl_hw_shadow[0x85u] = 0x0fu;
}

static void asdrv_prime_hw_shadow_reset(void)
{
	unsigned reg;

	for (reg = 0; reg < ASOPL_REGISTER_COUNT; ++reg) {
		asopl_hw_shadow[reg] = 0u;
	}
	asopl_hw_shadow[0x01u] = 0x20u;
	asopl_hw_shadow[0xbdu] = 0x20u;
}

void asdrv_trace_reset(void)
{
	asdrv_trace_count = 0u;
}

AsoundU16 asdrv_trace_size(void)
{
	return asdrv_trace_count;
}

const AsoundU8* asdrv_trace_bytes(void)
{
	return asdrv_trace_data;
}

static void asdrv_sync_backend(void)
{
	unsigned reg;

	/*
	 * Synchronize the logical OPL shadow with real hardware writes.
	 * SDL-style rewrites usually replace this with direct synthesis state
	 * updates instead of register mirroring.
	 */
	for (reg = 0; reg < ASOPL_REGISTER_COUNT; ++reg) {
		AsoundU8 value = asopl_get_register(&asopl_state, (AsoundU8)reg);
		if (asopl_hw_shadow[reg] == value) {
			continue;
		}
		asdrv_write_reg((AsoundU8)reg, value);
		asopl_hw_shadow[reg] = value;
	}
}

static void asdrv_setup_probe_sequence(void)
{
	asdrv_write_reg(0xb1u, 0x00u);
	asdrv_write_reg(0xb2u, 0x00u);
	asdrv_write_reg(0x84u, 0x0fu);
	asdrv_write_reg(0x85u, 0x0fu);
}

static void asdrv_shutdown_reset_sequence(void)
{
	int reg;

	asdrv_write_reg(0xb1u, 0x00u);
	asdrv_write_reg(0xb2u, 0x00u);
	asdrv_write_reg(0x84u, 0x0fu);
	asdrv_write_reg(0x85u, 0x0fu);
	for (reg = 0xff; reg >= 0x01; --reg) {
		asdrv_write_reg((AsoundU8)reg, 0x00u);
	}
	asdrv_write_reg(0x01u, 0x20u);
	asdrv_write_reg(0xbdu, 0x20u);
}

static void asdrv_timer2_start_mask_irq0(AsoundU8 timer43_mode, AsoundU8 timer42_value)
{
	ash_outp(0x43, timer43_mode);
	ash_outp(0x42, timer42_value);
	asdrv_saved_port61 = (AsoundU8)ash_inp(0x61);
	ash_outp(0x61, (asdrv_saved_port61 | 0x01u) & 0xfdu);
	asdrv_saved_pic_mask = (AsoundU8)ash_inp(0x21);
	ash_outp(0x21, asdrv_saved_pic_mask | 0x01u);
}

static void asdrv_sample_start_tone(void)
{
#if ASDRV_SAMPLE_LIMIT > 0
	asdrv_write_reg(0x20u, 0x23u);
	asdrv_write_reg(0x23u, 0x28u);
	asdrv_write_reg(0x40u, 0x3fu);
	asdrv_write_reg(0x43u, 0x3fu);
	asdrv_write_reg(0x60u, 0xafu);
	asdrv_write_reg(0x63u, 0xafu);
	asdrv_write_reg(0x80u, 0x0du);
	asdrv_write_reg(0x83u, 0x0fu);
	asdrv_write_reg(0xc0u, 0x05u);
	asdrv_write_reg(0xe0u, 0x00u);
	asdrv_write_reg(0xe3u, 0x02u);
	asdrv_write_reg(0xb0u, 0x01u);
	asdrv_write_reg(0xa0u, 0x8fu);
	asdrv_write_reg(0xb0u, 0x2eu);
	asdrv_write_reg(0xb0u, 0x20u);
	asdrv_write_reg(0xa0u, 0x00u);
	return;
#else
	AsoundU16 timer0_now;
	AsoundU16 delta;

	asdrv_write_reg(0x20u, 0x23u);
	asdrv_write_reg(0x23u, 0x28u);
	asdrv_write_reg(0x40u, 0x3fu);
	asdrv_write_reg(0x43u, 0x3fu);
	asdrv_write_reg(0x60u, 0xafu);
	asdrv_write_reg(0x63u, 0xafu);
	asdrv_write_reg(0x80u, 0x0du);
	asdrv_write_reg(0x83u, 0x0fu);
	asdrv_write_reg(0xc0u, 0x05u);
	asdrv_write_reg(0xe0u, 0x00u);
	asdrv_write_reg(0xe3u, 0x02u);
	asdrv_write_reg(0xb0u, 0x01u);
	asdrv_write_reg(0xa0u, 0x8fu);
	asdrv_write_reg(0xb0u, 0x2eu);

	ash_outp(0x43, 0x36);
	ash_outp(0x40, 0x90);
	ash_outp(0x40, 0x4c);
	ash_outp(0x43, 0x00);
	timer0_now = (AsoundU16)(ash_inp(0x40) | (ash_inp(0x40) << 8));
	do {
		ash_outp(0x43, 0x00);
		delta = (AsoundU16)(timer0_now - (AsoundU16)(ash_inp(0x40) | (ash_inp(0x40) << 8)));
	} while (delta < 0x0952u);
	asdrv_write_reg(0xb0u, 0x20u);
	asdrv_write_reg(0xa0u, 0x00u);
#endif
}

static void asdrv_sample_prepare_timer(void)
{
#if ASDRV_SAMPLE_LIMIT > 0
	asdrv_saved_port61 = 0u;
	asdrv_saved_pic_mask = 0u;
	asdrv_sample_start_tone();
#else
	AsoundU8 previous;

	asdrv_sample_start_tone();
	asdrv_timer2_start_mask_irq0(0x94u, 0xa5u);
	previous = 0xffu;
	do {
		ash_outp(0x43, 0x80);
	} while ((AsoundU8)ash_inp(0x42) <= previous &&
	         (previous = (AsoundU8)ash_inp(0x42), 1));
	ash_cli();
	#endif
}

static void asdrv_sample_restore_timer(void)
{
	asdrv_write_reg(0xb0u, 0x00u);
	asdrv_write_reg(0xb1u, 0x00u);
	ash_outp(0x21, asdrv_saved_pic_mask);
	ash_outp(0x61, asdrv_saved_port61);
	ash_outp(0x43, 0xb6);
	ash_outp(0x42, 0x00);
	ash_outp(0x42, 0x00);
#if ASDRV_SAMPLE_LIMIT == 0
	ash_sti();
#endif
}

static AsoundU8 far* asdrv_far_u8(AsoundU16 seg, AsoundU16 off)
{
	union {
		struct {
			AsoundU16 off;
			AsoundU16 seg;
		} raw;
		AsoundU8 far* ptr;
	} value;

	value.raw.off = off;
	value.raw.seg = seg;
	return value.ptr;
}

static void asdrv_smp_vol(AsoundU16 start, AsoundU16 end)
{
	AsoundU8 far* sample;
#if ASDRV_SAMPLE_LIMIT > 0
	AsoundU16 remaining;
#else
	AsoundU16 pos;
#endif
#if ASDRV_SAMPLE_LIMIT == 0
	AsoundU8 previous;
#endif

#if ASDRV_SAMPLE_LIMIT > 0
	if ((AsoundU16)(end - start) > (AsoundU16)ASDRV_SAMPLE_LIMIT) {
		end = (AsoundU16)(start + (AsoundU16)ASDRV_SAMPLE_LIMIT);
	}
#endif

	sample = asdrv_far_u8(asdrv_sample_seg, start);
#if ASDRV_SAMPLE_LIMIT > 0
	remaining = (AsoundU16)(end - start);
	while (remaining-- != 0u) {
		asdrv_write_reg(0x43u, asdrv_sample_to_opl[((*sample) >> 2) & 0x3fu]);
		++sample;
	}
#else
	for (pos = start; pos != end; ++pos) {
#if ASDRV_SAMPLE_LIMIT == 0
		previous = 0xffu;
		do {
			ash_outp(0x43, 0x80);
		} while ((AsoundU8)ash_inp(0x42) <= previous &&
		         (previous = (AsoundU8)ash_inp(0x42), 1));
#endif
		asdrv_write_reg(0x43u, asdrv_sample_to_opl[((*sample) >> 2) & 0x3fu]);
		++sample;
	}
#endif
}

static int asdrv_play_sample_range(AsoundU16 start, AsoundU16 end)
{
	if (asdrv_sample_seg == 0u || start == end) {
		return 0;
	}
#if ASDRV_SAMPLE_LIMIT == 0
	/*
	 * Real DOS build: run the timing-sensitive sample path in asm.
	 * This avoids the large per-byte overhead of the C loop and better matches
	 * the original overlay's busy-waited hardware behavior.
	 */
	return asdrv_play_sample_range_asm(asdrv_sample_seg, start, end);
#else
	/*
	 * Test/oracle build: keep the path readable and bounded so traces can be
	 * compared against the original driver.
	 */
	asdrv_sample_prepare_timer();
	asdrv_smp_vol(start, end);
	asdrv_sample_restore_timer();
	asdrv_shutdown_reset_sequence();
	asdrv_prime_hw_shadow_reset();
	return 1;
#endif
}

void far asdrv_setup(AsoundU16 driver_segment, AsoundU16 setup_value)
{
	/* setup_value selects how many sample variants are valid for this game. */
	sound_driver_setup(setup_value, driver_segment);
	asdrv_sample_seg = driver_segment;
	asdrv_trace_reset();
	asopl_init(&asopl_state);
	asopl_set_drone_pitch(&asopl_state, 0u);
	asopl_set_drone_enable(&asopl_state, 0u);
	asdrv_setup_probe_sequence();
	asdrv_prime_hw_shadow_setup();
}

void far asdrv_shutdown(void)
{
	sound_driver_shutdown();
	asopl_reset(&asopl_state);
	asdrv_shutdown_reset_sequence();
	asdrv_prime_hw_shadow_reset();
}

int far asdrv_dispatch(AsoundU16 dispatch_offset)
{
	return sound_driver_dispatch_sound(dispatch_offset);
}

int far asdrv_sample(AsoundU16 sample_offset)
{
	AsoundDriver* driver;

	/*
	 * slot 6d is the historical sample/effect entry.
	 * The model picks a logical sample range; the DOS side turns that into the
	 * original blocking AdLib playback path.
	 */
	if (!sound_driver_play_sample(sample_offset)) {
		return 0;
	}
	driver = sound_driver_state();
	if (!driver->pending_sample_valid) {
		return 0;
	}
#if ASDRV_SAMPLE_LIMIT == 0
	/*
	 * The original driver waits for a timer-service countdown before some
	 * sample starts. That coupling is visible to the game and is not optional
	 * if we want behavioral compatibility.
	 */
	while (driver->sample_delay_ticks != 0u) {
	}
#endif
	if (!asdrv_play_sample_range(driver->pending_sample_start,
	                             (AsoundU16)(driver->pending_sample_end + 1u))) {
		return 0;
	}
	driver->pending_sample_valid = 0u;
	return 1;
}

void far asdrv_intro(void)
{
	sound_driver_play_intro();
}

AsoundU16 far asdrv_timer(void)
{
	AsoundEvent events[32];
	size_t count;
	size_t i;
	AsoundDriver* driver = sound_driver_state();

	/*
	 * slot 6b is the main service tick. In a modern rewrite, this is the core
	 * function to call from your mixer/update thread to advance music state.
	 */
	count = asound_driver_tick_events(driver, events, 32);
	for (i = 0; i < count; ++i) {
		asopl_apply_event(&asopl_state, driver, &events[i]);
	}
	asopl_service_tick(&asopl_state, driver);
	asdrv_sync_backend();
	return 0u;
}

AsoundU16 far asdrv_noise(void)
{
	sound_driver_noise_tick();
	asopl_noise_tick(&asopl_state);
	asdrv_sync_backend();
	return 0u;
}

void far asdrv_pitch(AsoundU16 pitch)
{
	sound_driver_set_drone_pitch(pitch);
	asopl_set_drone_pitch(&asopl_state, pitch);
}

void far asdrv_enable(void)
{
	sound_driver_enable_drone();
	asopl_set_drone_enable(&asopl_state, 1u);
}

void far asdrv_disable(void)
{
	sound_driver_disable_drone();
	asopl_set_drone_enable(&asopl_state, 0u);
}
