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

  I2CActuatorScreen screen;


  Button button1(LOW, DELAY, "chargerbutton"); // bouton pour démarrer le chargeur
  Button button2(LOW,DELAY, "exitbutton"); // bouton pour éteindre le chargeur et ouvrir la porte
  Button button3(LOW,DELAY, "infrared"); // bouton qui simule la détection d'une voiture

  IRsensor sensor1(DELAY,infraval);
  Battery battery(DELAY,battval);
  Chargeur chargeur(DELAY);

  actPorte actporte1(DELAY);


  LED ledv(DELAY, "\033[1;32mvert\033[0m");
  LED ledo(DELAY, "\033[1;33mjaune\033[0m");
  LED ledr(DELAY, "\033[1;31mrouge\033[0m");



  // branchement des capteurs actionneurs

  esp8266.i2c(1,screen);
  //%%%%%%%%%%%%%%%%%
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
