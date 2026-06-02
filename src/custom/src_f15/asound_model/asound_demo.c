#include "asound_model.h"

#include <stdio.h>
#include <stdlib.h>

struct DemoBackendState {
	AsoundU8 active_voices;
	AsoundU8 last_voice_instrument[ASOUND_STREAM_COUNT];
	unsigned long tick;
};

typedef struct DemoBackendState DemoBackendState;

static const char* asound_event_name(AsoundEventType type)
{
	switch (type) {
	case ASOUND_EVENT_INSTRUMENT:
		return "INSTRUMENT";
	case ASOUND_EVENT_VOLUME:
		return "VOLUME";
	case ASOUND_EVENT_PITCH_DELTA:
		return "PITCH_DELTA";
	case ASOUND_EVENT_KEYOFF_GAP:
		return "KEYOFF_GAP";
	case ASOUND_EVENT_KEY_ON:
		return "KEY_ON";
	case ASOUND_EVENT_KEY_OFF:
		return "KEY_OFF";
	case ASOUND_EVENT_STREAM_END:
		return "STREAM_END";
	case ASOUND_EVENT_SAMPLE_RANGE:
		return "SAMPLE_RANGE";
	default:
		return "UNKNOWN";
	}
}

static void asound_demo_callback(void* user,
                                AsoundEventType type,
                                AsoundU8 voice,
                                AsoundU16 a,
                                AsoundU16 b)
{
	DemoBackendState* state = (DemoBackendState*)user;
	(void)state;
	printf("  [tick %lu] %-12s v=%u a=%u b=%u\n",
	       (unsigned long)state->tick,
	       asound_event_name(type),
	       (unsigned)voice,
	       (unsigned)a,
	       (unsigned)b);

	if (type == ASOUND_EVENT_INSTRUMENT && voice < ASOUND_STREAM_COUNT) {
		state->last_voice_instrument[voice] = (AsoundU8)a;
	}
	if (type == ASOUND_EVENT_KEY_ON && voice < ASOUND_STREAM_COUNT) {
		state->active_voices |= (AsoundU8)(1u << voice);
	}
	if (type == ASOUND_EVENT_KEY_OFF && voice < ASOUND_STREAM_COUNT) {
		state->active_voices &= (AsoundU8)~(1u << voice);
	}
}

static int parse_u32_arg(const char* text, unsigned long* value)
{
	char* end = 0;
	unsigned long parsed;

	if (!text || !value) {
		return 0;
	}

	parsed = strtoul(text, &end, 0);
	if (end == text || *end != '\0') {
		return 0;
	}
	*value = parsed;
	return 1;
}

int main(int argc, char** argv)
{
	unsigned long setup_value;
	unsigned long dispatch_value;
	unsigned long tick_count;
	size_t event_count;
	AsoundU8 dispatch_offset;
	AsoundDriver driver;
	AsoundEvent events[64];
	DemoBackendState state;
	unsigned long i;

	if (argc < 4) {
		fprintf(stderr, "usage: %s <setup> <dispatch_offset> <ticks>\n", argv[0]);
		fprintf(stderr, "  examples: %s 0x7d9d 0x0a 16\n", argv[0]);
		return 1;
	}

	if (!parse_u32_arg(argv[1], &setup_value)
	|| !parse_u32_arg(argv[2], &dispatch_value)
	|| !parse_u32_arg(argv[3], &tick_count)) {
		fprintf(stderr, "invalid argument\n");
		return 1;
	}
	if (dispatch_value > 0xFFu || setup_value > 0xFFFFu) {
		fprintf(stderr, "arguments out of range\n");
		return 1;
	}

	dispatch_offset = (AsoundU8)dispatch_value;
	state.tick = 0u;
	state.active_voices = 0u;
	state.last_voice_instrument[0] = 0u;
	state.last_voice_instrument[1] = 0u;
	state.last_voice_instrument[2] = 0u;
	state.last_voice_instrument[3] = 0u;
	state.last_voice_instrument[4] = 0u;
	state.last_voice_instrument[5] = 0u;

	asound_driver_init(&driver, (AsoundU16)setup_value);
	if (!asound_driver_dispatch_sound_offset(&driver, dispatch_offset)) {
		fprintf(stderr, "failed to dispatch offset 0x%lx\n", dispatch_value);
		return 1;
	}

	printf("asound demo setup=0x%lx offset=0x%lx\n", setup_value, dispatch_value);
	for (i = 0; i < tick_count; ++i) {
		state.tick = i;
		event_count = 0u;
		asound_driver_tick_and_dispatch(&driver,
		                              events,
		                              64,
		                              &event_count,
		                              asound_demo_callback,
		                              &state);
		printf("tick %lu => %lu events\n", i, (unsigned long)event_count);
		if (state.active_voices == 0u && i > 0u && event_count == 0u) {
			printf("no active streams and no events, stopping early\n");
			break;
		}
	}

	printf("active voices mask after %lu ticks: 0x%02x\n",
	       (unsigned long)i,
	       (unsigned)state.active_voices);
	return 0;
}
