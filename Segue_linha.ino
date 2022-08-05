void SL()
{
  Sensor1 = digitalRead(pin_S2);
  Sensor2 = digitalRead(pin_S0);
  Sensor3 = digitalRead(pin_S3);
  //LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA
  if ((Sensor1 == 0) && (Sensor3 == 0)) { // Se detectar na extremidade das faixas duas cores brancas
    robot_forward(V);// para Frente
    //delay(10);
  }
  if ((Sensor1 == 1) && (Sensor3 == 0)) { // Se detectar um lado preto e o outro branco
    robot_left(220);// para Direita
    //delay(10);
  }
  if ((Sensor1 == 0) && (Sensor3 == 1)) { // Se detectar um lado branco e o outro preto
    robot_right(220);// para Esquerda
    // delay(10);
  }
  if ((Sensor1 == 1) && (Sensor3 == 1) && (Sensor2 == 0)) {
    robot_right(255);
    delay(3000);
    robot_forward(255);// para Frente
    delay(100);
  }
  if ((Sensor1 == 1) && (Sensor3 == 1) && (Sensor2 == 1)) {
    robot_forward(V);// para Frente
    delay(300);
  }
}
