#ifndef _FLIGHTMONITOR_H
#define _FLIGHTMONITOR_H
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
} _flightmonitor_v_ref_t;
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
} _flightmonitor_v_med_t;
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
} _flightmonitor_v_sim_t;
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
} _flightmonitor_u_T_t;
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
} _flightmonitor_e_v_t;
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
} _flightmonitor_dv_t;
typedef struct {
    struct self_base_t base;
#line 92 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_flightmonitor.h"
    #line 271 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double d_v;
#line 95 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_flightmonitor.h"
    _flightmonitor_v_ref_t* _lf_v_ref;
    // width of -2 indicates that it is not a multiport.
    int _lf_v_ref_width;
    // Default input (in case it does not get connected)
    _flightmonitor_v_ref_t _lf_default__v_ref;
    _flightmonitor_v_med_t* _lf_v_med;
    // width of -2 indicates that it is not a multiport.
    int _lf_v_med_width;
    // Default input (in case it does not get connected)
    _flightmonitor_v_med_t _lf_default__v_med;
    _flightmonitor_v_sim_t* _lf_v_sim;
    // width of -2 indicates that it is not a multiport.
    int _lf_v_sim_width;
    // Default input (in case it does not get connected)
    _flightmonitor_v_sim_t _lf_default__v_sim;
    _flightmonitor_u_T_t* _lf_u_T;
    // width of -2 indicates that it is not a multiport.
    int _lf_u_T_width;
    // Default input (in case it does not get connected)
    _flightmonitor_u_T_t _lf_default__u_T;
    _flightmonitor_e_v_t* _lf_e_v;
    // width of -2 indicates that it is not a multiport.
    int _lf_e_v_width;
    // Default input (in case it does not get connected)
    _flightmonitor_e_v_t _lf_default__e_v;
    _flightmonitor_dv_t* _lf_dv;
    // width of -2 indicates that it is not a multiport.
    int _lf_dv_width;
    // Default input (in case it does not get connected)
    _flightmonitor_dv_t _lf_default__dv;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__v_ref;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__v_med;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__v_sim;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__u_T;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e_v;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__dv;
    reaction_t* _lf__dv_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _flightmonitor_self_t;
_flightmonitor_self_t* new__flightmonitor();
#endif // _FLIGHTMONITOR_H
