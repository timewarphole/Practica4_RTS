#ifndef _AIRCRAFTDYNAMICS_H
#define _AIRCRAFTDYNAMICS_H
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
} _aircraftdynamics_u_T_t;
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
} _aircraftdynamics_v_sim_t;
typedef struct {
    struct self_base_t base;
    #line 226 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    interval_t period;
    #line 227 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double v0;
    #line 228 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double a_T;
    #line 229 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double a_D;
#line 44 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_aircraftdynamics.h"
    #line 235 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double v;
#line 47 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_aircraftdynamics.h"
    _aircraftdynamics_u_T_t* _lf_u_T;
    // width of -2 indicates that it is not a multiport.
    int _lf_u_T_width;
    // Default input (in case it does not get connected)
    _aircraftdynamics_u_T_t _lf_default__u_T;
    _aircraftdynamics_v_sim_t _lf_v_sim;
    int _lf_v_sim_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__u_T;
    reaction_t* _lf__u_T_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _aircraftdynamics_self_t;
_aircraftdynamics_self_t* new__aircraftdynamics();
#endif // _AIRCRAFTDYNAMICS_H
