#include <Ultrasonic.h>
#include <AFMotor.h>
#define pin_S4 49 //Direita 90
#define pin_S3 51 //Direita
#define pin_S2 47 //Esquerda
#define pin_S1 53 //Esquerda 90
#define pin_S0 52 //Centro

//Sensores Ultrassônicos -- n°Impar na parte Inferior e Par parte Superior
Ultrasonic Ultra1(9, 40);  //Frente Baixo
Ultrasonic Ultra2(2, 32);  //Frente Cima
Ultrasonic Ultra3(45, 43);  //Esquerda Baixo
Ultrasonic Ultra4(46, 48);  //Esquerda Cima
Ultrasonic Ultra5(44, 42);  //Direita Baixo
Ultrasonic Ultra6(13, 50);  //Direita Cima


//SENSOR VERDE DIREITA
#define S0 22
#define S1 24
#define S2 26
#define S3 28
#define sensorOut_D 30

//SENSOR VERDE ESQUERDA
#define S4 23
#define S5 25
#define S6 27
#define S7 29
#define sensorOut_E 31

AF_DCMotor motor1(2); //Seleção do Motor Garra
AF_DCMotor motor3(3); //Seleção do Motor 1
AF_DCMotor motor4(1); //Seleção do Motor 2
bool Sensor1 = 0;
bool Sensor2 = 0;
bool Sensor3 = 0;
bool Sensor4 = 0;
bool Sensor5 = 0;
int VerdeD = 0;
int VerdeE = 0;

long distancia1 = 0;
long distancia2 = 0;
long distancia3 = 0;
long distancia4 = 0;
long distancia5 = 0;
long distancia6 = 0;

int V = 200;
int tempo = 100;

int red=0;  
int green=0;  
int blue=0;  
int red_e=0;  
int green_e=0;  
int blue_e=0;  

int Nivel = 0;

void setup() {

  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
  pinMode(S5, OUTPUT);
  pinMode(S6, OUTPUT);
  pinMode(S7, OUTPUT);


  pinMode(sensorOut_D, INPUT);   // Set Sensor Verde
  pinMode(sensorOut_E, INPUT);  // Set Sensor Verde

  pinMode(pin_S3, INPUT);       //Setamos os pinos dos sensores Segue Linha
  pinMode(pin_S0, INPUT);       //Setamos os pinos dos sensores Segue Linha
  pinMode(pin_S2, INPUT);       //Setamos os pinos dos sensores Segue Linha

  // Set Frequency scaling to 20%
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
  digitalWrite(S4, HIGH);
  digitalWrite(S5, LOW);

  // Setup Serial Monitor
 Serial.begin(9600);
  //Serial.begin(115200);

}

void loop() {
   SL();
 // if (Nivel == 1) {
    //obstaculo();
     Curva90();
}
