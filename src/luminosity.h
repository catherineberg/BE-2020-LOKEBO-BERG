#ifndef LUMINOSITY_H
#define LUMINOSITY_H

#include <iostream>
#include <thread>
#include <unistd.h>
#include <string.h>
#include "core_simulation.h"
#include "mydevices.h"
#include "capteur.h"

// Classe du capteur de présence devant la porte pour détecter une voiture
class LuminositySensor: public Capteur
{
private:
  // fait osciller la valeur du capteur de 1
  int alea;
  // valeur de la luminosite mesuree
  int val;
  // temps entre 2 prises de valeurs
  int temps;
public:
  // constructeur
  LuminositySensor(int v, int t);
  // thread representant le capteur et permettant de fonctionner independamment de la board
  virtual void run();
};

#endif
