#include "capteur.h"
//#include "mydevices.h"

using namespace std;

Capteur::Capteur(int t, int v): Device(),  val(v),temps(t)
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
