#ifndef IRSENSOR_H
#define IRSENSOR_H

#include <iostream>
#include <thread>
#include <unistd.h>
#include <string.h>
#include "core_simulation.h"
#include "mydevices.h"
#include "capteur.h"

// Classe du capteur de présence devant la porte pour détecter une voiture
class IRsensor: public Device
{
protected:
  int temps;
  int val;
public:
  // constructeur
  IRsensor(int v, int t);
  // thread representant le capteur et permettant de fonctionner independamment de la board
  virtual void run();
};

#endif
