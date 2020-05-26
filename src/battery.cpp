//#include "capteur.h"
#include "battery.h"
#include "mydevices.h"

using namespace std;

Battery::Battery(int v, int t) : Capteur( v,  t) {
  alea = 0;
}

int Battery::checkBattery() {
  return battval;
}
void Battery::setBattery(int v)
{
  battval = v;
}

void Battery::run()
 {
  while(1)
  {
    if(ptrmem!=NULL)
    *ptrmem = battval ; //ja han faar inn val , saa den blir ikkje endra tydeligvis
    sleep(temps);
  }
}
