#include <stdio.h>
#include <math.h>

void RealizarSoma(){
  float a=0,x=0,b=0;
  printf("\nSoma -> A+B\n");
  printf("Valor de A:\n");
  scanf("%f", &a);
  printf("Valor de B:\n");
  scanf("%f", &b);
  x=a+b;
  printf("A soma deu: %.2f", x);
}

void RealizarSubtração(){
  float a=0,x=0,b=0;
  printf("\nSubtração -> A-B\n");
      printf("Valor de A:\n");
      scanf("%f", &a);
      printf("Valor de B:\n");
      scanf("%f", &b);
      x=a-b;
      printf("A subtração deu: %.2f", x);
}

void RealizarMultiplicacao(){
  float a=0,x=0,b=0;
  printf("\nMultiplicação -> A*B\n");
      printf("Valor de A:\n");
      scanf("%f", &a);
      printf("Valor de B:\n");
      scanf("%f", &b);
      x=a*b;
      printf("A multiplicação deu: %.2f", x);
}

void RealizarDivisao(){
  float a=0,x=0,b=0;
  printf("\nDivisão -> A/B\n");
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
}

void RealizarSeno(){
  float a=0,x=0,b=0;
  printf("\nSeno \n");
  printf("Digite o angulo:\n");
  scanf("%f", &a);
  x=sin(a);
  printf("o Seno de %.2f é %f\n", a, x);
}

void RealizarCosseno(){
  float a=0,x=0,b=0;
  printf("\nCosseno\n");
  printf("Digite o angulo\n");
  scanf("%f",&a);
  x=cos(a);
  printf("o Cosseno de %.2f é %f\n", a, x);
}

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
