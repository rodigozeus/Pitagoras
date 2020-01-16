void frente(){

     digitalWrite(direito_Invertido, LOW);
     digitalWrite(esquerdo_Invertido, LOW);
     
     analogWrite(vel_direito, veloc_Frente+compensa_direito);
     analogWrite(vel_esquerdo, veloc_Frente+compensa_esquerdo);
    
     digitalWrite(direito, HIGH);
     digitalWrite(esquerdo, HIGH);
 
}

void tras(){

     digitalWrite(direito, LOW);
     digitalWrite(esquerdo, LOW);
    
     analogWrite(vel_direito, veloc_Reverso+compensa_direito);
     analogWrite(vel_esquerdo, veloc_Reverso+compensa_esquerdo);
    
     digitalWrite(direito_Invertido, HIGH);
     digitalWrite(esquerdo_Invertido, HIGH);
 
}


void para(){

     digitalWrite(direito_Invertido, LOW);
     digitalWrite(esquerdo_Invertido, LOW);
     
     analogWrite(vel_direito, 0);
     analogWrite(vel_esquerdo, 0);
    
     digitalWrite(direito, LOW);
     digitalWrite(esquerdo, LOW);

}

void direita(){

     digitalWrite(direito_Invertido, HIGH);
     digitalWrite(esquerdo_Invertido, LOW);
     
     analogWrite(vel_direito, veloc_Frente+compensa_direito);
     analogWrite(vel_esquerdo, veloc_Frente+compensa_esquerdo);
    
     digitalWrite(direito, LOW);
     digitalWrite(esquerdo, LOW);

}

void esquerda(){

     digitalWrite(direito_Invertido, LOW);
     digitalWrite(esquerdo_Invertido, HIGH);
     
     analogWrite(vel_direito, veloc_Frente+compensa_direito);
     analogWrite(vel_esquerdo, veloc_Frente+compensa_esquerdo);
    
     digitalWrite(direito, LOW);
     digitalWrite(esquerdo, LOW);

}

void girar_direita(){

     digitalWrite(direito, LOW);
     digitalWrite(esquerdo_Invertido, LOW);
     
     analogWrite(vel_direito, veloc_Reverso+compensa_direito);
     analogWrite(vel_esquerdo, veloc_Frente+compensa_esquerdo);
    
     digitalWrite(direito_Invertido, HIGH);
     digitalWrite(esquerdo, HIGH);

}

void girar_esquerda(){

     digitalWrite(direito_Invertido, LOW);
     digitalWrite(esquerdo, LOW);  
     
     analogWrite(vel_direito, veloc_Frente+compensa_direito);
     analogWrite(vel_esquerdo, veloc_Reverso+compensa_esquerdo);
    
     digitalWrite(direito, HIGH);
     digitalWrite(esquerdo_Invertido, HIGH);

}

void tras_direita(){

     digitalWrite(direito, HIGH);
     digitalWrite(esquerdo, LOW);
    
     analogWrite(vel_direito, veloc_Reverso+compensa_direito);
     analogWrite(vel_esquerdo, veloc_Reverso+compensa_esquerdo);
    
     digitalWrite(direito_Invertido, LOW);
     digitalWrite(esquerdo_Invertido, HIGH);

}

void tras_esquerda(){
  
     digitalWrite(direito, HIGH);
     digitalWrite(esquerdo, LOW);
    
     analogWrite(vel_direito, veloc_Reverso+compensa_direito);
     analogWrite(vel_esquerdo, veloc_Reverso+compensa_esquerdo);
    
     digitalWrite(direito_Invertido, LOW);
     digitalWrite(esquerdo_Invertido, HIGH);
 }

void parada_total() {
  para();
  while(true) {}
}
