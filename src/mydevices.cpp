
#include "mydevices.h"

using namespace std;
int luminosite_environnement = 200;
// classe AnalogSensorLuminosity
<<<<<<< HEAD
AnalogSensorLuminosity::AnalogSensorLuminosity(int d, int t = luminosite_environnement):Device(),val(t),temps(d)
=======
AnalogSensorLuminosity::AnalogSensorLuminosity(int d, int t = luminosite_environnement):Device(),temps(d)
>>>>>>> master
{
  //val = luminosite_environnement;
  alea = 1;
}

void AnalogSensorLuminosity::run()
{
  while(1){
    alea = 1 - alea;
    if(ptrmem!=NULL)
<<<<<<< HEAD
    *ptrmem=val+alea;
=======
    *ptrmem=luminosite_environnement+alea;
>>>>>>> master
    sleep(temps);
  }
}


//classe AnalogSensorTemperature
AnalogSensorTemperature::AnalogSensorTemperature(int d,int  t):Device(),val(t),temps(d){
  alea=1;
}

void AnalogSensorTemperature::run(){
  while(1){
    alea=1-alea;
    if(ptrmem!=NULL)
      *ptrmem=val+alea;
    sleep(temps);
  }
}

//classe DigitalActuatorLED
DigitalActuatorLED::DigitalActuatorLED(int t):Device(),state(LOW),temps(t){
}

void DigitalActuatorLED::run(){
  while(1){
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW)
      cout << "((((eteint))))\n";
    else
    cout << "((((allume))))\n";
    sleep(temps);
    }
}

// classe I2CActuatorScreen
I2CActuatorScreen::I2CActuatorScreen ():Device(){
  }

void I2CActuatorScreen::run(){
  while(1){
    if ( (i2cbus!=NULL)&&!(i2cbus->isEmptyRegister(i2caddr))){
      Device::i2cbus->requestFrom(i2caddr, buf, I2C_BUFFER_SIZE);
      cout << "---screen :"<< buf << endl;
    }
    sleep(1);
    }
}

//classe DigitalActuatorLED
IntelligentDigitalActuatorLED::IntelligentDigitalActuatorLED(int t):Device(),state(LOW),temps(t){
}

void IntelligentDigitalActuatorLED::run(){
<<<<<<< HEAD
  int* ptr_led = &luminosite_environnement;
  while(1){
=======
  //int* ptr_led = &luminosite_environnement;
  int old = 0;
  while(1){

>>>>>>> master
    if(ptrmem!=NULL)
      state=*ptrmem;
    if (state==LOW){
      cout << "((((INT eteint))))\n";
<<<<<<< HEAD
      *ptr_led-=50;
    }
    else{
    cout << "((((INT allume))))\n";
    *ptr_led+=50;
  }
    sleep(temps);
    }
=======
      if (old == 1) luminosite_environnement -= 50;

    }

    else{
    cout << "((((INT allume))))\n";
    if (old == 0) luminosite_environnement += 50;

  }


    sleep(temps);
  }
>>>>>>> master
}
