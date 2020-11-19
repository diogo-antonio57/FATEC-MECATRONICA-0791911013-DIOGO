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

// Função para inicializar o hardware
void  inicializar_hardware () {
  pinMode (SERVO, OUTPUT);
  pinMode (MOTOR_DC, OUTPUT);
  para ( int i = 0 ; i < 5 ; i ++)
    pinMode (LEDS [i], OUTPUT);
  para ( int i = 0 ; i < 3 ; i ++)
    pinMode (CHAVES [i], INPUT_PULLUP);
  // Apenas porque estamos utilizando um pullup externo
  pinMode (CHAVE_1, INPUT);
}

void  setup () {
  inicializar_hardware ();
}

void  loop () {
  digitalWrite (LED3, ALTO);
  atraso ( 1000 );
  digitalWrite (LED3, LOW);
  atraso ( 1000 );
}
