#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/AircraftController\DisturbanceInjector.h"
#include "_disturbanceinjector.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _disturbanceinjectorreaction_function_0(void* instance_args) {
    _disturbanceinjector_self_t* self = (_disturbanceinjector_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _disturbanceinjector_dv_t* dv = &self->_lf_dv;
    _disturbanceinjector_end_pulse_t* end_pulse = &self->_lf_end_pulse;
    #line 118 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    lf_set(dv, self->magnitude);
    lf_schedule(end_pulse, self->duration);
    printf("DIST,%lld,%.3f\n", (long long) lf_time_logical_elapsed(), self->magnitude);
#line 18 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_disturbanceinjector.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _disturbanceinjectorreaction_function_1(void* instance_args) {
    _disturbanceinjector_self_t* self = (_disturbanceinjector_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    lf_critical_section_enter(self->base.environment);
    // Expose the action struct as a local variable whose name matches the action name.
    _disturbanceinjector_end_pulse_t* end_pulse = &self->_lf_end_pulse;
    // Set the fields of the action struct to match the current trigger.
    end_pulse->is_present = (bool)self->_lf__end_pulse.status;
    end_pulse->has_value = ((self->_lf__end_pulse.tmplt.token) != NULL && (self->_lf__end_pulse.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)end_pulse, (self->_lf__end_pulse.tmplt.token));
    lf_critical_section_exit(self->base.environment);
    _disturbanceinjector_dv_t* dv = &self->_lf_dv;
    #line 124 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    lf_set(dv, 0.0);
    printf("DIST,%lld,%.3f\n", (long long) lf_time_logical_elapsed(), 0.0);
#line 36 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_disturbanceinjector.c"
}
#include "include/api/reaction_macros_undef.h"
_disturbanceinjector_self_t* new__disturbanceinjector() {
    _disturbanceinjector_self_t* self = (_disturbanceinjector_self_t*)lf_new_reactor(sizeof(_disturbanceinjector_self_t));
    self->_lf_end_pulse._base.trigger = &self->_lf__end_pulse;
    self->_lf_end_pulse.parent = (self_base_t*)self;
    self->_lf_end_pulse.source_id = -1;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _disturbanceinjectorreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _disturbanceinjectorreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__start_timer.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__start_timer.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__start_timer_reactions[0] = &self->_lf__reaction_0;
    self->_lf__start_timer.reactions = &self->_lf__start_timer_reactions[0];
    self->_lf__start_timer.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__start_timer.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__start_timer.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__start_timer.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__end_pulse.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__end_pulse.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__end_pulse_reactions[0] = &self->_lf__reaction_1;
    self->_lf__end_pulse.reactions = &self->_lf__end_pulse_reactions[0];
    self->_lf__end_pulse.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__end_pulse.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__end_pulse.is_physical = false;
    
    self->_lf__end_pulse.tmplt.type.element_size = 0;
    self->_lf_end_pulse.type.element_size = 0;
    self->_lf__end_pulse.tmplt.length = 1;
    self->_lf_end_pulse.length = 1;
    return self;
}
