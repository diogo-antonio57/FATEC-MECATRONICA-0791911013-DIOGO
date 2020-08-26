#include <stdio.h>

int main(void) {
  float a=0,x=0,b=0;
  printf("Descubra o x da equação AX*B=0\n");
  printf("Digite o valor de B:\n");
  scanf("%f", &b);
  printf("Digite o valor de A:\n");
  scanf("%f", &a);
  x = -b/a;
  printf("-%.2f / %.2f = %.2f", b, a, x);
  return 0;
}
