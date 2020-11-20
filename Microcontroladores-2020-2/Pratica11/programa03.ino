# inclui  < ESP8266WiFi.h >
# inclui  < ESP8266HTTPClient.h >

const  int LED_LIGADO = LOW;
const  int LED_DESLIGADO = HIGH;
const  int ENTRADA_ACIONADA = LOW;
const  int ENTRADA_DESACIONADA = HIGH;
const  int LED1 = D5;
const  int LED2 = D6;
const  int LED3 = D7;
const  int ENTRADA_01 = D1;
const  int ENTRADA_02 = D2;
const  int T_ON [] = { 0 , 25 , 50 , 75 , 99 , 122 , 144 , 164 , 183 , 200 , 216 , 229 , 240 , 248 , 254 , 258 , 259 , 258 , 255 , 248 , 240 , 229 , 216 , 201 , 184 , 165 , 144, 122 , 99 , 75 , 51 , 25 };
const  int T_total = 260 ;
// Variáveis ​​globais
char msg [ 30 ];
// Variável aproveitado com o millis ()
 long tempoAnterior sem sinal;
 tempo longo sem sinalAnteriorCiclo;
// Indica que a variável será usada dentro de uma interrupção
volatile  int posicao = 0 ;
// Variável útil para realizar debounce no botão
 tempoBotao longo sem sinal  volátil ;

// Variáveis ​​para comunicação Wifi
const  char * URL_SERVIDOR = " http://viacep.com.br/ws/01001000/json/ " ;
// Cliente para realizar a requisição
Cliente WiFiClient;
HTTPClient http;

// Funções de interrupção - ISR
void ICACHE_RAM_ATTR conta_pulsos () {
  if ( micros () -tempoBotao> = 100 ) {
    posicao = 0 ;
    tempoBotao = micros ();
  }
}

void  inicializa_hardware () {
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  digitalWrite (LED1, LED_DESLIGADO);
  digitalWrite (LED2, LED_DESLIGADO);
  digitalWrite (LED3, LED_DESLIGADO);
  pinMode (ENTRADA_01, INPUT_PULLUP);
  pinMode (ENTRADA_02, INPUT_PULLUP);
  
  // Configura a interrupção externa
  attachInterrupt ( digitalPinToInterrupt (ENTRADA_01), conta_pulsos, RISING);
  
  // Inicializar a comunicação
  Serial. começar ( 115200 ); // 9600, 19200, 38400, 115200
  
  // Inicializa a comunicação Wifi
  inicializar_wifi ();
}

void  inicializar_wifi () {
  // Conecta com o nome e a senha da rede
  // LEMBRAR DE APAGAR ESSA INFORMAÇÃO AO SUBIR NO GITHUB !!
  Wi-fi. começar ( " SEU_REDE " , " SUA_SENHA " );
  // Aguarda a comunicação estar pronta
  Serial. imprimir ( " Conectando " );
  enquanto (WiFi. status ()! = WL_CONNECTED)
  {
    atraso ( 500 );
    Serial. imprimir ( " . " );
  }
  Serial. println ();

  Serial. print ( " Conectado, Dados da Conexão (IP): " );
  Serial. println (WiFi. localIP ());
}

void  realiza_requisicao_wifi () {
  // Verificar se uma conexão foi realizada
  if (http. begin (client, URL_SERVIDOR)) {
    Serial. print ( " Conectado! \ n " );
    // Pede os dados utilizando o método GET do HTTP
    int httpCode = http. GET ();
    // Verifica se o código é válido
    if (httpCode> 0 ) {
      Serial. imprimir ( " Codigo HTTP: " );
      Serial. println (httpCode);
      // Verifica se o código foi de requisição, realizad com sucesso e trata essas informações
      if (httpCode == HTTP_CODE_OK) {
        // Pega os dados
        Carga útil da string = http. getString ();
        Serial. println (carga útil);
      }
    } else {
      Serial. print ( " Algo deu errado! \ n " );
    }
    
    
  } else {
    Serial. print ( " Nao foi possivel conectar! \ n " );
  }
}

void  setup () {
  inicializa_hardware ();
}


void  loop () {
  realiza_requisicao_wifi ();
  atraso ( 2000 );
  enquanto ( 1 ) retardo ( 50 );
}
