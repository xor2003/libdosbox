#include "asopl.h"

static const AsoundU8 asopl_rhythm_masks[6] = {0x10u, 0x08u, 0x04u,
                                               0x02u, 0x01u, 0x00u};
static const AsoundU16 asopl_note_table[12] = {
        0x0200u, 0x021eu, 0x023fu, 0x0261u, 0x0285u, 0x02abu,
        0x02d4u, 0x02ffu, 0x032du, 0x035du, 0x0390u, 0x03c7u,
};
static const AsoundU8 asopl_voice_operator_pairs[ASOPL_VOICE_COUNT][2] = {
        {0x00u, 0x03u}, {0x01u, 0x04u}, {0x02u, 0x05u}, {0x06u, 0x09u},
        {0x07u, 0x0au}, {0x08u, 0x0bu}, {0x0cu, 0x0fu}, {0x10u, 0x63u},
        {0x0eu, 0x63u}, {0x11u, 0x63u}, {0x0du, 0x63u},
};
static const AsoundU8 asopl_operator_bases[18] = {
        0x00u, 0x01u, 0x02u, 0x03u, 0x04u, 0x05u, 0x08u, 0x09u, 0x0au,
        0x0bu, 0x0cu, 0x0du, 0x10u, 0x11u, 0x12u, 0x13u, 0x14u, 0x15u,
};
static const AsoundU8 asopl_instrument_data[ASOPL_INSTRUMENT_COUNT *
                                            ASOPL_INSTRUMENT_SIZE] = {
#include "asopl_inst.inc"
};

static AsoundU16 asopl_load_u16(const AsoundU8* bytes)
{
	return (AsoundU16)(bytes[0] | ((AsoundU16)bytes[1] << 8));
}

static AsoundU8 asopl_clamp_u6(int value)
{
	if (value < 0) {
		return 0u;
	}
	if (value > 0x3f) {
		return 0x3fu;
	}
	return (AsoundU8)value;
}

static AsoundU8 asopl_voice_to_base_channel(AsoundU8 voice)
{
	if (voice <= 6u) {
		return voice;
	}
	if (voice == 7u || voice == 10u) {
		return 7u;
	}
	return 8u;
}

static AsoundU8 asopl_volume_operator(AsoundU8 voice)
{
	if (voice <= 6u) {
		return asopl_voice_operator_pairs[voice][1];
	}
	return asopl_voice_operator_pairs[voice][0];
}

static void asopl_write_reg(AsoplState* state, AsoundU8 reg, AsoundU8 value)
{
	state->shadow[reg] = value;
}

static void asopl_apply_instrument_part(AsoplState* state, AsoundU8 voice,
                                        AsoundU8 operator_index,
                                        const AsoundU8* part)
{
	AsoundU8 opbase;
	AsoundU8 channel;
	AsoundU8 value;

	if (operator_index >= (AsoundU8)(sizeof(asopl_operator_bases) /
	                                 sizeof(asopl_operator_bases[0]))) {
		return;
	}

	opbase  = asopl_operator_bases[operator_index];
	channel = asopl_voice_to_base_channel(voice);

	value = (AsoundU8)(((0x3fu - (part[6] & 0x3fu)) & 0x3fu) |
	                   ((part[7] & 0x03u) << 6));
	asopl_write_reg(state, (AsoundU8)(0x40u + opbase), value);

	value = (AsoundU8)(((part[0x0a] & 0x07u) << 1) | (part[0x0d] ? 0u : 1u));
	asopl_write_reg(state, (AsoundU8)(0xc0u + channel), value);

	value = (AsoundU8)(((part[0] & 0x0fu) << 4) | (part[1] & 0x0fu));
	asopl_write_reg(state, (AsoundU8)(0x60u + opbase), value);

	value = (AsoundU8)(((part[2] & 0x0fu) << 4) | (part[3] & 0x0fu));
	asopl_write_reg(state, (AsoundU8)(0x80u + opbase), value);

	value = (AsoundU8)((part[0x0b] ? 0x80u : 0u) |
	                   (part[0x0c] ? 0x40u : 0u) |
	                   (part[4] ? 0x20u : 0u) | (part[5] ? 0x10u : 0u) |
	                   (part[9] & 0x0fu));
	asopl_write_reg(state, (AsoundU8)(0x20u + opbase), value);

	value = (AsoundU8)(part[8] & 0x03u);
	asopl_write_reg(state, (AsoundU8)(0xe0u + opbase), value);
}

