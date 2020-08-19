#include <stdio.h>

int main(void) {
  float numero_real;
  int numero_inteiro;
  char letra;
printf("Informe um valor real: ");
scanf("%f", &numero_real);
printf("informe um valor inteiro: ");
scanf("%d", &numero_inteiro);
printf("informe uma letra: ");
scanf(" %c", &letra);

printf("\nNumero real: %f\n", numero_real);
printf("Valor inteiro: %i\n", numero_inteiro);
printf("Letra digitada: %c\n", letra);
printf("\nPor isso é só\n");
  return 0;
}
