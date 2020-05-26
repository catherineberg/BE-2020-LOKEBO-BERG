#include "capteur.h"
#include "mydevices.h"
#include "actPorte.h"
#include "porte.h"


using namespace std;

actPorte::actPorte(int t): Device(), state(LOW), temps(t)
{}
void actPorte::open(){
    state = HIGH; //døren er åpen
}

void actPorte:: close(){
    state = LOW; //døren er lukket
}

void actPorte::run(){
  while(1){
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW)
        actPorte::close(); //If state er low, så lukker vi døren
    else
        actPorte::open(); //If state er high, så åpner vi døren
    sleep(temps);
    }

}
