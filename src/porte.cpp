#include "porte.h"

using namespace std;

Porte::Porte() : status(CLOSED) {}
void Porte::open()
{
  status = OPEN;
} 
void Porte::close()
{
  status = CLOSED;
}
//setPorte har erstattet void porte::open og porte::closed
int Porte::getStatusPorte()
{
  return status;
}
void Porte::gestionPorte()
{
  if(getStatusPorte() == OPEN)
  {
    cout << "-------------------------- La porte est ouverte" << endl;
  }
  else
  {
    cout << "-------------------------- La porte est fermee" << endl;
  }
}
void setPorte(int s){ //Jeg kan bare push dine filer, ikke mine.... -Cathy 
    status=s;
}


void Porte::setPorte(int s){
    status =s;
}

Porte porte;
