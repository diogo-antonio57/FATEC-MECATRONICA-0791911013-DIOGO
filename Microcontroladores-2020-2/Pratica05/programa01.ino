/ *
  Programa criado para testar nosso hardware - 2020 - 2
* /

void  setup () {
  pinMode ( 13 , OUTPUT);
}

void  loop () {
  digitalWrite ( 13 , ALTO);
  atraso ( 1000 );
  digitalWrite ( 13 , LOW);
  atraso ( 1000 );
}