static void asopl_load_instrument(AsoplState* state, AsoundU8 voice,
                                  AsoundU8 instrument)
{
	const AsoundU8* record;
	const AsoundU8* pair;

	if (instrument >= ASOPL_INSTRUMENT_COUNT || voice >= ASOPL_VOICE_COUNT) {
		return;
	}

	record = &asopl_instrument_data[instrument * ASOPL_INSTRUMENT_SIZE];
	pair   = asopl_voice_operator_pairs[voice];

	asopl_write_reg(state, 0x01u, 0x20u);
	asopl_write_reg(state, 0xbdu,
	                (AsoundU8)((state->shadow[0xbdu] & 0x1fu) | 0xc0u));

	asopl_apply_instrument_part(state, voice, pair[0], record);
	state->voice_special_count[voice] = record[0x0eu];
	state->voice_special_mask[voice]  = asopl_load_u16(record + 0x10u);
	state->voice_special_base[voice]  = asopl_load_u16(record + 0x12u);
	state->voice_special_delta[voice] = asopl_load_u16(record + 0x14u);
	if (pair[1] < 0x14u) {
		asopl_apply_instrument_part(state, voice, pair[1], record + 22);
	}
	state->voice_instrument[voice] = instrument;
}

static void asopl_set_voice_volume(AsoplState* state, AsoundU8 voice,
                                   AsoundU8 volume)
{
	AsoundU8 op_index;
	AsoundU8 reg;
	AsoundU8 preserved;

	if (voice >= ASOPL_VOICE_COUNT) {
		return;
	}

	op_index = asopl_volume_operator(voice);
	if (op_index >= (AsoundU8)(sizeof(asopl_operator_bases) /
	                           sizeof(asopl_operator_bases[0]))) {
		return;
	}

	reg       = (AsoundU8)(0x40u + asopl_operator_bases[op_index]);
	preserved = (AsoundU8)(state->shadow[reg] & 0xc0u);
	asopl_write_reg(
	        state, reg, (AsoundU8)(preserved | (0x3fu - (volume & 0x3fu))));
	state->voice_volume[voice] = (AsoundU8)(volume & 0x3fu);
}

static void asopl_set_voice_note(AsoplState* state, AsoundU8 voice, AsoundU8 note)
{
	AsoundU8 channel;
	AsoundU8 low_reg;
	AsoundU8 high_reg;
	AsoundU8 octave;
	AsoundU16 fnum;
	AsoundU8 key_bit;

	if (voice >= ASOPL_VOICE_COUNT) {
		return;
	}

	channel = asopl_voice_to_base_channel(voice);
	low_reg = (AsoundU8)(0xa0u + channel);
	high_reg = (AsoundU8)(0xb0u + channel);
	octave  = (AsoundU8)(note / 12u);
	fnum    = asopl_note_table[note % 12u];
	key_bit = (AsoundU8)(state->shadow[high_reg] & 0x20u);

	asopl_write_reg(state, low_reg, (AsoundU8)(fnum & 0xffu));
	asopl_write_reg(
	        state, high_reg,
	        (AsoundU8)(key_bit | ((octave & 0x07u) << 2) | ((fnum >> 8) & 0x03u)));
	state->voice_note[voice] = note;
}

static void asopl_set_voice_fnum(AsoplState* state, AsoundU8 voice, AsoundU16 fnum)
{
	AsoundU8 channel;
	AsoundU8 low_reg;
	AsoundU8 high_reg;
	AsoundU8 key_bit;

	if (voice >= ASOPL_VOICE_COUNT) {
		return;
	}

	channel = asopl_voice_to_base_channel(voice);
	low_reg = (AsoundU8)(0xa0u + channel);
	high_reg = (AsoundU8)(0xb0u + channel);
	key_bit = (AsoundU8)(state->shadow[high_reg] & 0x20u);

	asopl_write_reg(state, low_reg, (AsoundU8)(fnum & 0xffu));
	asopl_write_reg(state, high_reg,
	                (AsoundU8)(key_bit | ((fnum >> 8) & 0x1fu)));
}

static void asopl_add_voice_fnum_delta(AsoplState* state, AsoundU8 voice,
                                       AsoundS8 delta)
{
	AsoundU8 channel;
	AsoundU8 low_reg;
	AsoundU8 high_reg;
	AsoundU16 fnum;

	if (voice >= ASOPL_VOICE_COUNT || delta == 0) {
		return;
	}

	channel = asopl_voice_to_base_channel(voice);
	low_reg = (AsoundU8)(0xa0u + channel);
	high_reg = (AsoundU8)(0xb0u + channel);
	fnum = (AsoundU16)(((AsoundU16)(state->shadow[high_reg] & 0x1fu) << 8) |
	                   state->shadow[low_reg]);
	fnum = (AsoundU16)(fnum + (int)delta);
	asopl_set_voice_fnum(state, voice, fnum);
}

