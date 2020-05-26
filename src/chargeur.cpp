#include "chargeur.h"
#include "battery.h"


<<<<<<< HEAD
Chargeur::Chargeur(int t, Battery b):Device(),state(LOW) ,temps(t), batt(b)
{

}

void Chargeur::chargeBatt()
{
  batt.setBattery(batt.checkBattery()+10);
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
        //chargeBatt();
        cout << "-------------------------------------------------------charging" << endl;
      }
    }
    sleep(1);
  }
}
=======
Chargeur::Chargeur(int t):Device(),state(LOW),temps(t){}

void Chargeur::run(){
  //while loop qui regarde l'etat de Bouton?? 
  //et CheckBatterie (si la batterie n'est pas à 100% - ON, à 100% OFF)
  while(1){
    /*if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW)
     ;
    else
     ;
    sleep(temps);
    */
   }
}
>>>>>>> njord_branch2
