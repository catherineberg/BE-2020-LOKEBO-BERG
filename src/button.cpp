#include "button.h"
#include <fstream>

using namespace std;

Button::Button(int s, int t): Device()
{
  state = s;
  temps = t;
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
    if(ifstream("buttontest.txt"))
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
