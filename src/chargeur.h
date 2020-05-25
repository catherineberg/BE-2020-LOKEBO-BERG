#ifndef CHARGEUR_H
#define CHARGEUR_H
#include "mydevices.h"
#include "core_simulation.h"
#include "actionneur.h"

class Chargeur: public Actionneur {
private:
  //l'etat -?
  int state;
  
  // temps - utile?
  int temps;

public:
  // initialisation du temps de rafraichiisement
  Chargeur(int t);
  // thread representant l'actionneur et permettant de fonctionner independamment de la board
  virtual void run();
};

#endif