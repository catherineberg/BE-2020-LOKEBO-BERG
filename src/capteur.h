#ifndef CAPTEUR_H
#define CAPTEUR_H

#include <iostream>
#include <thread>
#include <unistd.h>
#include <string.h>
#include "core_simulation.h"

// Classe mere d'un capteur
class Capteur: public Device
{
public:
  // fait osciller la valeur du capteur de 1
  int alea;
  // valeur de la luminosite mesuree
  int val;
  // temps entre 2 prises de valeurs
  int temps;
public:
  // constructeur
  Capteur(int t, int v);
  // thread representant le capteur et permettant de fonctionner independamment de la board
  virtual void run();
};


#endif
