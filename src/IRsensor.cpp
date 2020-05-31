#include "capteur.h"
#include "mydevices.h"
#include "IRsensor.h"

using namespace std;

IRsensor::IRsensor(int t, int v) : Capteur(t,v)
{
  alea = 0;
}

  void IRsensor::run()
{
  while(1)
  {
    if(ptrmem!=NULL)
    *ptrmem=val;
    sleep(temps);
  }
}
