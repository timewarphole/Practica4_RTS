#ifndef _SPEEDCONTROLLER_H
#define _SPEEDCONTROLLER_H
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
} _speedcontroller_v_ref_t;
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
} _speedcontroller_v_med_t;
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
} _speedcontroller_u_T_t;
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
} _speedcontroller_e_v_t;
typedef struct {
    struct self_base_t base;
    #line 170 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double Kp;
    #line 171 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double v_ref_init;
#line 68 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_speedcontroller.h"
    #line 179 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double target_v;
    #line 180 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double med_last;
#line 73 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_speedcontroller.h"
    _speedcontroller_v_ref_t* _lf_v_ref;
    // width of -2 indicates that it is not a multiport.
    int _lf_v_ref_width;
    // Default input (in case it does not get connected)
    _speedcontroller_v_ref_t _lf_default__v_ref;
    _speedcontroller_v_med_t* _lf_v_med;
    // width of -2 indicates that it is not a multiport.
    int _lf_v_med_width;
    // Default input (in case it does not get connected)
    _speedcontroller_v_med_t _lf_default__v_med;
    _speedcontroller_u_T_t _lf_u_T;
    int _lf_u_T_width;
    _speedcontroller_e_v_t _lf_e_v;
    int _lf_e_v_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__v_ref;
    reaction_t* _lf__v_ref_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__v_med;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _speedcontroller_self_t;
_speedcontroller_self_t* new__speedcontroller();
#endif // _SPEEDCONTROLLER_H
