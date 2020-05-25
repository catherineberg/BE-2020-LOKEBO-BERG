#ifndef ACTIONNEUR_H
#define ACTIONNEUR_H

#include "core_simulation.h"
#include "mydevices.h"


class Actionneur: public Device{
    int temps;
    int state; 
    void virtual run();
};

#endif