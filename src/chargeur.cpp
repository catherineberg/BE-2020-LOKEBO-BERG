#include "chargeur.h"
#include "battery.h"


Chargeur::Chargeur(int t, Battery b):Device(),state(LOW) ,temps(t), batt(b)
{

}

void Chargeur::chargeBatt()
{
  batt.setBattery(b.checkBattery()+10);
}

void Chargeur::run()
{
  while(1)
  {
    if(ptrmem!=NULL)
    state=*ptrmem;
    if(state == HIGH)
    {
      if(batt.checkBattery() > 90)
      {
        batt.setBattery(100);
      }
      else
      {
        chargeBatt();
      }
    }
  }
}
