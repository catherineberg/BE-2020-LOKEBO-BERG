#include "chargeur.h"


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
      //if(batt.checkBattery() > 90)
      {
        //batt.setBattery(100);
        battval = 100;
        cout << "La batterie est pleine va conduire !" << endl;
      }
      else
      {
        chargeBatt();
        //battval+=4;
        //cout << "-------------------------------------battval = " << battval << endl;
        cout << "-------------------------------------------------------charging..." << endl;
      }
    }
    sleep(2);
  }
}
