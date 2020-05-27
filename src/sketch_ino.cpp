#include <unistd.h>
#include "core_simulation.h"
#include "porte.h"
#include "mydevices.h"
//#include <iostream.h>
//#include <conio.h>
#include <stdio.h>
#include <fstream>


// la fonction d'initialisation d'arduino
void Board::setup(){
  // on configure la vitesse de la liaison
  Serial.begin(9600);
// on fixe les pin en entree et en sorite en fonction des capteurs/actionneurs mis sur la carte
  pinMode(1,INPUT);
  pinMode(0,OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);

  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,OUTPUT);
  //%%%%%%%%%%%%%%%%
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  digitalWrite(5,LOW);
  porte.close();
}

// la boucle de controle arduino
void Board::loop(){
  //int irval;
  int statebutton1;
  int statebutton2;
  int statebutton3;
  char buttonbuffer[100];
  //char irbuffer[100];
  int valbatt;
  char battbuffer[100];
  //static int cpt=0;
  //static int bascule=0;
  int i=0;
  for(i=0;i<1;i++){
    //irval = digitalRead(9);
    valbatt = analogRead(10);
    porte.gestionPorte();
    sprintf(battbuffer, "Battvaleur : %d", valbatt);
    sprintf(battbuffer, "---------------Le niveau de batterie est : %d", battval);
    Serial.println(battbuffer);
    statebutton1 = digitalRead(4); // start charging
    if(statebutton1 == 0)
    {
      sprintf(buttonbuffer, "The button charger is off");
      digitalWrite(11,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
    }
    else
    {
      sprintf(buttonbuffer, "The button charger is on");
      digitalWrite(11,HIGH); // on demarre le chargeur
      digitalWrite(8,HIGH); //led orange
      digitalWrite(7,LOW); // led rouge

    }
    if(battval >99)
    {
      // delete the file, green led1
      digitalWrite(6,HIGH); // green led
      digitalWrite(8,LOW); // yellow led
    }
    Serial.println(buttonbuffer);

    statebutton2 = digitalRead(2); // to exit the parking
    if(statebutton2 == HIGH)
    {
      cout << "exitbutton is on " << endl;
      digitalWrite(7,LOW); // led rouge
      digitalWrite(6,LOW); //led verte
      digitalWrite(8,LOW); // led orange
      digitalWrite(5,HIGH); // actporte
    }
    else
    {
      digitalWrite(5,LOW);
    }
    statebutton3 = digitalRead(3); // to enter the garage
    if(statebutton3 == HIGH)
    {
      digitalWrite(5,HIGH);
      digitalWrite(7,HIGH);
    }


    // if(ifstream("buttonexit"))
    // {
    //   remove("buttonexit");
    // }



    // if(cpt%5==0){
    //     // tous les 5 fois on affiche sur l ecran la temperature
    //   sprintf(buf,"%d",val);
    //   sprintf(buff, "%d", l);
    //   sprintf(irbuffer, "%d", irval);
    //   bus.write(2,buff,100);
    //   bus.write(1,buf,100);
    //   bus.write(6,irbuffer,100);
    // }
    // cpt++;
    sleep(1);
  }
//on eteint et on allume la LED
  // if(bascule){
  //   digitalWrite(0,HIGH);
  //   digitalWrite(3,HIGH);
  // }
  // else {
  //   digitalWrite(0,LOW);
  //   digitalWrite(3,LOW);
  // }
  // bascule=1-bascule;

}
