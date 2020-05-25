#ifndef PORTE_H
#define PORTE_H

#include <iostream>
#include <thread>
#include <unistd.h>
#include <string.h>
#include "core_simulation.h"
#include "capteur.h"

// classe qui represente la porte d'entree pour une voiture
class Porte
{
private:
  int status;
public:
  Porte();
  //void open();
//  void close(); setPorte har erstattet disse to
  void gestionPorte();
  int getStatusPorte();
  void setPorte(int s);
  //~Porte();
    int testerbare();
};

extern Porte porte;

#endif
