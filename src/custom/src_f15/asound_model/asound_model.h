#ifndef ASOUND_MODEL_H
#define ASOUND_MODEL_H

#include <limits.h>
#include <stddef.h>

typedef unsigned char AsoundU8;
typedef signed char AsoundS8;
typedef unsigned short AsoundU16;

#if UCHAR_MAX != 0xff || USHRT_MAX != 0xffff
	#error "ASOUND model requires 8-bit char and 16-bit short"
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef enum AsoundEventType {
	ASOUND_EVENT_INSTRUMENT = 1,
	ASOUND_EVENT_VOLUME,
	ASOUND_EVENT_PITCH_DELTA,
	ASOUND_EVENT_KEYOFF_GAP,
	ASOUND_EVENT_KEY_ON,
	ASOUND_EVENT_KEY_OFF,
	ASOUND_EVENT_STREAM_END,
	ASOUND_EVENT_SAMPLE_RANGE
} AsoundEventType;

typedef struct AsoundEvent {
	AsoundEventType type;
	AsoundU8 voice;
	AsoundU16 a;
	AsoundU16 b;
} AsoundEvent;

typedef struct AsoundEventLog {
	AsoundEvent* events;
	size_t count;
	size_t capacity;
} AsoundEventLog;

typedef void (*AsoundEventCallback)(void* user, AsoundEventType type,
                                    AsoundU8 voice, AsoundU16 a, AsoundU16 b);

typedef struct SoundStreamState {
	AsoundU8 ticks_left;
	AsoundS8 pitch_delta;
	AsoundS8 volume_fade_step;
	AsoundU8 note;
	AsoundU16 instrument;
	AsoundU8 keyoff_gap_ticks;
	AsoundU8 keyoff_ticks_left;
	AsoundU8 volume_fade_ticks_left;
	AsoundU8 volume_fade_period;
	const AsoundU8* stream_ptr;
	AsoundU16 stream_pos;
	AsoundU16 loop_pos;
	AsoundU16 loop_count;
	void (*end_callback)(struct SoundStreamState* state, void* user);
} SoundStreamState;

typedef struct SampleRange {
	AsoundU16 start;
	AsoundU16 end;
} SampleRange;

typedef struct AsoundDriver {
	SoundStreamState streams[6];
	AsoundU8 sample_variant_index;
	AsoundU8 sample_variant_max_index;
	AsoundU16 random_seed;
	AsoundU8 pending_sample_valid;
	AsoundU8 pending_sample_voice;
	AsoundU16 pending_sample_start;
	AsoundU16 pending_sample_end;
} AsoundDriver;

#define ASOUND_SAMPLE_VARIANT_COUNT 3
#define ASOUND_STREAM_COUNT         6

extern const SampleRange asound_sample_variant_ranges[ASOUND_SAMPLE_VARIANT_COUNT];
extern const AsoundU8 asound_stream_121d6[];
extern const AsoundU8 asound_stream_r2v2_07a8[];
extern const AsoundU8 asound_stream_r2v2_07b0[];
extern const AsoundU8 asound_stream_r2v2_07b8[];
extern const AsoundU8 asound_stream_r2v2_07c0[];
extern const AsoundU8 asound_stream_r0v0_07c8[];
extern const AsoundU8 asound_stream_r0v0_07d0[];
extern const AsoundU8 asound_stream_r0v0_07d8[];
extern const AsoundU8 asound_stream_r0v0_07e0[];
extern const AsoundU8 asound_stream_12218[];
extern const AsoundU8 asound_stream_12224[];
extern const AsoundU8 asound_stream_pitch_slide_1222e[];
extern const AsoundU8 asound_stream_1223c[];
extern const AsoundU8 asound_stream_12246[];
extern const AsoundU8 asound_stream_12250[];
extern const AsoundU8 asound_stream_12258[];
extern const AsoundU8 asound_stream_12260[];
extern const AsoundU8 asound_stream_12268[];
extern const AsoundU8 asound_stream_silence_12272[];
extern const AsoundU8 asound_stream_12274[];
extern const AsoundU8 asound_stream_1227e[];
extern const AsoundU8 asound_stream_12288[];
extern const AsoundU8 asound_stream_1229a[];
extern const AsoundU8 asound_stream_122ac[];
extern const AsoundU8 asound_stream_122b4[];

