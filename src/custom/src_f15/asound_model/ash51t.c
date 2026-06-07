typedef unsigned char AsoundU8;
typedef unsigned short AsoundU16;

#ifndef ASH_PHASE
#define ASH_PHASE 5
#endif

#define ASH_PHASE_SETUP   0
#define ASH_PHASE_SAMPLE0 1
#define ASH_PHASE_SAMPLE1 2
#define ASH_PHASE_SAMPLE2 3
#define ASH_PHASE_TIMER   4
#define ASH_PHASE_NOISE   5

void far ash_wrap_setup(AsoundU16 driver_segment, AsoundU16 setup_value);
void far ash_wrap_shutdown(void);
int far ash_wrap_sample(AsoundU16 sample_offset);
AsoundU16 far ash_wrap_timer(void);
AsoundU16 far ash_wrap_noise(void);
void asdrv_trace_reset(void);
AsoundU16 asdrv_trace_size(void);
const AsoundU8* asdrv_trace_bytes(void);
extern AsoundU8 far sample_blob[];

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
	AsoundU16 trace_after;
	const AsoundU8* trace;

	sample_seg = sample_data_seg();

	ash_wrap_setup(sample_seg, 0x7d9du);
	trace_after = asdrv_trace_size();
	if (trace_after == 0u) {
		ash_wrap_shutdown();
		return 10;
	}
	if (ASH_PHASE == ASH_PHASE_SETUP) {
		ash_wrap_shutdown();
		return 0;
	}

	asdrv_trace_reset();
	switch (ASH_PHASE) {
	case ASH_PHASE_SAMPLE0:
		if (!ash_wrap_sample(0x00u)) {
			ash_wrap_shutdown();
			return 1;
		}
		trace_after = asdrv_trace_size();
		if (trace_after == 0u) {
			ash_wrap_shutdown();
			return 12;
		}
		break;
	case ASH_PHASE_SAMPLE1:
		if (!ash_wrap_sample(0x02u)) {
			ash_wrap_shutdown();
			return 2;
		}
		trace_after = asdrv_trace_size();
		if (trace_after == 0u) {
			ash_wrap_shutdown();
			return 13;
		}
		break;
	case ASH_PHASE_SAMPLE2:
		if (!ash_wrap_sample(0x04u)) {
			ash_wrap_shutdown();
			return 3;
		}
		trace_after = asdrv_trace_size();
		if (trace_after == 0u) {
			ash_wrap_shutdown();
			return 14;
		}
		break;
	case ASH_PHASE_TIMER:
		ash_wrap_timer();
		trace_after = asdrv_trace_size();
		if (trace_after == 0u) {
			ash_wrap_shutdown();
			return 15;
		}
		break;
	case ASH_PHASE_NOISE:
		ash_wrap_noise();
		trace_after = asdrv_trace_size();
		if (trace_after == 0u) {
			ash_wrap_shutdown();
			return 16;
		}
		break;
	default:
		ash_wrap_shutdown();
		return 20;
	}

	trace = asdrv_trace_bytes();
	if (trace == 0) {
		ash_wrap_shutdown();
		return 17;
	}
	if ((trace_after & 1u) != 0u) {
		ash_wrap_shutdown();
		return 18;
	}
	if (trace[0] == 0u && trace[1] == 0u && trace_after == 2u) {
		ash_wrap_shutdown();
		return 19;
	}

	if (ASH_PHASE == ASH_PHASE_SAMPLE0 || ASH_PHASE == ASH_PHASE_SAMPLE1 ||
	    ASH_PHASE == ASH_PHASE_SAMPLE2) {
		return 0;
	}

	ash_wrap_shutdown();
	return 0;
}
