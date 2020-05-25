//#include "capteur.h"
#include "battery.h"

using namespace std;

Battery::Battery(int v, int t) : Capteur(int v, int t) {
  alea = 0;
}

int Battery::checkBattery() {
  return val;
}

void Battery::run()
 {
  while(1)
  {
    if(ptrmem!=NULL)
    *ptrmem = checkBattery() ;
    sleep(temps);
  }
}
