#include "capteur.h"
#include "mydevices.h"
#include "actPorte.h"
#include "porte.h"


using namespace std;
/*
Porte:: Porte () {
    
}
*/
void actPorte:: open(Porte p1){
    p1.setPorte(1); //døren er åpen
}

void actPorte:: close(Porte p1){
    p1.setPorte(0); //døren er lukket
}

void DigitalActuatorLED::run(){
  while(1){
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW)
        p1.setPorte(0); //If state er low, så lukker vi døren
    else
        p1.setPorte(1); //If state er high, så åpner vi døren
    sleep(temps);
    }
}
