#include "core_simulation.h"
#include "mydevices.h"
#include "capteur.h"
#include "luminosity.h"
#include "button.h"
#include "porte.h"
#include "led.h"


int main(){
  // creation d'une board
  Board esp8266;
  // achat des senseurs et actionneurs
  AnalogSensorTemperature temperature(DELAY,TEMP);
  DigitalActuatorLED led1(DELAY);
  I2CActuatorScreen screen;
  LED ledv(DELAY, "vert");
  LED ledo(DELAY, "orange");
  LED ledr(DELAY, "rouge");

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

  esp8266.pin(6,ledv);
  esp8266.pin(7,ledr);
  esp8266.pin(8,ledo);
  //%%%%%%%%%%%%%%%%%%%
  // allumage de la carte
  esp8266.run();
  return 0;
}


