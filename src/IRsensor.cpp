#include "capteur.h"
#include "mydevices.h"
#include "IRsensor.h"

using namespace std;

IRsensor::IRsensor(int t, int v) : Device(), temps(t), val(v)
{
}

  void IRsensor::run()
{
  while(1)
  {
    if(ptrmem!=NULL)
    *ptrmem=val;
    //cout << "IRsensor : " << val+alea << endl;
    sleep(temps);
  }
}
