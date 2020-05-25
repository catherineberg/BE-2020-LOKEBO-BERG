#include "led_vert.h"
#include <iostream>
using namespace std;

LED_Vert::LED_Vert(int t):Actionneur(),state(LOW),temps(t){
}


 
void LED_Vert::run(){
  
  while(1){
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW){
     //on fait rien
    }
    else
     cout << "((LED vert))";
    sleep(temps);
    
   }
}

