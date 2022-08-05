void Curva90() {
  Sensor1 = digitalRead(pin_S1); //Extremo Esquerda
  Sensor2 = digitalRead(pin_S4); //Extremo Direita
  Sensor3 = digitalRead(pin_S0); //Centro
  Sensor4 = digitalRead(pin_S2); //Esquerda
  Sensor5 = digitalRead(pin_S3); //Direita

  if ((Sensor2 == 1) && (Sensor5 == 1) && (Sensor1 == 0)) {
    VerdeDir();    
    robot_forward(velocidade);// para Frente
    delay(50);
    robot_stop(0);// para Frente
    delay(1000);
    if (VerdeD == 1) {
      Serial.print("VerdeDireita:");
      Serial.println(green);
      Serial.println(VerdeD);
      robot_right(255);
      delay(1500);
      robot_forward(velocidade);// para Frente
      delay(200);
      VerdeD = 0;
    }
    else {
      robot_forward(velocidade);// para Frente
      delay(500);
      robot_stop(0);// para Frente
      delay(200);
      if (Sensor3 == 1) {
        robot_forward(velocidade);// para Frente
        delay(400);
      }
      else {
        Serial.print("Curva90D");
        while(Sensor3 == 0){
         robot_right(240);
         delay(10);
         Sensor3 = digitalRead(pin_S0); //Centro
         Serial.print(Sensor3);
          }
        robot_forward(velocidade);// para Frente
        delay(200);
      }
    }
  }
  if ((Sensor1 == 1) && (Sensor4 == 1) && (Sensor2 == 0)) { // Se detectar um lado branco e o outro preto
    VerdeEsq();
    robot_forward(velocidade);// para Frente
    delay(50);
    robot_stop(0);// para Frente
    delay(1000);
    if (VerdeE == 1) {
      Serial.print("VerdeEsquerda:");
      Serial.println(green_e);
      Serial.println(VerdeE);
      robot_left(255);
      delay(1500);
      robot_forward(velocidade);// para Frente
      delay(200);
      VerdeE = 0;
    }
    else {
      robot_forward(velocidade);// para Frente
      delay(400);
      robot_stop(0);// para Frente
      delay(200);
      if (Sensor3 == 1) {
        robot_forward(velocidade);// para Frente
        delay(450);
      }
      else {
        Serial.print("Curva90E");
        while(Sensor3 == 0){
         robot_left(240);
         delay(10);
         Sensor3 = digitalRead(pin_S0); //Centro
         Serial.print(Sensor3);
          }
        robot_forward(velocidade);// para Frente
        delay(200);
      }
    }
  }
  if ((Sensor1 == 1) && (Sensor2 == 1)) {
    Serial.print("Cruzamento");
    VerdeDir();
    VerdeEsq();
    //verde direita
    if ((VerdeD == 1) && (VerdeE == 0)) {
      Serial.print("VerdeSegunda:");
      Serial.println(green);
      Serial.println(VerdeD);
      robot_forward(velocidade);// para Frente
      delay(200);
      robot_right(255);
      delay(1500);
      robot_forward(velocidade);// para Frente
      delay(200);
      VerdeD = 0;
    }
    //verde esquerda
    if ((VerdeE == 1) && (VerdeD == 0)) {
      Serial.print("VerdeEsquerda:");
      Serial.println(green_e);
      Serial.println(VerdeE);
      robot_forward(velocidade);// para Frente
      delay(200);
      robot_left(255);
      delay(1500);
      robot_forward(velocidade);// para Frente
      delay(200);
      VerdeE = 0;
    }
    else if ((VerdeD == 1) && (VerdeE == 1)) {
      robot_right(255);
      delay(2500);
      robot_forward(velocidade);// para Frente
      delay(200);
      VerdeD = 0;
      VerdeE = 0;
    }

  }

}
