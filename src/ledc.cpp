#include "ledc.h"
#include <iostream>
using namespace std;

LED::LED(int t, string c):Device(),state(LOW),temps(t){ //pas encore trouvé comment passer le string en argument
  coleur=c;
  //temps=t;
}

//Est-ce que c'est bon ici? Faut peut etre definir le fnct run plutot ?
void LED::run(){

  while(1){
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW){
     //on fait rien
    }
    else
     cout << "((LED "+coleur+"))" << endl;
       
    sleep(temps);

   }
}
