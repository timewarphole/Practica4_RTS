#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/AircraftController\AircraftDynamics.h"
#include "_aircraftdynamics.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _aircraftdynamicsreaction_function_0(void* instance_args) {
    _aircraftdynamics_self_t* self = (_aircraftdynamics_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 238 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    printf("CFG,a_T,%.4f\nCFG,a_D,%.4f\nCFG,v0,%.2f\n",
           self->a_T, self->a_D, self->v0);
#line 16 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_aircraftdynamics.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _aircraftdynamicsreaction_function_1(void* instance_args) {
    _aircraftdynamics_self_t* self = (_aircraftdynamics_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _aircraftdynamics_v_sim_t* v_sim = &self->_lf_v_sim;
    #line 243 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    interval_t t_phys = lf_time_physical_elapsed();
    
    lf_set(v_sim, self->v);
    printf("PLANT,%lld,%.6f\n", (long long) lf_time_logical_elapsed(), self->v);
    
    interval_t exec = lf_time_physical_elapsed() - t_phys;
    printf("EVT,AircraftDynamics,%lld,%lld,%lld\n",
           (long long) lf_time_logical_elapsed(), (long long) t_phys, (long long) exec);
#line 32 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_aircraftdynamics.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _aircraftdynamicsreaction_function_2(void* instance_args) {
    _aircraftdynamics_self_t* self = (_aircraftdynamics_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _aircraftdynamics_u_T_t* u_T = self->_lf_u_T;
    int u_T_width = self->_lf_u_T_width; SUPPRESS_UNUSED_WARNING(u_T_width);
    #line 254 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double Ts = (double) self->period / 1.0e9;   // período en segundos
    self->v = self->v + Ts * (self->a_T * u_T->value - self->a_D * self->v);
#line 43 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_aircraftdynamics.c"
}
#include "include/api/reaction_macros_undef.h"
_aircraftdynamics_self_t* new__aircraftdynamics() {
    _aircraftdynamics_self_t* self = (_aircraftdynamics_self_t*)lf_new_reactor(sizeof(_aircraftdynamics_self_t));
    // Set input by default to an always absent default input.
    self->_lf_u_T = &self->_lf_default__u_T;
    // Set the default source reactor pointer
    self->_lf_default__u_T._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _aircraftdynamicsreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _aircraftdynamicsreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _aircraftdynamicsreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_1;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__t.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    self->_lf__u_T.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__u_T.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__u_T_reactions[0] = &self->_lf__reaction_2;
    self->_lf__u_T.reactions = &self->_lf__u_T_reactions[0];
    self->_lf__u_T.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__u_T.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__u_T.tmplt.type.element_size = sizeof(double);
    return self;
}
