#ifndef ASOUND_RUNTIME_H
#define ASOUND_RUNTIME_H

#include "asound_model.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AsoundRuntime AsoundRuntime;

typedef void (*AsoundRuntimeOutput)(void* user, AsoundEventType type,
                                    AsoundU8 voice, AsoundU16 a, AsoundU16 b);

struct AsoundRuntime {
	AsoundDriver core;
	AsoundRuntimeOutput output;
	void* output_user;
	AsoundU16 setup_value;
	AsoundU8 active_variant;
};

void asound_rt_init(AsoundRuntime* runtime, AsoundU16 setup_value,
                    AsoundRuntimeOutput output, void* output_user);
void asound_rt_reset(AsoundRuntime* runtime, AsoundU16 setup_value);
void asound_rt_shutdown(AsoundRuntime* runtime);
int asound_rt_dispatch_sound(AsoundRuntime* runtime, AsoundU8 dispatch_offset);
size_t asound_rt_tick_events(AsoundRuntime* runtime, AsoundEvent* events,
                             size_t event_capacity);
size_t asound_rt_tick_and_dispatch(AsoundRuntime* runtime, AsoundEvent* events,
                                   size_t event_capacity, size_t* event_count);
void asound_rt_sample_variant_range(AsoundRuntime* runtime, AsoundU16* start,
                                    AsoundU16* end);

/* Short public API for MS C and old toolchains; the `asound_rt_*` prefix is
   intentionally compact and stable for both DOS and host builds. */

#ifdef __cplusplus
}
#endif

#endif
