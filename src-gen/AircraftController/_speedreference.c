#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/AircraftController\SpeedReference.h"
#include "_speedreference.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _speedreferencereaction_function_0(void* instance_args) {
    _speedreference_self_t* self = (_speedreference_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _speedreference_v_ref_t* v_ref = &self->_lf_v_ref;
    #line 89 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    interval_t t_phys = lf_time_physical_elapsed();
    
    if (!self->changed && lf_time_logical_elapsed() >= self->t_change) {
        self->current_ref = self->v_final;
        self->changed = 1;
        printf("REFCHG,%lld,%.3f\n",
               (long long) lf_time_logical_elapsed(), self->current_ref);
    }
    lf_set(v_ref, self->current_ref);
    
    interval_t exec = lf_time_physical_elapsed() - t_phys;
    printf("EVT,SpeedReference,%lld,%lld,%lld\n",
           (long long) lf_time_logical_elapsed(), (long long) t_phys, (long long) exec);
#line 27 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_speedreference.c"
}
#include "include/api/reaction_macros_undef.h"
_speedreference_self_t* new__speedreference() {
    _speedreference_self_t* self = (_speedreference_self_t*)lf_new_reactor(sizeof(_speedreference_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _speedreferencereaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__t.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
