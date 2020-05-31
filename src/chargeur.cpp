//
#include "chargeur.h"
#include "battery.h"


Chargeur::Chargeur(int t):Device(),state(LOW) ,temps(t)
{

}

void Chargeur::chargeBatt()
{
  battval+=5;
}

void Chargeur::run()
{
  while(1)
  {
    if(ptrmem!=NULL)
    state=*ptrmem;
    if(state == HIGH)
    {
      if(battval > 90)
      {
        battval = 100;
        cout << "La batterie est pleine, va conduire!" << endl;
      }
      else
      {
        battval+=5;
        cout << "--------------------------------charging..." << endl;
      }
    }



    sleep(1);
  }
}
