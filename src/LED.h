#ifndef LED_H
#define LED_H
#include "mydevices.h"
#include "core_simulation.h"
#include "actionneur.h"

class DigitalActuatorLED: public Actionneur {
private:
  // etat de la LED
  int state;
  // temps entre 2 affichage de l etat de la led
  int temps;

public:
    // initialisation du temps de rafraichiisement
  DigitalActuatorLED(int t);
    // thread representant l'actionneur et permettant de fonctionner independamment de la board
  virtual void run();
};

#endif