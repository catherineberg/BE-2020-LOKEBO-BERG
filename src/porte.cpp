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
int Porte::getStatusPorte()
{
  return status;
}
void Porte::gestionPorte()
{
  if(getStatusPorte() == OPEN)
  {
    cout << "---------------- La porte est ouverte" << endl;
  }
  else
  {
    cout << "---------------- La porte est fermee" << endl;
  }
}

Porte porte;
