/ *
  Programa criado para testar nosso hardware - 2020 - 2
* /

// Constantes do programa - mapa de I / O's
const byte SERVO = 5 ;
const byte MOTOR_DC = 3 ;
const byte POTENCIOMETRO = 0 ;
const byte LDR = 1 ;
byte const CHAVE_1 = 2 ;
byte const CHAVE_2 = 6 ;
byte const CHAVE_3 = 7 ;
const byte CHAVES [] = {CHAVE_1, CHAVE_2, CHAVE_3};
LED1 de byte const = 12 ;
LED2 de byte const = 11 ;
const byte LED3 = 10 ;
LED de byte const 4 = 9 ;
LED 5 de byte const = 8 ;
LEDS de byte const [] = {LED1, LED2, LED3, LED4, LED5};


void  setup () {
  pinMode (LED5, OUTPUT);
}

void  loop () {
  digitalWrite (LED5, ALTO);
  atraso ( 1000 );
  digitalWrite (LED5, LOW);
  atraso ( 1000 );
}
