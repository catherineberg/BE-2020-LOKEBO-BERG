#include "button.h"
#include <fstream>
#include <string.h>

using namespace std;

Button::Button(int s, int t, string f): Device()
{
  state = s;
  temps = t;
  filename = f;
}

int Button::getState()
{
  return state;
}
void Button::setState(int s)
{
  state = s;
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
