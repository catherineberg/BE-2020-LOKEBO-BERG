#include "capteurs.h"
#include "mydevices.h"
#include "actPorte.h"
#include "porte.h"


using namespace std;

void actPorte:: open(){
    p.setPorte(1); //døren er åpen
}

void actPorte:: close(){
    p.setPorte(0); //døren er lukket
}

void actPorte::run(){
  while(1){
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW)
        p.setPorte(0); //If state er low, så lukker vi døren
    else
        p.setPorte(1); //If state er high, så åpner vi døren
    sleep(temps);
    }

}