static void asopl_key_off_voice(AsoplState* state, AsoundU8 voice)
{
	AsoundU8 channel;
	AsoundU8 reg;

	if (voice < 6u) {
		channel = asopl_voice_to_base_channel(voice);
		reg     = (AsoundU8)(0xb0u + channel);
		asopl_write_reg(state, reg, (AsoundU8)(state->shadow[reg] & 0xdfu));
		return;
	}

	if (voice > 10u) {
		return;
	}

	asopl_write_reg(state, 0xbdu,
	                (AsoundU8)(state->shadow[0xbdu] &
	                           (AsoundU8)~asopl_rhythm_masks[voice - 6u]));
}

static void asopl_key_on_voice(AsoplState* state, AsoundU8 voice)
{
	AsoundU8 channel;
	AsoundU8 reg;

	if (voice < 6u) {
		channel = asopl_voice_to_base_channel(voice);
		reg     = (AsoundU8)(0xb0u + channel);
		asopl_write_reg(state, reg, (AsoundU8)(state->shadow[reg] | 0x20u));
		return;
	}

	if (voice > 10u) {
		return;
	}

	asopl_write_reg(state, 0xbdu,
	                (AsoundU8)(state->shadow[0xbdu] |
	                           asopl_rhythm_masks[voice - 6u]));
}

static void asopl_start_noise_slot(AsoplState* state, AsoundU8 slot, AsoundU8 voice)
{
	state->noise_slot_ticks[slot] = state->voice_special_count[voice];
	state->noise_slot_voice[slot] = voice;
	state->noise_slot_mask[slot]  = state->voice_special_mask[voice];
	state->noise_slot_base[slot]  = state->voice_special_base[voice];
	state->noise_slot_delta[slot] = state->voice_special_delta[voice];
}

static void asopl_update_drone_mode(AsoplState* state)
{
	if (state->drone_enabled != state->drone_enabled_current) {
		if (state->drone_enabled) {
			asopl_load_instrument(state, 5u, 6u);
			asopl_load_instrument(state, 6u, 1u);
			asopl_set_voice_volume(state, 5u, 0x0fu);
			asopl_set_voice_note(state, 5u, 0x0bu);
			asopl_set_voice_volume(state, 5u, 0x0fu);
			asopl_key_on_voice(state, 5u);
			asopl_set_voice_note(state, 6u, 0x37u);
			asopl_set_voice_volume(state, 6u, 0x0fu);
			asopl_key_on_voice(state, 6u);
		} else {
			asopl_key_off_voice(state, 5u);
			asopl_key_off_voice(state, 6u);
		}
		state->drone_enabled_current = state->drone_enabled;
	}

	if (!state->drone_enabled_current) {
		return;
	}
	if (state->drone_pitch == state->drone_pitch_current) {
		return;
	}

	asopl_set_voice_fnum(state, 5u, (AsoundU16)(state->drone_pitch + 0x08fcu));
	asopl_set_voice_volume(state, 6u,
	                       asopl_clamp_u6((int)(state->drone_pitch >> 6) + 0x0f));
	asopl_set_voice_volume(state, 5u,
	                       asopl_clamp_u6((int)(state->drone_pitch >> 7) + 0x0f));
	state->drone_pitch_current = state->drone_pitch;
}

void asopl_init(AsoplState* state)
{
	asopl_reset(state);
}

void asopl_reset(AsoplState* state)
{
	size_t i;

	if (!state) {
		return;
	}

	for (i = 0; i < sizeof(state->shadow); ++i) {
		state->shadow[i] = 0u;
	}
	for (i = 0; i < ASOPL_VOICE_COUNT; ++i) {
		state->voice_instrument[i] = 0u;
		state->voice_volume[i]     = 0u;
		state->voice_note[i]       = 0u;
		state->voice_special_count[i] = 0u;
		state->voice_special_mask[i]  = 0u;
		state->voice_special_base[i]  = 0u;
		state->voice_special_delta[i] = 0u;
	}
	for (i = 0; i < 2u; ++i) {
		state->noise_slot_ticks[i] = 0u;
		state->noise_slot_voice[i] = 0u;
		state->noise_slot_mask[i]  = 0u;
		state->noise_slot_base[i]  = 0u;
		state->noise_slot_delta[i] = 0u;
	}
	state->noise_seed           = 0x04d2u;
	state->drone_enabled        = 0u;
	state->drone_enabled_current = 0u;
	state->drone_pitch          = 0u;
	state->drone_pitch_current  = 0u;
	asopl_write_reg(state, 0x01u, 0x20u);
	asopl_write_reg(state, 0xbdu, 0x20u);
}

