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
    cout << "-------------------------- La porte est ouverte" << endl;
  }
  else
  {
    cout << "-------------------------- La porte est fermee" << endl;
  }
}
<<<<<<< HEAD
<<<<<<< HEAD
void setPorte(int s){ //Jeg kan bare push dine filer, ikke mine.... -Cathy 
=======
/*
void setPorte(int s){
>>>>>>> njord_branch2
    status=s;
}


void Porte::setPorte(int s){
    status =s;
}
=======
>>>>>>> fa6349632e47ea2fbf4aa1c54c68b71872d673ee

Porte porte;
*/