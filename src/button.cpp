#include "button.h"
#include <fstream>
#include <string.h>

using namespace std;

Button::Button(int t, int v, string f): Capteur(t,v)
{
  filename = f;
}

int Button::getState()
{
  return val;
}
void Button::setState(int s)
{
  val = s;
}
void Button::run()
{
  while(1){
    if(ptrmem!=NULL){
    if(ifstream(filename))
    {
      setState(HIGH);
    }
    else
    {
      setState(LOW);
    }
    *ptrmem = getState();
  }
    sleep(temps);
  }
}
