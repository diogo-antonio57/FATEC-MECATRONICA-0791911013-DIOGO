#include <stdio.h>

int main(void) {
  int op;
  float a=0,x=0,b=0;

  printf("1- Soma \n2- Subtração \n3- Multiplicação \n4- Divisão \n5- Seno \n6- Cosseno\n");
  printf("Digite a operaçãodesejada:\n");
  scanf("%i", &op);

  switch(op){
    case 1:
      printf("Soma -> A+B\n");
      printf("Valor de A:\n");
      scanf("%f", &a);
      printf("Valor de B:\n");
      scanf("%f", &b);
      x=a+b;
      printf("A soma deu: %.2f", x);
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
    default:
      printf("Operação inexistente\n");
  }
  
  return 0;
}
