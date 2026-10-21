#ifndef _AIRCRAFTCONTROLLER_MAIN_H
#define _AIRCRAFTCONTROLLER_MAIN_H
#include "include/core/reactor.h"
#include "_disturbanceinjector.h"
#include "_speedcontroller.h"
#include "_aircraftdynamics.h"
#include "_airdatasensor.h"
#include "_speedreference.h"
#include "_flightmonitor.h"






typedef struct {
    struct self_base_t base;
    #line 303 "/Users/Paulina/Documents/UdeA/T_real/Practica4_RTS/src/AircraftController.lf"
    double Kp;
#line 21 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_aircraftcontroller_main.h"
#line 22 "C:\\Users\\Paulina\\Documents\\UdeA\\T_real\\Practica4_RTS\\src-gen\\AircraftController\\_aircraftcontroller_main.h"
} _aircraftcontroller_main_main_self_t;
_aircraftcontroller_main_main_self_t* new__aircraftcontroller_main();
#endif // _AIRCRAFTCONTROLLER_MAIN_H
