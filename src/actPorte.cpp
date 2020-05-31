#include "capteur.h"
#include "mydevices.h"
#include "actPorte.h"
#include "porte.h"


using namespace std;

// actionneur qui ouvre et ferme la porte du garage
actPorte::actPorte(int t): Device(), state(LOW), temps(t)
{}
void actPorte::open(){
    isOpen= true ;
    porte.open();

}

void actPorte:: close(){
    isOpen = false ;
    porte.close();

}

void actPorte::run(){
  while(1){
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW){
        actPorte::close();
        cout << "The garage door is closed " << endl;
      }
    else{
       actPorte::open();
       cout << "The garage door is open " << endl;
     }
    sleep(temps);
    }

}
