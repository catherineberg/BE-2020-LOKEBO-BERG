#ifndef MYDEVICES_H
#define MYDEVICES_H

#include <iostream>
#include <thread>
#include <unistd.h>
#include <string.h>
#include "core_simulation.h"

//%%%%%%%%%%%%%
extern int luminosite_environnement;
//%%%%%%%%%%%%%%%%%

// class Button: public Device {
// private:
//   int state;
//   int temps;
// public:
//   Button(int s, int t);
//   int getState();
//   void setState(int s);
//   virtual void run();
// //  void gestionButton();
// };

class IntelligentDigitalActuatorLED: public Device
{
private:
  int state;
  int temps;
public:
  IntelligentDigitalActuatorLED(int t);
  virtual void run();
};

class AnalogSensorLuminosity: public Device
{
private:
  int alea;
  int val = luminosite_environnement;
  int temps;
public:
  AnalogSensorLuminosity(int d, int t);
  virtual void run();
};

// exemple de capteur analogique de temperature, ne pas oublier d'heriter de Device
class AnalogSensorTemperature: public Device {
private:
  // fait osciller la valeur du cpateur de 1
  int alea;
  // valeur de temperature mesuree
  int val;
  // temps entre 2 prises de valeurs
  int temps;

public:
  //constructeur ne pas oublier d'initialiser la classe mere
  AnalogSensorTemperature(int d,int  t);
  // thread representant le capteur et permettant de fonctionner independamment de la board
  virtual void run();
};

// exemple d'actionneur digital : une led, ne pas oublier d'heriter de Device
class DigitalActuatorLED: public Device {
private:
  // etat de la LED
  int state;
  // temps entre 2 affichage de l etat de la led
  int temps;

public:
    // initialisation du temps de rafraichiisement
  DigitalActuatorLED(int t);
  // thread representant l'actionneur et permettant de fonctionner independamment de la board
  virtual void run();
};

// exemple d'actionneur sur le bus I2C permettant d'echanger des tableaux de caracteres : un ecran, ne pas oublier d'heriter de Device
class I2CActuatorScreen : public Device{
protected:
    // memorise l'affichage de l'ecran
  char buf[I2C_BUFFER_SIZE];

public:
  // constructeur
  I2CActuatorScreen ();
  // thread representant le capteur et permettant de fonctionner independamment de la board
  virtual void run();
};

#endif
