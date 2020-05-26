<<<<<<< HEAD
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
=======
>>>>>>> njord_branch2
#include "core_simulation.h"
#include "mydevices.h"
#include "capteur.h"
#include "IRsensor.h"
#include "button.h"
#include "porte.h"
<<<<<<< HEAD
<<<<<<< HEAD
#include "chargeur.h"
#include "battery.h"
#include "actPorte.h"
=======
#include "actPorte.hpp"
#include "actPorte.h"
#include "ledc.h"

int main(){
  // creation d'une board
  Board esp8266;
  // achat des senseurs et actionneurs
  AnalogSensorTemperature temperature(DELAY,TEMP);
  DigitalActuatorLED led1(DELAY);
  I2CActuatorScreen screen;
  LED ledv(DELAY, "vert"); //les leds sont tous initialisées avec une couleur blanche 
  LED ledo(DELAY, "orange"); //initialiser avec un string posait problème du coup j'ai enlevé pour le moment
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

>>>>>>> njord_branch2
=======
#include "battery.h"
#include "chargeur.h"
>>>>>>> fa6349632e47ea2fbf4aa1c54c68b71872d673ee


int main(){
  // creation d'une board
  Board esp8266;
  // achat des senseurs et actionneurs
  AnalogSensorTemperature temperature(DELAY,TEMP);
  DigitalActuatorLED led1(DELAY);
  I2CActuatorScreen screen;
<<<<<<< HEAD
  actPorte actporte1;
<<<<<<< HEAD
  

=======
>>>>>>> njord_branch2
=======
>>>>>>> fa6349632e47ea2fbf4aa1c54c68b71872d673ee

  //%%%%%%%
  AnalogSensorLuminosity luminosite(DELAY, luminosite_environnement);
  IntelligentDigitalActuatorLED led2(DELAY);
  Button button1(LOW, DELAY);
<<<<<<< HEAD
<<<<<<< HEAD

  esp8266.pin(5,actporte1); //Kobler til servomotoren til en pin
=======
  esp8266.pin(5,actporte1); //Kobler til servomotoren til en pin 
>>>>>>> njord_branch2
=======
  IRsensor sensor1(DELAY,infraval);
  Battery battery(DELAY,50);
  Chargeur chargeur(DELAY, battery);
>>>>>>> fa6349632e47ea2fbf4aa1c54c68b71872d673ee

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
  esp8266.pin(6,sensor1);
  esp8266.pin(7,battery);
  esp8266.pin(8,chargeur);
  //%%%%%%%%%%%%%%%%%%%
  // allumage de la carte
  esp8266.run();
  return 0;
}
<<<<<<< HEAD
>>>>>>> 7fc43c58a1b694f3d7d01de866fabc327d61695e
=======
>>>>>>> njord_branch2
