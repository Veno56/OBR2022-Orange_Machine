void obstaculo()
{
  distancia1 = Ultra1.Ranging(CM);
  distancia2 = Ultra2.Ranging(CM);
  distancia6 = Ultra6.Ranging(CM);

  if ((distancia1 > 0) && (distancia1 < 4)) {
    if ((distancia2 > 0) && (distancia2 < 10)) { //Obstaculo Grande
      robot_backward(velocidade);// para Frente
      delay(200);
      //CONTORNO PELA ESQUERDA
      if ((distancia6 != 0) && (distancia6 < 150)) {
        robot_right(velocidade); // para Direita
        delay(1300);
        robot_forward(velocidade);// para Frente
        delay(800);
        robot_left(velocidade);// para Esquerda
        delay(1300);
        robot_forward(velocidade);// para Frente
        delay(1300);
        robot_left(velocidade);// para Esquerda
        delay(1300);
        robot_forward(velocidade);// para Frente
        delay(900);
        robot_right(velocidade); // para Direita
        delay(1000);
      }

      //CONTORNO PELA DIREITA
      else {
        robot_left(velocidade); // para Direita
        delay(1300);
        robot_forward(velocidade);// para Frente
        delay(800);
        robot_right(velocidade);// para Esquerda
        delay(1300);
        robot_forward(velocidade);// para Frente
        delay(1300);
        robot_right(velocidade);// para Esquerda
        delay(1300);
        robot_forward(velocidade);// para Frente
        delay(900);
        robot_left(velocidade); // para Direita
        delay(1000);
      }
    }
    else { //Bonificação
      robot_backward(velocidade);// para Frente
      delay(500);
      robot_stop(0);// para Frente
      delay(200);
      DescerGarra(255);
      robot_forward(velocidade);// para Frente
      delay(700);
      robot_stop(0);// para Frente
      delay(200);
      SubirGarra(255);
    }
  }
} //fim do void
