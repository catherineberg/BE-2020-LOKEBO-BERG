#include "led_rouge.h"
#include <iostream>
using namespace std;

LED_Rouge::LED_Rouge(int t):Actionneur(),state(LOW),temps(t){
}

//Est-ce que c'est bon ici? Faut peut etre definir le fnct run plutot ? 
void LED_Rouge::run(){
  
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