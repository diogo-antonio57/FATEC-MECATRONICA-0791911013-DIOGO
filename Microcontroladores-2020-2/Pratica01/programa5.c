#include <stdio.h>

int main(void) {
  int numero, resto;
  printf("informe um numero: ");
  scanf("%d", &numero);

  resto = numero % 2;

  if (resto==0){
    printf("\nEsse número é par");
  }
  else{
    printf("\nEsse número é impar");
  }
  return 0;
}
