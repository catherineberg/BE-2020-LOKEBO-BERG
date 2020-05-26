#ifndef ACTPORTE_H
#define ACTPORTE_H
#include "actionneur.h"
#include "porte.h"


class actPorte: public Actionneur{
public:
    void open(Porte p1);
    void close(Porte p1);
    int Openess; // Sjekker hvor åpen døren er.
    //void run();
};

#endif
