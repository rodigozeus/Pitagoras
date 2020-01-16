/*
==============================================================================================================
MAPEAMENTO DE HARDWARE:
==============================================================================================================*/
//Motor do lado direito
#define direito 7                                                                                                 
#define direito_Invertido 5
#define vel_direito 6 //Precisa ser PWM

//Motor do lado esquerdo
#define esquerdo 2
#define esquerdo_Invertido 4
#define vel_esquerdo 3 //Precisa ser PWM

//Sensores de linha
#define sensor_direito A1
#define sensor_esquerdo A3
#define sensor_meio A2

//Sensor de toque
#define botao A5


/*
==============================================================================================================
CONSTANTES:
==============================================================================================================*/

#define compensa_direito 0 //Valor somado a velocidade do motor direito
#define compensa_esquerdo 0 //Valor somado a velocidade do motor esquerdo

//Velocidades
#define veloc_Frente 120
#define veloc_Reverso 120

//cortes dos sensores de linha
#define corteD 60
#define corteE 60
#define corte_meio 180

/*
==============================================================================================================
VARIÁVEIS:
==============================================================================================================*/





/*
==============================================================================================================
CONFIGURAÇÃO:
==============================================================================================================*/
void setup() {

  //Pinos dos motores como saída
  pinMode(direito, OUTPUT);
  pinMode(direito_Invertido, OUTPUT);
  pinMode(esquerdo, OUTPUT);
  pinMode(esquerdo_Invertido, OUTPUT);
  pinMode(vel_direito, OUTPUT);
  pinMode(vel_esquerdo, OUTPUT);

  
  //Pinos dos sensores
  pinMode(sensor_direito, INPUT);
  pinMode(sensor_esquerdo, INPUT);
  pinMode(sensor_meio, INPUT);
  pinMode(botao, INPUT_PULLUP);
  
  Serial.begin(9600);
}


/*
==============================================================================================================
PROGRAMA PRINCIPAL:
==============================================================================================================*/
void loop() {
  
frente(50); //recebe a informação de quantos centimetros ir pra frente
parada_total();

}

 
