#include "capteur.h"
//#include "mydevices.h"

using namespace std;

Capteur::Capteur(int v, int t): Device(), temps(t), val(v)
{
  alea = 1;
}

void Capteur::run()
{
  while(1)
  {
    alea = 1-alea;
    if(ptrmem!=NULL)
    *ptrmem=val + alea;
    sleep(temps);
  }
}
