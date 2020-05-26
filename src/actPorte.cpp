#include "capteur.h"
#include "mydevices.h"
#include "actPorte.h"
#include "porte.h"


using namespace std;

actPorte::actPorte(int t): Device(), state(LOW), temps(t)
{}
void actPorte::open(){
    isOpen= true ; //døren er åpen
    porte.open();

}

void actPorte:: close(){
    isOpen = false ; //døren er lukket
    porte.close();

}

void actPorte::run(){
  while(1){
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW){
        actPorte::close(); //If state er low, så lukker vi døren
        cout << "The garage door is closed " << endl;
      }
    else{
       actPorte::open(); //If state er high, så åpner vi døren
       cout << "The garage door is open " << endl;
     }
    sleep(temps);
    }

}
