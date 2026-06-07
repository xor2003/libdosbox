#ifndef ASOPL_H
#define ASOPL_H

#include "asound_model.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ASOPL_REGISTER_COUNT   256
#define ASOPL_VOICE_COUNT      11
#define ASOPL_INSTRUMENT_COUNT 28
#define ASOPL_INSTRUMENT_SIZE  44

typedef struct AsoplState {
	AsoundU8 shadow[ASOPL_REGISTER_COUNT];
	AsoundU8 voice_instrument[ASOPL_VOICE_COUNT];
	AsoundU8 voice_volume[ASOPL_VOICE_COUNT];
	AsoundU8 voice_note[ASOPL_VOICE_COUNT];
	AsoundU8 voice_special_count[ASOPL_VOICE_COUNT];
	AsoundU16 voice_special_mask[ASOPL_VOICE_COUNT];
	AsoundU16 voice_special_base[ASOPL_VOICE_COUNT];
	AsoundU16 voice_special_delta[ASOPL_VOICE_COUNT];
	AsoundU8 noise_slot_ticks[2];
	AsoundU8 noise_slot_voice[2];
	AsoundU16 noise_slot_mask[2];
	AsoundU16 noise_slot_base[2];
	AsoundU16 noise_slot_delta[2];
	AsoundU16 noise_seed;
	AsoundU8 drone_enabled;
	AsoundU8 drone_enabled_current;
	AsoundU16 drone_pitch;
	AsoundU16 drone_pitch_current;
} AsoplState;

void asopl_init(AsoplState* state);
void asopl_reset(AsoplState* state);
void asopl_apply_event(AsoplState* state, const AsoundDriver* driver,
                       const AsoundEvent* event);
void asopl_service_tick(AsoplState* state, const AsoundDriver* driver);
void asopl_noise_tick(AsoplState* state);
void asopl_set_drone_enable(AsoplState* state, AsoundU8 enabled);
void asopl_set_drone_pitch(AsoplState* state, AsoundU16 pitch);
AsoundU8 asopl_get_register(const AsoplState* state, AsoundU8 reg);

#ifdef __cplusplus
}
#endif

#endif
