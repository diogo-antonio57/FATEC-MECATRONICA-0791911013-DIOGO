#include <stdio.h>

void RealizarSoma(){
  float a=0,x=0,b=0;
  printf("Soma -> A+B\n");
  printf("Valor de A:\n");
  scanf("%f", &a);
  printf("Valor de B:\n");
  scanf("%f", &b);
  x=a+b;
  printf("A soma deu: %.2f", x);
}

int main(void) {
  int op=0;
  float a=0,x=0,b=0;

  while(op!=7){
  printf("\n\n1- Soma \n2- Subtração \n3- Multiplicação \n4- Divisão \n5- Seno \n6- Cosseno \n7-Sair\n");
  printf("Digite a operaçãodesejada:\n");
  scanf("%i", &op);

  switch(op){
    case 1:
      RealizarSoma();
      break;
    case 2:
      printf("Subtração -> A-B\n");
      printf("Valor de A:\n");
      scanf("%f", &a);
      printf("Valor de B:\n");
      scanf("%f", &b);
      x=a-b;
      printf("A subtração deu: %.2f", x);
      break;
    case 3:
      printf("Multiplicação -> A*B\n");
      printf("Valor de A:\n");
      scanf("%f", &a);
      printf("Valor de B:\n");
      scanf("%f", &b);
      x=a*b;
      printf("A multiplicação deu: %.2f", x);
      break;
    case 4:
      printf("Divisão -> A/B\n");
      printf("Valor de A:\n");
      scanf("%f", &a);
      printf("Valor de B:\n");
      scanf("%f", &b);
      if(b!=0){
        x=a/b;
        printf("A multiplicação deu: %.2f", x);
      }else{
        printf("Impossivel dividir por 0\n");
      }
      break;
    case 5:
      printf("Seno \n");
      break;
    case 6:
      printf("Cosseno\n");
      break;
    case 7:
      printf("Saindo\n");
      break;
    default:
      printf("Operação inexistente\n");
  }
  }
  
  return 0;
}
