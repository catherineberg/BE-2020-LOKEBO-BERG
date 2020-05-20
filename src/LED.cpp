
#include "LED.h"

LED::LED(int t):Actionneur(),temps(t){
}

void LED::run(){
  /*while(1){
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW)
      cout << "((((eteint))))\n";
    else
    cout << "((((allume))))\n";
    sleep(temps);
    }*/
}

void LED::GetColor(){
  cout << "(("<<color<<"))\n";
}
