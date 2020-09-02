#include <stdio.h>
#include "biblioteca.h"

int main(void) {
  int op=0;
  float a=0,x=0,b=0;

  do{
  printf("\n\n1- Soma \n2- Subtração \n3- Multiplicação \n4- Divisão \n5- Seno \n6- Cosseno \n7-Sair\n");
  printf("Digite a operaçãodesejada:\n");
  scanf("%i", &op);

  switch(op){
    case 1:
      RealizarSoma();
      break;
    case 2:
      RealizarSubtração();
      break;
    case 3:
      RealizarMultiplicacao();
      break;
    case 4:
      RealizarDivisao();
      break;
    case 5:
      RealizarSeno();
      break;
    case 6:
      RealizarCosseno();
      break;
    case 7:
      printf("Saindo\n");
      break;
    default:
      printf("Operação inexistente\n");
  }
  }while(op!=7);
  
  return 0;
}
