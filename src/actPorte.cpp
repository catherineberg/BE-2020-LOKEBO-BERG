#include "capteurs.h"
#include "mydevices.h"
#include "actPorte.h"
#include "porte.h"


using namespace std;

Porte:: Porte () {
    
}

void actPorte:: open(){
    p.setPorte=setPorte(1); //døren er åpen
}

void actPorte:: close(){
    p.setPorte=setPorte(0); //døren er lukket
}
