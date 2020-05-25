//
//  actPorte.cpp
//  
//
//  Created by Catherine Berg on 25/05/2020.
//
//Servomoteur
#include "actPorte.hpp" //Hva er forskjellen på .hpp og .h??
#include "porte.h" //Usikker på hvilken jeg skal inkludere


void actPorte:: open(Porte p){
    p.setPorte(1); //Opens door
    
}
void actPorte:: close(Porte p){
    p.setPorte(0); //Closes door
}



