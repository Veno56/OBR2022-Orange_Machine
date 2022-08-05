void SubirGarra(unsigned char v) {
  motor1.setSpeed(v);
  motor1.run(FORWARD);
  delay(2000);
}

void DescerGarra(unsigned char v) {
  motor1.setSpeed(v);
  motor1.run(BACKWARD);
  delay(1500);
}

void Garra_stop(unsigned char v)
{
  motor1.setSpeed(v);
  motor1.run(RELEASE);
}
