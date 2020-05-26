#include <unistd.h>
#include "core_simulation.h"
#include "porte.h"

// la fonction d'initialisation d'arduino
void Board::setup(){
  // on configure la vitesse de la liaison
  Serial.begin(9600);
// on fixe les pin en entree et en sorite en fonction des capteurs/actionneurs mis sur la carte
  pinMode(1,INPUT);
  pinMode(0,OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);

  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,OUTPUT);
  //%%%%%%%%%%%%%%%%
}

// la boucle de controle arduino
void Board::loop(){
  char buf[100];
  int val;
  char buff[100];
  int l;
  int irval;
  int statebutton1;
  char buttonbuffer[100];
  char irbuffer[100];
  int battval;
  char battbuffer[100];
  //static int cpt=0;
  static int bascule=0;
  int i=0;
  for(i=0;i<1;i++){
    // lecture sur la pin 1 : capteur de temperature
    val=analogRead(1);
    l = analogRead(2);
    irval = digitalRead(6);
    battval = analogRead(7);
    porte.gestionPorte();
    sprintf(battbuffer, "Battvaleur : %d", battval);
    Serial.println(battbuffer);
    sprintf(irbuffer, "IRvaleur : %d", irval);
    Serial.println(irbuffer);
    sprintf(buff, "luminosite %d", l);
    Serial.println(buff);
    sprintf(buf,"temperature %d",val);
    Serial.println(buf);
    statebutton1 = digitalRead(4);
    if(statebutton1 == 0)
    {
      sprintf(buttonbuffer, "The button is off");
      digitalWrite(11,LOW);
    }
    else
    {
      sprintf(buttonbuffer, "The button is on");
      digitalWrite(11,HIGH);

    }
    Serial.println(buttonbuffer);

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
  if(bascule){
    digitalWrite(0,HIGH);
    digitalWrite(3,HIGH);
  }
  else {
    digitalWrite(0,LOW);
    digitalWrite(3,LOW);
  }
  bascule=1-bascule;

}
