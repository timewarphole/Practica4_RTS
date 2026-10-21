#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/AircraftController\SpeedController.h"
#include "_speedcontroller.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _speedcontrollerreaction_function_0(void* instance_args) {
    _speedcontroller_self_t* self = (_speedcontroller_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 183 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    printf("CFG,Kp,%.4f\n", self->Kp);
#line 15 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_speedcontroller.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _speedcontrollerreaction_function_1(void* instance_args) {
    _speedcontroller_self_t* self = (_speedcontroller_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _speedcontroller_v_ref_t* v_ref = self->_lf_v_ref;
    int v_ref_width = self->_lf_v_ref_width; SUPPRESS_UNUSED_WARNING(v_ref_width);
    #line 190 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    self->target_v = v_ref->value;
#line 25 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_speedcontroller.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _speedcontrollerreaction_function_2(void* instance_args) {
    _speedcontroller_self_t* self = (_speedcontroller_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _speedcontroller_v_med_t* v_med = self->_lf_v_med;
    int v_med_width = self->_lf_v_med_width; SUPPRESS_UNUSED_WARNING(v_med_width);
    _speedcontroller_u_T_t* u_T = &self->_lf_u_T;
    _speedcontroller_e_v_t* e_v = &self->_lf_e_v;
    #line 195 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    interval_t t_phys = lf_time_physical_elapsed();
    
    if (v_med->is_present) {
        self->med_last = v_med->value;   // si no hubiera muestra, se reutiliza la última
    }
    double e = self->target_v - self->med_last;
    double u_raw = self->Kp * e;
    double u = u_raw;
    if (u > 1.0) u = 1.0;      // saturación superior
    if (u < 0.0) u = 0.0;      // saturación inferior
    
    lf_set(u_T, u);
    lf_set(e_v, e);
    
    printf("CTRL,%lld,%.6f,%.6f,%.6f,%.6f,%.6f\n",
           (long long) lf_time_logical_elapsed(),
           self->target_v, self->med_last, e, u_raw, u);
    
    interval_t exec = lf_time_physical_elapsed() - t_phys;
    printf("EVT,SpeedController,%lld,%lld,%lld\n",
           (long long) lf_time_logical_elapsed(), (long long) t_phys, (long long) exec);
#line 57 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_speedcontroller.c"
}
#include "include/api/reaction_macros_undef.h"
_speedcontroller_self_t* new__speedcontroller() {
    _speedcontroller_self_t* self = (_speedcontroller_self_t*)lf_new_reactor(sizeof(_speedcontroller_self_t));
    // Set input by default to an always absent default input.
    self->_lf_v_ref = &self->_lf_default__v_ref;
    // Set the default source reactor pointer
    self->_lf_default__v_ref._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_v_med = &self->_lf_default__v_med;
    // Set the default source reactor pointer
    self->_lf_default__v_med._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _speedcontrollerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _speedcontrollerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _speedcontrollerreaction_function_2;
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
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    self->_lf__v_ref.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__v_ref.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__v_ref_reactions[0] = &self->_lf__reaction_1;
    self->_lf__v_ref.reactions = &self->_lf__v_ref_reactions[0];
    self->_lf__v_ref.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__v_ref.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__v_ref.tmplt.type.element_size = sizeof(double);
    self->_lf__v_med.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__v_med.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__v_med.tmplt.type.element_size = sizeof(double);
    return self;
}
