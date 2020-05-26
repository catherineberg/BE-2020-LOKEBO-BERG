#include "capteur.h"
#include "mydevices.h"

using namespace std;

IRsensor::IRsensor() : Capteur(int v, int t)
{
  alea = 1;
}

  void IRsensor::run(): Capteur();
{}
