#include <stdio.h>

int main(void) {
  int n1, n2, s;
  printf("informe um numero\n");
  scanf("%i", &n1);
  printf("informe o segundo numero\n");
  scanf("%i", &n2);
  s = n1+n2;
  printf("o total da soma é %i\n", s);
  return 0;
}
