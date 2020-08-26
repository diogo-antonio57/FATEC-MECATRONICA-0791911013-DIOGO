#include <stdio.h>

int main(void) {
  float a=0,x=0,b=0,y=0;
  printf("Digite o valor de A:\n");
  scanf("%f", &a);
  printf("Digite o valor de X:\n");
  scanf("%f", &x);
  printf("Digite o valor de B\n");
  scanf("%f", &b);
  y = (a*x)+b;
  printf("%.2f x %.2f + %.2f = %.2f", a, x, b, y);
  return 0;
}
