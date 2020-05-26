#ifndef CHARGEUR_H
#define CHARGEUR_H
#include "mydevices.h"
#include "core_simulation.h"
#include "actionneur.h"
#include "battery.h"

class Chargeur: Device {
private:
  // si le chargeur est ON (HIGH) ou OFF (LOW)
  int state;

  // temps entre 2 affichage - pas utile si on a le LED ...?
  int temps;

  // une batterie
  Battery batt;
public:
  // initialisation du temps de rafraichiisement
  Chargeur(Battery b);
  void chargeBatt();
  // thread representant l'actionneur et permettant de fonctionner independamment de la board
  virtual void run();
};

#endif
