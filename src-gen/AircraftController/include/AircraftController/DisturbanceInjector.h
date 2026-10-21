#ifndef _disturbanceinjector_H
#define _disturbanceinjector_H
#ifndef _DISTURBANCEINJECTOR_H // necessary for arduino-cli, which automatically includes headers that are not used

#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct disturbanceinjector_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    interval_t t_start;
    interval_t duration;
    double magnitude;
    int end[0]; // placeholder; MSVC does not compile empty structs
} disturbanceinjector_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    double value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} disturbanceinjector_dv_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;

    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} disturbanceinjector_end_pulse_t;
#endif
#endif
