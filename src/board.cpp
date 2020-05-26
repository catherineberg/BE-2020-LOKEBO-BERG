<<<<<<< HEAD
#include "core_simulation.h"
#include "mydevices.h"
#include "capteur.h"
#include "luminosity.h"
#include "button.h"
#include "porte.h"


int main(){
  // creation d'une board
  Board esp8266;
  // achat des senseurs et actionneurs
  AnalogSensorTemperature temperature(DELAY,TEMP);
  DigitalActuatorLED led1(DELAY);
  I2CActuatorScreen screen;

  //%%%%%%%
  AnalogSensorLuminosity luminosite(DELAY, luminosite_environnement);
  IntelligentDigitalActuatorLED led2(DELAY);
  Button button1(LOW, DELAY);

  //%%%%%%
  // initialisation du materiel
  //%%%%%%%%%%%%%%%%%%%%%ù

  //%%%%%%%%%%%%%%%%%%%

  // branchement des capteurs actionneurs
  esp8266.pin(1,temperature);
  esp8266.pin(0,led1);
  esp8266.i2c(1,screen);
  //%%%%%%%%%%%%%%%%%
  esp8266.pin(2,luminosite);
  esp8266.pin(3,led2);
  esp8266.pin(4,button1);
  //%%%%%%%%%%%%%%%%%%%
  // allumage de la carte
  esp8266.run();
  return 0;
}


=======
#include "core_simulation.h"
#include "mydevices.h"
#include "capteur.h"
#include "luminosity.h"
#include "button.h"
#include "porte.h"
<<<<<<< HEAD
#include "actPorte.hpp"
=======
#include "actPorte.h"
>>>>>>> actPorte


int main(){
  // creation d'une board
  Board esp8266;
  // achat des senseurs et actionneurs
  AnalogSensorTemperature temperature(DELAY,TEMP);
  DigitalActuatorLED led1(DELAY);
  I2CActuatorScreen screen;
  actPorte actporte1;

  //%%%%%%%
  AnalogSensorLuminosity luminosite(DELAY, luminosite_environnement);
  IntelligentDigitalActuatorLED led2(DELAY);
  Button button1(LOW, DELAY);
  esp8266.pin(5,actporte1); //Kobler til servomotoren til en pin 

  //%%%%%%
  // initialisation du materiel
  //%%%%%%%%%%%%%%%%%%%%%ù

  //%%%%%%%%%%%%%%%%%%%

  // branchement des capteurs actionneurs
  esp8266.pin(1,temperature);
  esp8266.pin(0,led1);
  esp8266.i2c(1,screen);
  //%%%%%%%%%%%%%%%%%
  esp8266.pin(2,luminosite);
  esp8266.pin(3,led2);
  esp8266.pin(4,button1);
  //%%%%%%%%%%%%%%%%%%%
  // allumage de la carte
  esp8266.run();
  return 0;
}
>>>>>>> 7fc43c58a1b694f3d7d01de866fabc327d61695e
