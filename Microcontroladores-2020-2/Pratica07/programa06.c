# inclui  < stdio.h >
# inclui  < string.h >
int  main ( void ) {
  char msg [ 20 ];

  // Inicializa uma msg como uma string vazia
  msg [ 0 ] = ' \ 0 ' ;
  char dado;
  faça {
    // Ler uma letra do teclado
    dado = getchar ();
    printf ( " Digitado: % c \ n " , dado);
    // Tudo que for digitado que não for enter (\ n) vai para dentro da variavel msg
    if (dado! = ' \ n ' ) {
      sprintf (msg, " % s% c " , msg, dado);
    }
    printf ( " Valor de msg: % s \ n " , msg);

  } enquanto (dado! = ' q ' );
  printf ( " FIM DIGITACAO! \ n " );
  printf ( " % s \ n " , msg);
  return  0 ;
}
