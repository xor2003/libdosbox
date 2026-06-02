#include "asound_model.h"

#include <string.h>

const SampleRange asound_sample_variant_ranges[ASOUND_SAMPLE_VARIANT_COUNT] = {
        {0x5c92u, 0x4797u},
        {0x6a1au, 0x5c93u},
        {0x7d9du, 0x6a1bu},
};

const AsoundU8 asound_stream_121d6[] = {
        0x00u,
        0x03u,
        0xfcu,
        0x02u,
        0xf9u,
        0x3eu,
        0x09u,
        0x51u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_random2_voice2_07a8[] = {
        0xfcu,
        0x02u,
        0xf9u,
        0x3eu,
        0x09u,
        0x51u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_random2_voice2_07b0[] = {
        0xfcu,
        0x14u,
        0xf9u,
        0x3eu,
        0x09u,
        0x51u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_random2_voice2_07b8[] = {
        0xfcu,
        0x16u,
        0xf9u,
        0x3eu,
        0x09u,
        0x51u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_random2_voice2_07c0[] = {
        0xfcu,
        0x18u,
        0xf9u,
        0x3eu,
        0x09u,
        0x51u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_random0_voice0_07c8[] = {
        0xfcu,
        0x03u,
        0xf9u,
        0x3fu,
        0x09u,
        0x78u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_random0_voice0_07d0[] = {
        0xfcu,
        0x15u,
        0xf9u,
        0x3du,
        0x09u,
        0x78u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_random0_voice0_07d8[] = {
        0xfcu,
        0x17u,
        0xf9u,
        0x3fu,
        0x09u,
        0x78u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_random0_voice0_07e0[] = {
        0xfcu,
        0x19u,
        0xf9u,
        0x3cu,
        0x09u,
        0x78u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_12218[] = {
        0xfcu,
        0x04u,
        0xf9u,
        0x39u,
        0xfeu,
        0x09u,
        0x07u,
        0xffu,
        0x05u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_12224[] = {
        0xfcu,
        0x05u,
        0xf9u,
        0x34u,
        0x29u,
        0x3cu,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_pitch_slide_1222e[] = {
        0xfcu,
        0x08u,
        0xf9u,
        0x2cu,
        0xfbu,
        0x08u,
        0xfau,
        0x11u,
        0x44u,
        0x14u,
        0xfau,
        0x00u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_1223c[] = {
        0xfcu,
        0x08u,
        0xf9u,
        0x28u,
        0xfbu,
        0x16u,
        0x3au,
        0x1eu,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_12246[] = {
        0xfcu,
        0x08u,
        0xf9u,
        0x23u,
        0xfbu,
        0x12u,
        0x27u,
        0x1eu,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_12250[] = {
        0xfcu,
        0x0cu,
        0xf9u,
        0x35u,
        0x09u,
        0x7fu,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_12258[] = {
        0xfcu,
        0x0au,
        0xf9u,
        0x3du,
        0x09u,
        0x7fu,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_12260[] = {
        0xfcu,
        0x0bu,
        0xf9u,
        0x2bu,
        0x09u,
        0x91u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_12268[] = {
        0xfcu,
        0x00u,
        0xf9u,
        0x36u,
        0x4fu,
        0x08u,
        0x4au,
        0x08u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_silence_12272[] = {
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_12274[] = {
        0xfcu,
        0x13u,
        0xf9u,
        0x35u,
        0xfbu,
        0x07u,
        0x30u,
        0x0eu,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_1227e[] = {
        0xfcu,
        0x07u,
        0xf9u,
        0x34u,
        0x48u,
        0x08u,
        0x48u,
        0x0fu,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_12288[] = {
        0xfcu,
        0x06u,
        0xf9u,
        0x00u,
        0xf8u,
        0x14u,
        0x01u,
        0xfau,
        0x03u,
        0x01u,
        0x96u,
        0xfau,
        0x00u,
        0xf8u,
        0x00u,
        0x00u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_1229a[] = {
        0xfcu,
        0x06u,
        0xf9u,
        0x12u,
        0xf8u,
        0x14u,
        0xffu,
        0xfau,
        0xfdu,
        0x0bu,
        0xc8u,
        0xfau,
        0x00u,
        0xf8u,
        0x00u,
        0x00u,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_122ac[] = {
        0xfcu,
        0x1bu,
        0xf9u,
        0x2du,
        0x04u,
        0x3cu,
        0x00u,
        0x00u,
};

const AsoundU8 asound_stream_122b4[] = {
        0xfcu,
        0x1au,
        0xf9u,
        0x1eu,
        0x21u,
        0x3cu,
        0x00u,
        0x00u,
};

void asound_log_init(AsoundEventLog* log, AsoundEvent* events, size_t capacity)
{
	log->events   = events;
	log->count    = 0;
	log->capacity = capacity;
}

static AsoundU8 random_stream_index(AsoundU16 seed, AsoundU8 shift_count)
{
	seed >>= shift_count;
	seed &= 0x0006u;
	return (AsoundU8)(seed >> 1u);
}

int asound_log_push(AsoundEventLog* log, AsoundEventType type, AsoundU8 voice,
                    AsoundU16 a, AsoundU16 b)
{
	AsoundEvent* event;
	if (!log || log->count >= log->capacity) {
		return 0;
	}
	event        = &log->events[log->count++];
	event->type  = type;
	event->voice = voice;
	event->a     = a;
	event->b     = b;
	return 1;
}

void asound_stream_init(SoundStreamState* state, const AsoundU8* stream)
{
	memset(state, 0, sizeof(*state));
	state->ticks_left         = 1;
	state->volume_fade_period = 0xffu;
	state->stream_ptr         = stream;
}

static void key_off_if_needed(SoundStreamState* state, AsoundU8 voice,
                              AsoundEventLog* log)
{
	if (state->keyoff_ticks_left == 0) {
		return;
	}
	--state->keyoff_ticks_left;
	if (state->keyoff_ticks_left == 0) {
		asound_log_push(log, ASOUND_EVENT_KEY_OFF, voice, 0, 0);
	}
}

void asound_stream_step(SoundStreamState* state, AsoundU8 voice, AsoundEventLog* log)
{
	AsoundU8 op;
	AsoundU8 value;

	if (!state || !state->stream_ptr) {
		return;
	}

	key_off_if_needed(state, voice, log);

	if (state->ticks_left > 0) {
		--state->ticks_left;
		if (state->ticks_left > 0) {
			return;
		}
	}

	for (;;) {
		op = state->stream_ptr[state->stream_pos++];
		if (op < 0xf8u) {
			value       = state->stream_ptr[state->stream_pos++];
			state->note = op;
			state->ticks_left = value;
			if (op == 0 && value == 0) {
				state->stream_ptr = 0;
				asound_log_push(log, ASOUND_EVENT_KEY_OFF, voice, 0, 0);
				asound_log_push(log, ASOUND_EVENT_STREAM_END, voice, 0, 0);
			} else {
				state->keyoff_ticks_left =
				        (value > state->keyoff_gap_ticks)
				                ? (AsoundU8)(value - state->keyoff_gap_ticks)
				                : 1u;
				asound_log_push(log, ASOUND_EVENT_KEY_ON, voice, op, value);
			}
			return;
		}

		switch (op) {
		case 0xf8u:
			state->volume_fade_period = state->stream_ptr[state->stream_pos++];
			state->volume_fade_step =
			        (AsoundS8)state->stream_ptr[state->stream_pos++];
			state->volume_fade_ticks_left = 1;
			asound_log_push(log,
			                ASOUND_EVENT_VOLUME,
			                voice,
			                state->volume_fade_period,
			                (AsoundU8)state->volume_fade_step);
			break;
		case 0xf9u:
			value = state->stream_ptr[state->stream_pos++];
			asound_log_push(log, ASOUND_EVENT_VOLUME, voice, value, 0);
			break;
		case 0xfau:
			state->pitch_delta =
			        (AsoundS8)state->stream_ptr[state->stream_pos++];
			asound_log_push(log,
			                ASOUND_EVENT_PITCH_DELTA,
			                voice,
			                (AsoundU8)state->pitch_delta,
			                0);
			break;
		case 0xfbu:
			state->keyoff_gap_ticks = state->stream_ptr[state->stream_pos++];
			asound_log_push(log,
			                ASOUND_EVENT_KEYOFF_GAP,
			                voice,
			                state->keyoff_gap_ticks,
			                0);
			break;
		case 0xfcu:
			state->instrument = state->stream_ptr[state->stream_pos++];
			asound_log_push(log,
			                ASOUND_EVENT_INSTRUMENT,
			                voice,
			                state->instrument,
			                0);
			break;
		case 0xfdu:
			if (state->end_callback) {
				state->end_callback(state, 0);
			} else {
				state->stream_pos = 0;
				state->stream_ptr = 0;
				asound_log_push(log, ASOUND_EVENT_STREAM_END, voice, 0, 0);
				return;
			}
			break;
		case 0xfeu: state->loop_pos = state->stream_pos; break;
		case 0xffu:
			value = state->stream_ptr[state->stream_pos++];
			if (state->loop_count == 0) {
				state->loop_count = value;
				state->stream_pos = state->loop_pos;
			} else {
				--state->loop_count;
				if (state->loop_count != 0) {
					state->stream_pos = state->loop_pos;
				} else {
					state->loop_pos = state->stream_pos;
				}
			}
			break;
		default: return;
		}
	}
}

AsoundU8 asound_sample_variant_max_index(AsoundU16 setup_value)
{
	if (setup_value >= 0x7d9du) {
		return 2;
	}
	if (setup_value >= 0x6a1au) {
		return 1;
	}
	return 0;
}

AsoundU8 asound_sample_variant_next(AsoundU8 current_index, AsoundU8 max_index)
{
	AsoundU8 next = (AsoundU8)(current_index + 1u);
	return (next <= max_index) ? next : 0;
}

SampleRange asound_sample_variant_range(AsoundU8 index)
{
	if (index >= ASOUND_SAMPLE_VARIANT_COUNT) {
		index = 0;
	}
	return asound_sample_variant_ranges[index];
}

void asound_driver_init(AsoundDriver* driver, AsoundU16 setup_value)
{
	memset(driver, 0, sizeof(*driver));
	driver->sample_variant_max_index = asound_sample_variant_max_index(setup_value);
	driver->random_seed = 0x04d2u;
}

void asound_driver_shutdown(AsoundDriver* driver)
{
	memset(driver, 0, sizeof(*driver));
}

static void start_stream(AsoundDriver* driver, AsoundU8 voice, const AsoundU8* stream)
{
	if (voice < ASOUND_STREAM_COUNT) {
		asound_stream_init(&driver->streams[voice], stream);
	}
}

int asound_driver_dispatch_sound_offset(AsoundDriver* driver, AsoundU8 dispatch_offset)
{
	AsoundU8 dispatch_index;
	if (!driver || (dispatch_offset & 1u) != 0 || dispatch_offset > 0x22u) {
		return 0;
	}

	dispatch_index = (AsoundU8)(dispatch_offset >> 1);
	switch (dispatch_index) {
	case 0: {
		const AsoundU8* stream;
		switch (random_stream_index(driver->random_seed, 3u)) {
		case 0u: stream = asound_stream_random0_voice0_07c8; break;
		case 1u: stream = asound_stream_random0_voice0_07d0; break;
		case 2u: stream = asound_stream_random0_voice0_07d8; break;
		default: stream = asound_stream_random0_voice0_07e0; break;
		}
		start_stream(driver, 0, stream);
		return 1;
	}
	case 1: {
		const AsoundU8* stream;
		switch (random_stream_index(driver->random_seed, 2u)) {
		case 0u: stream = asound_stream_random2_voice2_07a8; break;
		case 1u: stream = asound_stream_random2_voice2_07b0; break;
		case 2u: stream = asound_stream_random2_voice2_07b8; break;
		default: stream = asound_stream_random2_voice2_07c0; break;
		}
		start_stream(driver, 2, stream);
		return 1;
	}
	case 2: start_stream(driver, 0, asound_stream_12218); return 1;
	case 3: start_stream(driver, 3, asound_stream_12246); return 1;
	case 4: start_stream(driver, 3, asound_stream_1223c); return 1;
	case 5:
		start_stream(driver, 3, asound_stream_pitch_slide_1222e);
		return 1;
	case 6: start_stream(driver, 2, asound_stream_1227e); return 1;
	case 7: start_stream(driver, 1, asound_stream_12288); return 1;
	case 8: start_stream(driver, 2, asound_stream_1229a); return 1;
	case 9: start_stream(driver, 0, asound_stream_12224); return 1;
	case 10:
		if (driver->streams[4].ticks_left == 0) {
			start_stream(driver, 4, asound_stream_12274);
		}
		return 1;
	case 11: start_stream(driver, 0, asound_stream_12260); return 1;
	case 12: start_stream(driver, 0, asound_stream_12258); return 1;
	case 13: start_stream(driver, 0, asound_stream_silence_12272); return 1;
	case 14: start_stream(driver, 3, asound_stream_12250); return 1;
	case 15: start_stream(driver, 0, asound_stream_12268); return 1;
	case 16:
		start_stream(driver, 1, asound_stream_122ac);
		start_stream(driver, 3, asound_stream_122b4);
		return 1;
	case 17: start_stream(driver, 0, asound_stream_121d6); return 1;
	default: return 0;
	}
}

void asound_driver_tick(AsoundDriver* driver, AsoundEventLog* log)
{
	AsoundU8 voice;
	if (!driver) {
		return;
	}
	for (voice = 0; voice < ASOUND_STREAM_COUNT; ++voice) {
		asound_stream_step(&driver->streams[voice], voice, log);
	}
}

size_t asound_driver_tick_events(AsoundDriver* driver,
                                AsoundEvent* events,
                                size_t event_capacity)
{
	AsoundEventLog log;
	asound_log_init(&log, events, event_capacity);
	asound_driver_tick(driver, &log);
	return log.count;
}

void asound_event_dispatch(const AsoundEvent* event,
                          AsoundEventCallback callback,
                          void* callback_user)
{
	if (!event || !callback) {
		return;
	}
	callback(callback_user,
	         event->type,
	         event->voice,
	         event->a,
	         event->b);
}

void asound_events_dispatch(const AsoundEvent* events,
                           size_t event_count,
                           AsoundEventCallback callback,
                           void* callback_user)
{
	size_t i;
	if (!callback) {
		return;
	}
	for (i = 0; i < event_count; ++i) {
		asound_event_dispatch(&events[i], callback, callback_user);
	}
}

void asound_driver_tick_and_dispatch(AsoundDriver* driver,
                                    AsoundEvent* events,
                                    size_t event_capacity,
                                    size_t* event_count,
                                    AsoundEventCallback callback,
                                    void* callback_user)
{
	size_t count;
	size_t safe_capacity;
	AsoundEvent* sink_events;

	safe_capacity = event_capacity;
	sink_events = events;
	if (!sink_events || safe_capacity == 0) {
		safe_capacity = 0;
		sink_events = 0;
	}

	count = asound_driver_tick_events(driver, sink_events, safe_capacity);
	if (event_count) {
		*event_count = count;
	}
	if (callback) {
		asound_events_dispatch(sink_events, count, callback, callback_user);
	}
}
