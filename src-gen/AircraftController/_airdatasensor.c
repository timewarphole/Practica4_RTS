#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/AircraftController\AirDataSensor.h"
#include "_airdatasensor.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _airdatasensorreaction_function_0(void* instance_args) {
    _airdatasensor_self_t* self = (_airdatasensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _airdatasensor_v_sim_t* v_sim = self->_lf_v_sim;
    int v_sim_width = self->_lf_v_sim_width; SUPPRESS_UNUSED_WARNING(v_sim_width);
    #line 145 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    self->v_last = v_sim->value;
#line 16 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_airdatasensor.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _airdatasensorreaction_function_1(void* instance_args) {
    _airdatasensor_self_t* self = (_airdatasensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _airdatasensor_dv_in_t* dv_in = self->_lf_dv_in;
    int dv_in_width = self->_lf_dv_in_width; SUPPRESS_UNUSED_WARNING(dv_in_width);
    #line 150 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    self->d_v = dv_in->value;
#line 26 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_airdatasensor.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _airdatasensorreaction_function_2(void* instance_args) {
    _airdatasensor_self_t* self = (_airdatasensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _airdatasensor_v_med_t* v_med = &self->_lf_v_med;
    #line 155 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    interval_t t_phys = lf_time_physical_elapsed();
    
    lf_set(v_med, self->v_last + self->d_v);
    
    interval_t exec = lf_time_physical_elapsed() - t_phys;
    printf("EVT,AirDataSensor,%lld,%lld,%lld\n",
           (long long) lf_time_logical_elapsed(), (long long) t_phys, (long long) exec);
#line 41 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_airdatasensor.c"
}
#include "include/api/reaction_macros_undef.h"
_airdatasensor_self_t* new__airdatasensor() {
    _airdatasensor_self_t* self = (_airdatasensor_self_t*)lf_new_reactor(sizeof(_airdatasensor_self_t));
    // Set input by default to an always absent default input.
    self->_lf_v_sim = &self->_lf_default__v_sim;
    // Set the default source reactor pointer
    self->_lf_default__v_sim._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_dv_in = &self->_lf_default__dv_in;
    // Set the default source reactor pointer
    self->_lf_default__dv_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _airdatasensorreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _airdatasensorreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _airdatasensorreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_2;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__t.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__v_sim.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__v_sim.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__v_sim_reactions[0] = &self->_lf__reaction_0;
    self->_lf__v_sim.reactions = &self->_lf__v_sim_reactions[0];
    self->_lf__v_sim.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__v_sim.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__v_sim.tmplt.type.element_size = sizeof(double);
    self->_lf__dv_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__dv_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__dv_in_reactions[0] = &self->_lf__reaction_1;
    self->_lf__dv_in.reactions = &self->_lf__dv_in_reactions[0];
    self->_lf__dv_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__dv_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__dv_in.tmplt.type.element_size = sizeof(double);
    return self;
}
