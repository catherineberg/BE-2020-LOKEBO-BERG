#include "core_simulation.h"
#include "mydevices.h"


class actionneur: public Device{
    int temps;
    int state; 
    void virtual run();
};
