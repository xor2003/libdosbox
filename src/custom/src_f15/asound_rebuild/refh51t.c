typedef unsigned char AsoundU8;
typedef unsigned short AsoundU16;

#ifndef REF_PHASE
#define REF_PHASE 1
#endif

#define REF_PHASE_SETUP   0
#define REF_PHASE_SAMPLE0 1
#define REF_PHASE_SAMPLE1 2
#define REF_PHASE_SAMPLE2 3
#define REF_PHASE_TIMER   4
#define REF_PHASE_NOISE   5

void far audio_slot_64(AsoundU16 driver_segment, AsoundU16 setup_value);
void far audio_slot_65(void);
void far audio_slot_6b(void);
void far audio_slot_6c(void);
int far audio_slot_6d(AsoundU16 sample_offset);
extern AsoundU8 far sample_blob[];

static void patch_calibration_for_kvikdos(void)
{
	union {
		void (far *fn)(AsoundU16, AsoundU16);
		struct {
			AsoundU16 off;
			AsoundU16 seg;
		} raw;
	} entry;
	AsoundU8 far* code;

	entry.fn = audio_slot_64;
	code = (AsoundU8 far*)(((unsigned long)entry.raw.seg << 16) | 0x00C1u);
	code[0] = 0xC3u;
}

static void patch_probe_for_kvikdos(void)
{
	union {
		void (far *fn)(AsoundU16, AsoundU16);
		struct {
			AsoundU16 off;
			AsoundU16 seg;
		} raw;
	} entry;
	AsoundU8 far* code;

	entry.fn = audio_slot_64;
	code = (AsoundU8 far*)(((unsigned long)entry.raw.seg << 16) | 0x0125u);
	code[0] = 0xE8u;
	code[1] = 0xA6u;
	code[2] = 0x00u;
	code[3] = 0xC3u;
}

static void patch_sample_wait_for_kvikdos(void)
{
	union {
		void (far *fn)(AsoundU16, AsoundU16);
		struct {
			AsoundU16 off;
			AsoundU16 seg;
		} raw;
	} entry;
	AsoundU8 far* code;

	entry.fn = audio_slot_64;
	code = (AsoundU8 far*)(((unsigned long)entry.raw.seg << 16) | 0x0656u);
	code[0] = 0x90u;
	code[1] = 0x90u;
}

static void patch_sample_pacing_for_kvikdos(void)
{
	union {
		void (far *fn)(AsoundU16, AsoundU16);
		struct {
			AsoundU16 off;
			AsoundU16 seg;
		} raw;
	} entry;
	AsoundU8 far* code;

	entry.fn = audio_slot_64;
	code = (AsoundU8 far*)(((unsigned long)entry.raw.seg << 16) | 0x0671u);
	code[0] = 0xEBu;
	code[1] = 0x0Cu;

	code = (AsoundU8 far*)(((unsigned long)entry.raw.seg << 16) | 0x0723u);
	code[0] = 0xEBu;
	code[1] = 0x14u;

	code = (AsoundU8 far*)(((unsigned long)entry.raw.seg << 16) | 0x074Fu);
	code[0] = 0xEBu;
	code[1] = 0x0Eu;
}

static AsoundU16 sample_data_seg(void)
{
	union {
		AsoundU8 far* ptr;
		struct {
			AsoundU16 off;
			AsoundU16 seg;
		} raw;
	} value;

	value.ptr = sample_blob;
	return value.raw.seg;
}

int main(void)
{
	AsoundU16 sample_seg;

	sample_seg = sample_data_seg();
	patch_calibration_for_kvikdos();
	patch_probe_for_kvikdos();
	patch_sample_wait_for_kvikdos();
	patch_sample_pacing_for_kvikdos();
	audio_slot_64(sample_seg, 0x7d9du);
	if (REF_PHASE == REF_PHASE_SETUP) {
		audio_slot_65();
		return 0;
	}

	switch (REF_PHASE) {
	case REF_PHASE_SAMPLE0:
		if (!audio_slot_6d(0x00u)) {
			audio_slot_65();
			return 1;
		}
		break;
	case REF_PHASE_SAMPLE1:
		if (!audio_slot_6d(0x02u)) {
			audio_slot_65();
			return 2;
		}
		break;
	case REF_PHASE_SAMPLE2:
		if (!audio_slot_6d(0x04u)) {
			audio_slot_65();
			return 3;
		}
		break;
	case REF_PHASE_TIMER:
		audio_slot_6b();
		break;
	case REF_PHASE_NOISE:
		audio_slot_6c();
		break;
	default:
		audio_slot_65();
		return 20;
	}

	if (REF_PHASE == REF_PHASE_SAMPLE0 || REF_PHASE == REF_PHASE_SAMPLE1 ||
	    REF_PHASE == REF_PHASE_SAMPLE2) {
		return 0;
	}

	audio_slot_65();
	return 0;
}
