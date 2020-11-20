void  setup () {
  DDRB = 0b00110000 ;  // Configura PB5 (D13) e PB4 (D12) como ocorre
}

void  loop () {
  PORTB = 0b00100000 ;
  atraso ( 1000 );
  PORTB = 0b00010000 ;
  atraso ( 1000 );
}
