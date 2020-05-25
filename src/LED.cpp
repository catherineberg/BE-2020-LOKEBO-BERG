#include "LED.h"
#include "battery.h"
#include "button.h"

LED::LED(int t):Actionneur(),state(LOW),temps(t){
}

void LED::run(Battery b, Button bu){
  
  while(1){
    if(bu.getState()==LOW) //Si le bouton n'est pas activé, 
      state=0; //le LED s'éteint
    if (bu.getState()==HIGH){ //Si le bouton est acitvé le LED est orange si en train de charger et verte si la batterie est plein
      if(b.checkBattery()==100){
        SetColor("vert"); 
        cout << "-------- LED: ((vert))" << endl;
        }
      else{
        SetColor("orange");
        cout << "-------- LED: ((orange))" << endl;
        }
    }
    else
     ;
    sleep(temps);
    
   }
}

string LED::GetColor(){
  return color;
}
void LED::SetColor(string c){
  color=c;
}