#include <Arduino.h>
#define pote 0
#define pin 2
int brillo;
void setup()
{
  pinMode(pin, OUTPUT);
}

void loop()
{
  brillo = analogRead(pote);
  
  if(brillo >= 20 && brillo <= 250){
    tone(pin, 261.63,100);//do
  }else if(brillo >= 251 && brillo <= 500){
    tone(pin, 293.66,100);//re
  }else if(brillo >= 501 && brillo <= 700){
    tone(pin, 329.63,100);//mi
  }else if(brillo >= 791 && brillo <= 800){
    tone(pin, 349.63,100);//fa
  }else if(brillo >= 800 && brillo <= 900){
    tone(pin, 392.00,100);//sol
  }else if(brillo >= 901 && brillo <= 1000){
    tone(pin, 440.00,100);//la
  }else if(brillo >= 1001 && brillo <= 2100){
    tone(pin, 493.88, 100);//si
  }else{
    
  }
  
}