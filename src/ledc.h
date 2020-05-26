#ifndef LEDC_H
#define LEDC_H
#include "mydevices.h"
using namespace std;

class LED: public Device {
    private:
    // etat de la LED
    int state;
    // temps entre 2 affichage de l etat de la led
    int temps;
    string coleur;

    public:
    // initialisation du temps de rafraichiisement et la coleur de la led
    LED(int t, string c);
    // thread representant l'actionneur et permettant de fonctionner independamment de la board
    virtual void run();
};




#endif
