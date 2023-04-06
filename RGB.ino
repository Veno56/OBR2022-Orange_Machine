/*******************************************************************************
* Sensor Cor TCS230 : Identificando Cores (v1.0)
*
* O LED RGB ira mudar de cor de acordo com a cor do objeto lido pelo sensor.
*
* Copyright 2020 RoboCore.
* Escrito por Matheus Cassioli (23/07/2019).
* Atualizado por Giovanni de Castro (20/01/2020).
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version (<https://www.gnu.org/licenses/>).
*******************************************************************************/
#include <AFMotor.h>
AF_DCMotor motor(4);

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

void setup(){
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

}

void loop(){
  leitura_cores(); // Chama a rotina que le as cores
 Serial.println(vermelho);
 Serial.println(azul);
 Serial.println(verde);
  // Verifica se a cor vermelha foi detectada
  if (verde > 60){
     Serial.println("Vou virar");
     delay(300);
     DIR();

  }
  delay(100); // Aguarda 100 milissegundos

}

// Rotina que le o valor das cores
void leitura_cores(){
  
  digitalWrite(PINO_SENSOR_S2, LOW); // Pino S2 em nivel baixo
  digitalWrite(PINO_SENSOR_S3, LOW); // Pino S3 em nivel baixo

  if(digitalRead(PINO_SENSOR_OUT) == HIGH){ // Verifica o nivel logico no pino OUT do sensor
    vermelho = pulseIn(PINO_SENSOR_OUT, LOW); // Le duracao do pulso na saida
  } else {
    vermelho = pulseIn(PINO_SENSOR_OUT, HIGH); // Le duracao do pulso na saida
  }
    
  digitalWrite(PINO_SENSOR_S3, HIGH); // PINO S3 em nivel alto

  if(digitalRead(PINO_SENSOR_OUT) == HIGH){ // Verifica o nivel logico no pino OUT do sensor
    azul = pulseIn(PINO_SENSOR_OUT, LOW); // Le duracao do pulso na saida
  } else {
    azul = pulseIn(PINO_SENSOR_OUT, HIGH); // Le duracao do pulso na saida
  }
    
  digitalWrite(PINO_SENSOR_S2, HIGH); // Pino S2 em nivel alto

  if(digitalRead(PINO_SENSOR_OUT) == HIGH){ // Verifica o nivel logico no pino OUT do sensor
    verde = pulseIn(PINO_SENSOR_OUT, LOW); // Le duracao do pulso na saida
  } else {
    verde = pulseIn(PINO_SENSOR_OUT, HIGH); // Le duracao do pulso na saida
  }
  
}