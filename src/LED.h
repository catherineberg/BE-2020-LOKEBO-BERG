#ifndef LED_H
#define LED_H
#include "mydevices.h"
#include "core_simulation.h"
#include "actionneur.h"

class LED: public Actionneur {
private:
  //l'etat de la LED
  int state;
  // coleur de la LED
  string color;
  // temps entre 2 affichage de l etat de la led - pas utilisé pour le moment. 
  // peut etre seulement afficher l'etat quand la coleur change?
  int temps;

public:
  // initialisation du temps de rafraichiisement
  LED(int t);
  // function qui sort la couleur 
  string GetColor();
  //fonction qui modifie la coleur
  void SetColor(string c);
  // thread representant l'actionneur et permettant de fonctionner independamment de la board
  virtual void run();
};

#endif