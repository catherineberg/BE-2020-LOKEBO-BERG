<<<<<<< HEAD
//
//  actPorte.cpp
//
//
//  Created by Catherine Berg on 25/05/2020.
//
//Servomoteur
#include "actPorte.hpp" //Hva er forskjellen på .hpp og .h??
#include "porte.h" //Usikker på hvilken jeg skal inkludere
using namespace std;

void actPorte:: open(Porte p){
    p.setPorte(1); //Opens door
}
void actPorte:: close(Porte p){
    p.setPorte(0); //Closes door
=======
#include "capteurs.h"
#include "mydevices.h"
#include "actPorte.h"
#include "porte.h"


using namespace std;

Porte:: Porte () {

}

void actPorte:: open(){
    p.setPorte(1); //døren er åpen
}

void actPorte:: close(){
    p.setPorte(0); //døren er lukket
>>>>>>> actPorte
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
<<<<<<< HEAD

}


=======
}
>>>>>>> actPorte
