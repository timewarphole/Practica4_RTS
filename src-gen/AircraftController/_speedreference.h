#ifndef _SPEEDREFERENCE_H
#define _SPEEDREFERENCE_H
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
} _speedreference_v_ref_t;
typedef struct {
    struct self_base_t base;
    #line 79 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double v_init;
    #line 80 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double v_final;
    #line 81 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    interval_t t_change;
#line 28 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_speedreference.h"
    #line 85 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double current_ref;
    #line 86 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    int changed;
#line 33 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_speedreference.h"
    _speedreference_v_ref_t _lf_v_ref;
    int _lf_v_ref_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
} _speedreference_self_t;
_speedreference_self_t* new__speedreference();
#endif // _SPEEDREFERENCE_H
