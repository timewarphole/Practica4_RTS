#ifndef _DISTURBANCEINJECTOR_H
#define _DISTURBANCEINJECTOR_H
#include "include/core/reactor.h"

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
} _disturbanceinjector_dv_t;
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
} _disturbanceinjector_end_pulse_t;
typedef struct {
    struct self_base_t base;
    #line 109 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    interval_t t_start;
    #line 110 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    interval_t duration;
    #line 111 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double magnitude;
#line 45 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_disturbanceinjector.h"
#line 46 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_disturbanceinjector.h"
    _disturbanceinjector_end_pulse_t _lf_end_pulse;
    _disturbanceinjector_dv_t _lf_dv;
    int _lf_dv_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__start_timer;
    reaction_t* _lf__start_timer_reactions[1];
    trigger_t _lf__end_pulse;
    reaction_t* _lf__end_pulse_reactions[1];
} _disturbanceinjector_self_t;
_disturbanceinjector_self_t* new__disturbanceinjector();
#endif // _DISTURBANCEINJECTOR_H
