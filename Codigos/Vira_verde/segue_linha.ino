void segue_linha() {

//com obstáculo:
if (digitalRead(botao) == LOW) {
  para();
  }

else {
//Frente se os dois estiverem no branco
if(analogRead(sensor_direito) < corteD and analogRead(sensor_esquerdo) < corteE){
    frente();
    //Serial.println("frente");
  } 
  

//virar pra esquerda se o sensor da esquerda perceber a linha
if(analogRead(sensor_direito) < corteD and analogRead(sensor_esquerdo) > corteE){
    
    
    //Anda pra frente até que o sensor deixe de perceber a linha
    while(true) {
      if (analogRead(sensor_esquerdo)<corteE) {
        break;
      }
      else {
        frente();
      }
    }

    //Girar pra esquerda até o sensor do meio perceber a linha
    while(true){ 
          girar_esquerda();
          //Serial.println("esquerda");
          if (analogRead(sensor_meio)>corte_meio and analogRead(sensor_esquerdo)<corteE){
            break;
          }
    
          //Caso o sensor da direita perceba a linha, volta um pouco e tenta centralizar de novo
          if (analogRead(sensor_direito)>corteD) {
            girar_direita();
            delay(500);
          }
    }  
}

////virar pra esquerda se o sensor da direita perceber a linha
if(analogRead(sensor_direito) > corteD and analogRead(sensor_esquerdo) < corteE){
        
    //Anda pra frente até que o sensor deixe de perceber a linha
    while(true) {
        if (analogRead(sensor_direito)<corteD) {
          break;
        }
        else {
          frente();
        }
    }
    
    //Girar pra direita até o sensor do meio perceber a linha
    while(true){ 
        girar_direita();
        //Serial.println("direita");
        if (analogRead(sensor_meio)>corte_meio and analogRead(sensor_direito)<corteD){
          //Serial.println("Meio");
          break;
        }
        
        //Caso o sensor da esquerda perceba a linha, volta um pouco e tenta centralizar de novo
        if (analogRead(sensor_esquerdo)>corteE) {
          girar_esquerda();
          delay(500);
        }
    } 
 }
  


//Quando os dois sensores estiverem na linha, ponto de decisão  
if (analogRead(sensor_direito) > corteD and analogRead(sensor_esquerdo) > corteE){
     para();
     //Serial.println("Parado");
   
    }
} //sem obstáculo
}
