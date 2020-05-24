
#include "LED.h"

LED::LED(int t):Actionneur(),temps(t){
}

LED::LED(int t):Actionneur(),state(LOW),temps(t){
  
  //while loop qui regarde l'etat de CapteurPresence (si la voiture n'est pas la - LED OFF)
  //et CheckBatterie (si la batterie est en dessous de x - RED, en train de charger - ORANGE, à 100% - GREEN )
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

void LED::GetColor(){
  cout << "(("<<color<<"))\n";
}
