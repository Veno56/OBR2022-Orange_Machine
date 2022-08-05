void nivel() {
  Sensor1 = digitalRead(pin_S2);
  Sensor2 = digitalRead(pin_S0);
  Sensor3 = digitalRead(pin_S3);
  Sensor4 = digitalRead(pin_S1);
  Sensor5 = digitalRead(pin_S4);
  distancia1 = Ultra4.Ranging(CM);
  distancia2 = Ultra6.Ranging(CM);


  if ((distancia1 < 100) || (distancia2 < 100)) {
    if ((Sensor1 == 0) && (Sensor2 == 0) && (Sensor3 == 0) && (Sensor4 == 0) && (Sensor5 == 0)) {
      Nivel = 2;
    }
  }
  else
    Nivel = 1;
}
