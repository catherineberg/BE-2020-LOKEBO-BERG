#ifndef CAPTEURS_H
#define CAPTEURS_H
#include "actionneur.h"


class actPorte: public Actionneur{
public:
    void open(Porte p);
    void close(Porte p);
    int Openess; // Sjekker hvor åpen døren er.
};

#endif
