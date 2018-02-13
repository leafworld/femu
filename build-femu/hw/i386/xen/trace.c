/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_XEN_PLATFORM_LOG_DSTATE;
uint16_t _TRACE_XEN_PV_MMIO_READ_DSTATE;
uint16_t _TRACE_XEN_PV_MMIO_WRITE_DSTATE;
TraceEvent _TRACE_XEN_PLATFORM_LOG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_platform_log",
    .sstate = TRACE_XEN_PLATFORM_LOG_ENABLED,
    .dstate = &_TRACE_XEN_PLATFORM_LOG_DSTATE 
};
TraceEvent _TRACE_XEN_PV_MMIO_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_pv_mmio_read",
    .sstate = TRACE_XEN_PV_MMIO_READ_ENABLED,
    .dstate = &_TRACE_XEN_PV_MMIO_READ_DSTATE 
};
TraceEvent _TRACE_XEN_PV_MMIO_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_pv_mmio_write",
    .sstate = TRACE_XEN_PV_MMIO_WRITE_ENABLED,
    .dstate = &_TRACE_XEN_PV_MMIO_WRITE_DSTATE 
};
TraceEvent *hw_i386_xen_trace_events[] = {
    &_TRACE_XEN_PLATFORM_LOG_EVENT,
    &_TRACE_XEN_PV_MMIO_READ_EVENT,
    &_TRACE_XEN_PV_MMIO_WRITE_EVENT,
  NULL,
};

static void trace_hw_i386_xen_register_events(void)
{
    trace_event_register_group(hw_i386_xen_trace_events);
}
trace_init(trace_hw_i386_xen_register_events)