void asopl_apply_event(AsoplState* state, const AsoundDriver* driver,
                       const AsoundEvent* event)
{
	AsoundU8 voice;
	AsoundU8 volume;

	(void)driver;
	if (!state || !event) {
		return;
	}

	voice  = event->voice;
	volume = 0u;

	switch (event->type) {
	case ASOUND_EVENT_INSTRUMENT:
		asopl_load_instrument(state, voice, (AsoundU8)event->a);
		break;
	case ASOUND_EVENT_VOLUME:
		asopl_set_voice_volume(state, voice, asopl_clamp_u6((int)event->a));
		break;
	case ASOUND_EVENT_KEY_ON:
		if (voice < ASOPL_VOICE_COUNT && state->voice_special_count[voice] != 0u) {
			if (state->noise_slot_ticks[0] == 0u) {
				asopl_start_noise_slot(state, 0u, voice);
			} else {
				asopl_start_noise_slot(state, 1u, voice);
			}
			break;
		}
		if (driver && voice < ASOUND_STREAM_COUNT) {
			volume = driver->streams[voice].volume;
		} else if (voice < ASOPL_VOICE_COUNT) {
			volume = state->voice_volume[voice];
		}
		asopl_set_voice_note(state, voice, (AsoundU8)event->a);
		asopl_set_voice_volume(state, voice, volume);
		asopl_key_on_voice(state, voice);
		break;
	case ASOUND_EVENT_KEY_OFF:
	case ASOUND_EVENT_STREAM_END:
		asopl_key_off_voice(state, voice);
		break;
	default: break;
	}
}

void asopl_service_tick(AsoplState* state, const AsoundDriver* driver)
{
	AsoundU8 voice;
	AsoundU8 slot;

	if (!state || !driver) {
		return;
	}

	for (voice = 0; voice < ASOUND_STREAM_COUNT; ++voice) {
		const SoundStreamState* stream = &driver->streams[voice];
		if (!stream->stream_ptr || stream->pitch_delta == 0 || stream->note == 0u) {
			continue;
		}
		asopl_add_voice_fnum_delta(state, voice, stream->pitch_delta);
	}

	for (slot = 0; slot < 2u; ++slot) {
		if (state->noise_slot_ticks[slot] == 0u) {
			continue;
		}
		state->noise_slot_base[slot] =
		        (AsoundU16)(state->noise_slot_base[slot] +
		                    state->noise_slot_delta[slot]);
		--state->noise_slot_ticks[slot];
		if (state->noise_slot_ticks[slot] == 0u) {
			asopl_key_off_voice(state, state->noise_slot_voice[slot]);
		}
	}

	asopl_update_drone_mode(state);
}

void asopl_noise_tick(AsoplState* state)
{
	AsoundU8 slot;

	if (!state) {
		return;
	}

	state->noise_seed =
	        (AsoundU16)((state->noise_seed + 0x9248u) & 0xffffu);
	state->noise_seed = (AsoundU16)((state->noise_seed >> 3) |
	                                (state->noise_seed << 13));

	for (slot = 0; slot < 2u; ++slot) {
		AsoundU16 fnum;
		if (state->noise_slot_ticks[slot] == 0u) {
			continue;
		}
		if (slot == 0u) {
			fnum = (AsoundU16)(((AsoundU16)~state->noise_seed &
			                    state->noise_slot_mask[slot]) +
			                   state->noise_slot_base[slot]);
		} else {
			fnum = (AsoundU16)((state->noise_seed &
			                    state->noise_slot_mask[slot]) +
			                   state->noise_slot_base[slot]);
		}
		asopl_set_voice_fnum(state, state->noise_slot_voice[slot], fnum);
	}
}

void asopl_set_drone_enable(AsoplState* state, AsoundU8 enabled)
{
	if (!state) {
		return;
	}
	state->drone_enabled = (AsoundU8)(enabled ? 1u : 0u);
}

void asopl_set_drone_pitch(AsoplState* state, AsoundU16 pitch)
{
	if (!state) {
		return;
	}
	if (pitch > 0x02bcu) {
		pitch = 0x02bcu;
	}
	state->drone_pitch = pitch;
}

AsoundU8 asopl_get_register(const AsoplState* state, AsoundU8 reg)
{
	if (!state) {
		return 0u;
	}
	return state->shadow[reg];
}
