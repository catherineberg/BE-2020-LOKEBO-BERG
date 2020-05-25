#ifndef LEDROUGE_H
#define LEDROUGE_H
#include "mydevices.h"
#include "core_simulation.h"
#include "actionneur.h"

class LED: public Actionneur {
private:
  //l'etat de la LED
  int state;
  // temps entre 2 affichage de l etat de la led
  int temps;
  // coleur de la led
  string coleur;

public:
  // initialisation du temps de rafraichiisement
  LED(int t, string c);
  // thread representant l'actionneur et permettant de fonctionner independamment de la board
  virtual void run();
};

#endif