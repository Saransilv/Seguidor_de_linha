#define PINO_MOTOR_1_A 2 
#define PINO_MOTOR_1_B 4
#define PINO_MOTOR_1_C 3

#define PINO_MOTOR_2_A 9 
#define PINO_MOTOR_2_B 10
#define PINO_MOTOR_2_C 11

#define PINO_SENSOR_ESQUERDA 7
#define PINO_SENSOR_DIREITA 8


int motor_1_frente(int velocidade);
int motor_1_tras(int velocidade);
int motor_1_parar(int velocidade);
int motor_2_frente(int velocidade);
int motor_2_tras(int velocidade);
int motor_2_parar(int velocidade);


int frente(int velocidade);
int tras(int velocidade);
int esquerda(int velocidade);
int direita(int velocidade);
int parar();