void asound_log_init(AsoundEventLog* log, AsoundEvent* events, size_t capacity);
int asound_log_push(AsoundEventLog* log, AsoundEventType type, AsoundU8 voice,
                    AsoundU16 a, AsoundU16 b);

void asound_stream_init(SoundStreamState* state, const AsoundU8* stream);
void asound_stream_step(SoundStreamState* state, AsoundU8 voice, AsoundEventLog* log);

AsoundU8 asound_sample_variant_max_index(AsoundU16 setup_value);
AsoundU8 asound_sample_variant_next(AsoundU8 current_index, AsoundU8 max_index);
SampleRange asound_sample_variant_range(AsoundU8 index);

void asound_driver_init(AsoundDriver* driver, AsoundU16 setup_value);
void asound_driver_shutdown(AsoundDriver* driver);
int asound_driver_dispatch_sound(AsoundDriver* driver, AsoundU8 dispatch_offset);
void asound_driver_tick(AsoundDriver* driver, AsoundEventLog* log);
size_t asound_driver_tick_events(AsoundDriver* driver, AsoundEvent* events,
                                 size_t event_capacity);
void asound_driver_tick_and_dispatch(AsoundDriver* driver, AsoundEvent* events,
                                     size_t event_capacity, size_t* event_count,
                                     AsoundEventCallback callback,
                                     void* callback_user);
void asound_events_dispatch(const AsoundEvent* events, size_t event_count,
                            AsoundEventCallback callback, void* callback_user);
void asound_event_dispatch(const AsoundEvent* event,
                           AsoundEventCallback callback, void* callback_user);

/* Compatibility: legacy ASOUND/F14 ABI entrypoint emulation. */
void asound_driver_play_sample(AsoundDriver* driver, AsoundU8 sample_index);

void sound_driver_setup(AsoundU16 setup_value, AsoundU16 driver_segment);
void sound_driver_shutdown(void);
int sound_driver_dispatch_sound(AsoundU16 dispatch_offset);
int sound_driver_play_sample(AsoundU16 sample_index);
void sound_driver_play_intro(void);
void sound_driver_set_drone_pitch(AsoundU16 pitch);
void sound_driver_enable_drone(void);
void sound_driver_disable_drone(void);
void sound_driver_timer_tick(void);
void sound_driver_noise_tick(void);

/* F14-style slot/wrapper aliases, kept for drop-in source compatibility. */
#define audio_slot_64(s1, s2) sound_driver_setup((s1), (s2))
#define audio_slot_65()       sound_driver_shutdown()
#define audio_slot_66(v)      sound_driver_dispatch_sound((v))
#define audio_slot_67()       sound_driver_play_intro()
#define audio_slot_68()       sound_driver_enable_drone()
#define audio_slot_69()       sound_driver_disable_drone()
#define audio_slot_6a(p)      sound_driver_set_drone_pitch((p))
#define audio_slot_6b()       sound_driver_timer_tick()
#define audio_slot_6c()       sound_driver_noise_tick()
#define audio_slot_6d(v)      sound_driver_play_sample((v))

#define audio_jump_64(asetup, _aseg) sound_driver_setup((asetup), (_aseg))
#define audio_jump_65()              sound_driver_shutdown()
#define audio_jump_66(v)             sound_driver_dispatch_sound((v))
#define audio_jump_67()              sound_driver_play_intro()
#define audio_jump_68()              sound_driver_enable_drone()
#define audio_jump_69()              sound_driver_disable_drone()
#define audio_jump_6a(p)             sound_driver_set_drone_pitch((p))
#define audio_jump_6b()              sound_driver_timer_tick()
#define audio_jump_6c()              sound_driver_noise_tick()
#define audio_jump_6d(v)             sound_driver_play_sample((v))

#ifdef __cplusplus
}
#endif

#endif
