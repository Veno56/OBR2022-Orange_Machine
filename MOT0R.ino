
void DIR(){
  motor.setSpeed(150); // define a velocidade do motor
  motor.run(FORWARD); // faz o motor girar para a direita
  delay(1000); // aguarda 1 segundo
  motor.run(BACKWARD); // faz o motor girar para a esquerda
  delay(1000); // aguarda 1 segundo

}
void ESQ(){
     motor.setSpeed(150); // define a velocidade do motor
  motor.run(BACKWARD); // faz o motor girar para a esquerda
  delay(1000); // aguarda 1 segundo
  motor.run(FORWARD); // faz o motor girar para a direita
  delay(1000); // aguarda 1 segundo

}
