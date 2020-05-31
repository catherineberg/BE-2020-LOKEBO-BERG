#include "ledc.h"
#include <iostream>
using namespace std;

LED::LED(int t, string c):Device(),state(LOW),temps(t){
  coleur=c;
}

void LED::run(){

  while(1){
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW){
    }
    else
     cout << "((LED "+coleur+"))" << endl;

    sleep(temps);

   }
}
