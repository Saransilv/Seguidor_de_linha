#include "mybot.h"


void setup() {
  iniciar_robo();
  Serial.begin(9600);
  delay(3000);
  esquerda(100);
}

void loop() {
  int sd = sensor_direito();
  int se = sensor_esquerdo();
  

  if(se == BRANCO && sd == BRANCO){
    frente(150);
  }

  if(se == BRANCO && sd == PRETO){
    direita(150);
  }
  if(se == PRETO && sd == BRANCO){
    esquerda(150);
  }

  if (se == PRETO && sd == PRETO){
    parar();
  }
  delay(10);
}


/*
void loop() {
  int sd = sensor_direito();
  int se = sensor_esquerdo();
  

  if(se == BRANCO && sd == BRANCO){
    frente(150);
  }

  if(se == BRANCO && sd == PRETO){
    motor_1_frente(200);
    motor_2_frente(50);
  }
  if(se == PRETO && sd == BRANCO){
    motor_2_frente(200);
    motor_1_frente(50);
  }

  if (se == PRETO && sd == BRANCO){
    parar();
  }
}

*/
