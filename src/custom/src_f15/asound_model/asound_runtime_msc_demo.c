#include <stdio.h>

#include "asound_runtime.h"

static const char* event_name(AsoundEventType type)
{
	switch (type) {
	case ASOUND_EVENT_INSTRUMENT: return "INSTRUMENT";
	case ASOUND_EVENT_VOLUME: return "VOLUME";
	case ASOUND_EVENT_PITCH_DELTA: return "PITCH_DELTA";
	case ASOUND_EVENT_KEYOFF_GAP: return "KEYOFF_GAP";
	case ASOUND_EVENT_KEY_ON: return "KEY_ON";
	case ASOUND_EVENT_KEY_OFF: return "KEY_OFF";
	case ASOUND_EVENT_STREAM_END: return "STREAM_END";
	case ASOUND_EVENT_SAMPLE_RANGE: return "SAMPLE_RANGE";
	default: return "UNKNOWN";
	}
}

static void callback(void* user, AsoundEventType type, AsoundU8 voice,
                     AsoundU16 a, AsoundU16 b)
{
	unsigned long tick = (unsigned long)(*(unsigned long*)user);
	printf("[tick %lu] %-12s v=%u a=%u b=%u\n",
	       tick,
	       event_name(type),
	       (unsigned)voice,
	       (unsigned)a,
	       (unsigned)b);
}

static unsigned long parse_u16(const char* text, unsigned long* out)
{
	unsigned long value = 0;
	unsigned long digit;
	char c;

	while (*text == ' ' || *text == '\t') {
		++text;
	}
	if (text[0] == '0' && (text[1] == 'x' || text[1] == 'X')) {
		text += 2;
	}
	if (!*text) {
		return 0;
	}

	for (; *text; ++text) {
		c = *text;
		if (c >= '0' && c <= '9') {
			digit = (unsigned long)(c - '0');
		} else if (c >= 'A' && c <= 'F') {
			digit = (unsigned long)(c - 'A' + 10);
		} else if (c >= 'a' && c <= 'f') {
			digit = (unsigned long)(c - 'a' + 10);
		} else {
			return 0;
		}
		value = value * 16 + digit;
	}
	*out = value;
	return 1;
}

int main(int argc, char** argv)
{
	AsoundRuntime runtime;
	AsoundEvent events[64];
	unsigned long setup_value     = 0x7d9dUL;
	unsigned long dispatch_offset = 0x0aUL;
	unsigned long ticks           = 16;
	unsigned long tick;
	AsoundU8 offset;
	size_t count;

	if (argc > 1) {
		if (!parse_u16(argv[1], &setup_value)) {
			printf("invalid setup value\n");
			return 1;
		}
	}
	if (argc > 2) {
		if (!parse_u16(argv[2], &dispatch_offset)) {
			printf("invalid dispatch offset\n");
			return 1;
		}
	}
	if (argc > 3) {
		if (!parse_u16(argv[3], &ticks)) {
			printf("invalid tick count\n");
			return 1;
		}
	}

	asound_runtime_init(&runtime, (AsoundU16)setup_value, callback, &tick);
	offset = (AsoundU8)(dispatch_offset & 0xffu);
	if (!asound_runtime_dispatch_sound(&runtime, offset)) {
		printf("failed to dispatch sound offset 0x%lx\n", dispatch_offset);
		return 1;
	}

	for (tick = 0; tick < ticks; ++tick) {
		count = asound_runtime_tick_and_dispatch(&runtime, events, 64, 0);
		printf("tick %lu produced %lu events\n", tick, (unsigned long)count);
		if (count == 0 && tick > 0) {
			break;
		}
	}

	asound_runtime_shutdown(&runtime);
	return 0;
}
