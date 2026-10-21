#ifndef _AIRDATASENSOR_H
#define _AIRDATASENSOR_H
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
} _airdatasensor_v_sim_t;
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
} _airdatasensor_dv_in_t;
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
} _airdatasensor_v_med_t;
typedef struct {
    struct self_base_t base;
#line 50 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_airdatasensor.h"
    #line 140 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double v_last;
    #line 141 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double d_v;
#line 55 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_airdatasensor.h"
    _airdatasensor_v_sim_t* _lf_v_sim;
    // width of -2 indicates that it is not a multiport.
    int _lf_v_sim_width;
    // Default input (in case it does not get connected)
    _airdatasensor_v_sim_t _lf_default__v_sim;
    _airdatasensor_dv_in_t* _lf_dv_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_dv_in_width;
    // Default input (in case it does not get connected)
    _airdatasensor_dv_in_t _lf_default__dv_in;
    _airdatasensor_v_med_t _lf_v_med;
    int _lf_v_med_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__v_sim;
    reaction_t* _lf__v_sim_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__dv_in;
    reaction_t* _lf__dv_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _airdatasensor_self_t;
_airdatasensor_self_t* new__airdatasensor();
#endif // _AIRDATASENSOR_H
