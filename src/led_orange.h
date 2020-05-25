#ifndef LEDORANGE_H
#define LEDORANGE_H
#include "mydevices.h"
#include "core_simulation.h"
#include "actionneur.h"

class LED_Orange: public Actionneur {
private:
  //l'etat de la LED
  int state;
  // temps entre 2 affichage de l etat de la led
  int temps;

public:
  // initialisation du temps de rafraichiisement
  LED_Orange(int t);
  // thread representant l'actionneur et permettant de fonctionner independamment de la board
  virtual void run();
};

#endif