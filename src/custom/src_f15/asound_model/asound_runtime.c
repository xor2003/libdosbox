#include "asound_runtime.h"

void asound_runtime_init(AsoundRuntime* runtime,
                        AsoundU16 setup_value,
                        AsoundRuntimeOutput output,
                        void* output_user)
{
	runtime->setup_value  = setup_value;
	runtime->output       = output;
	runtime->output_user  = output_user;
	runtime->active_variant = 0u;
	asound_driver_init(&runtime->core, setup_value);
}

void asound_runtime_reset(AsoundRuntime* runtime, AsoundU16 setup_value)
{
	if (!runtime) {
		return;
	}
	runtime->setup_value = setup_value;
	asound_driver_init(&runtime->core, setup_value);
	runtime->active_variant = 0u;
}

void asound_runtime_shutdown(AsoundRuntime* runtime)
{
	if (runtime) {
		asound_driver_shutdown(&runtime->core);
	}
}

int asound_runtime_dispatch_sound(AsoundRuntime* runtime, AsoundU8 dispatch_offset)
{
	if (!runtime) {
		return 0;
	}
	return asound_driver_dispatch_sound(&runtime->core, dispatch_offset);
}

size_t asound_runtime_tick_events(AsoundRuntime* runtime,
                                 AsoundEvent* events,
                                 size_t event_capacity)
{
	if (!runtime) {
		return 0u;
	}
	return asound_driver_tick_events(&runtime->core, events, event_capacity);
}

size_t asound_runtime_tick_and_dispatch(AsoundRuntime* runtime,
                                       AsoundEvent* events,
                                       size_t event_capacity,
                                       size_t* event_count)
{
	size_t target_count;

	if (!runtime) {
		return 0u;
	}

	if (!event_count) {
		target_count = 0u;
		event_count = &target_count;
	}

	asound_driver_tick_and_dispatch(&runtime->core,
	                               events,
	                               event_capacity,
	                               event_count,
	                               runtime->output,
	                               runtime->output_user);
	return *event_count;
}

void asound_runtime_sample_variant_range(AsoundRuntime* runtime,
                                        AsoundU16* start,
                                        AsoundU16* end)
{
	SampleRange range;

	if (!runtime || !start || !end) {
		if (start) {
			*start = 0u;
		}
		if (end) {
			*end = 0u;
		}
		return;
	}

	range = asound_sample_variant_range(runtime->active_variant);
	*start = range.start;
	*end = range.end;
	runtime->active_variant = asound_sample_variant_next(runtime->active_variant,
	                                                runtime->core.sample_variant_max_index);
}
