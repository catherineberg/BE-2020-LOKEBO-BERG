#ifndef BATTERY_H
#define BATTERY_H

#include <iostream>
#include <thread>
#include <unistd.h>
#include <string.h>
#include "core_simulation.h"
#include "capteur.h"

// classe pour la batterie d'une voiture
class Battery: public Capteur {
public:
  Battery(int v, int t);
  virtual void run();
  int checkBattery();
};

#endif
