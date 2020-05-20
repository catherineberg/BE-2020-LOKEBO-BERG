#ifndef CAPTEURS_H
#define CAPTEURS_H

class Capteur: public Device
{
private:
  int temps;
  int val;
  int alea;
public:
  Capteur(int v, int t);
  virtual void run();
};


#endif
