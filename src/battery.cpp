//#include "capteur.h"
#include "battery.h"

using namespace std;

Battery::Battery(int v, int t) : Capteur( v,  t) {
  alea = 0;
}

int Battery::checkBattery() {
  return val;
}
void Battery::setBattery(int v)
{
  val = v;
}

void Battery::run()
 {
  while(1)
  {
    if(ptrmem!=NULL)
    *ptrmem = val ; //ja han faar inn val , saa den blir ikkje endra tydeligvis
    sleep(temps);
  }
}
