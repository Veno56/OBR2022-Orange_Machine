
void VerdeDir()
{
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  green = pulseIn(sensorOut_D, digitalRead(sensorOut_D) == HIGH ? LOW : HIGH);
  if (green > 29 && green < 40)
  {
    VerdeD = 1;
  }
}

void VerdeEsq()
{
  digitalWrite(S6, LOW);
  digitalWrite(S7, LOW);
  green_e = pulseIn(sensorOut_E, digitalRead(sensorOut_E) == HIGH ? LOW : HIGH);
  if ((green_e > 330) && (green_e < 350))
  {
    VerdeE = 1;
  }
}
