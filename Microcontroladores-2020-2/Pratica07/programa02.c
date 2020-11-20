# inclui  < stdio.h >

int  main ( void ) {
  // Apenas na declaração
  char msg [ 20 ] = " ola mundo " ;
  printf ( " Exibindo uma mensagem toda de um momento: % s \ n " , msg);
  // Acessando um caracter de cada vez
  int posicao;
  para (posicao = 0 ; posicao < 20 ; posicao ++) {
    printf ( " Caracter na posicao: % i eh: % c \ n " , posicao, msg [posicao]);
  }
  return  0 ;
}
