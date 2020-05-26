#include "core_simulation.h"
#include "mydevices.h"
#include "capteur.h"
#include "IRsensor.h"
#include "button.h"
#include "porte.h"
#include "chargeur.h"
#include "battery.h"
#include "actPorte.h"
#include "ledc.h"


int main(){
  // creation d'une board
  Board esp8266;
  // achat des senseurs et actionneurs
  //AnalogSensorTemperature temperature(DELAY,TEMP);
  //DigitalActuatorLED led1(DELAY);
  I2CActuatorScreen screen;

  //%%%%%%%
  //AnalogSensorLuminosity luminosite(DELAY, luminosite_environnement);
  //IntelligentDigitalActuatorLED led2(DELAY);
  Button button1(LOW, DELAY, "boutonchargeur");
  Button button2(LOW,DELAY, "buttonexit");
  Button button3(LOW,DELAY, "buttonentry");

  IRsensor sensor1(DELAY,infraval);
  Battery battery(DELAY,battval);
  Chargeur chargeur(DELAY);

  actPorte actporte1(DELAY);


  LED ledv(DELAY, "\033[1;32mvert\033[0m"); //les leds sont tous initialisées avec une couleur blanche
  LED ledo(DELAY, "\033[1;33mjaune\033[0m"); //initialiser avec un string posait problème du coup j'ai enlevé pour le moment
  LED ledr(DELAY, "\033[1;31mrouge\033[0m");

  //%%%%%%
  // initialisation du materiel
  //%%%%%%%%%%%%%%%%%%%%%ù

  //%%%%%%%%%%%%%%%%%%%

  // branchement des capteurs actionneurs
  //esp8266.pin(1,temperature);
  //esp8266.pin(0,led1);
  esp8266.i2c(1,screen);
  //%%%%%%%%%%%%%%%%%
  //esp8266.pin(2,luminosite);
  //esp8266.pin(3,led2);
  esp8266.pin(2,button2);
  esp8266.pin(3,button3);
  esp8266.pin(4,button1);
  esp8266.pin(5,actporte1); //Kobler til servomotoren til en pin

  esp8266.pin(6,ledv);
  esp8266.pin(7,ledr);
  esp8266.pin(8,ledo);

  esp8266.pin(9,sensor1);
  esp8266.pin(10,battery);
  esp8266.pin(11,chargeur);
  //%%%%%%%%%%%%%%%%%%%
  // allumage de la carte
  esp8266.run();
  return 0;
}
