#include "mybot.h"

int motor_1_frente(){
  digitalWrite(PINO_MOTOR_1_A,HIGH);
  digitalWrite(PINO_MOTOR_1_B,LOW);
}
int motor_1_tras(){
  digitalWrite(PINO_MOTOR_1_A,LOW);
  digitalWrite(PINO_MOTOR_1_B,HIGH);
}
int motor_1_parar(){
  digitalWrite(PINO_MOTOR_1_A,HIGH);
  digitalWrite(PINO_MOTOR_1_B,HIGH);
}
int motor_2_frente(){
  digitalWrite(PINO_MOTOR_2_A,HIGH);
  digitalWrite(PINO_MOTOR_2_B,LOW);
}
int motor_2_tras(){
  digitalWrite(PINO_MOTOR_2_A,LOW);
  digitalWrite(PINO_MOTOR_2_B,HIGH);
}
int motor_2_parar(){
  digitalWrite(PINO_MOTOR_2_A,HIGH);
  digitalWrite(PINO_MOTOR_2_B,HIGH);
}


int frente(){
  motor_1_frente();
  motor_2_frente();
}
int tras(){
  motor_1_tras();
  motor_2_tras();
}
int esquerda(){
  motor_1_frente();
  motor_2_tras();
}
int direita(){
  motor_1_tras();
  motor_2_frente();
}
int parar(){
  motor_1_parar();
  motor_2_parar();
}


