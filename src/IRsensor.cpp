#include "capteur.h"
#include "mydevices.h"

using namespace std;

LuminositySensor::LuminositySensor() : Capteur(int v, int t)
{}

  void LuminositySensor::run() : Capteur::run() {}
  
