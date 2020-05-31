#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include <thread>
#include <unistd.h>
#include <string.h>
#include "core_simulation.h"
#include "capteur.h"

// classe bouton
class Button: public Capteur {
private:

  string filename;
public:
  Button(int s, int t, string f);
  int getState();
  void setState(int s);
  virtual void run();
//  void gestionButton();
};

#endif
