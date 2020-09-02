#include <stdio.h>
#include <math.h>

float ConvertRadiano(float grau){
  float resposta;
  resposta= grau * M_PI / 180;
  return resposta;
}

float calcularSeno(float angulo){
float resposta;
angulo = ConvertRadiano(angulo);
resposta = sin(angulo);
return resposta;
}

int main(void) {
  float angulo;
  printf("Digite o angulo\n");
  scanf("%f", &angulo);
  printf("O valor de %f em radiano é %f\n", angulo, ConvertRadiano(angulo));
  printf("Valor de seno %f\n", calcularSeno(angulo));
  printf("Angulo: %f\n",angulo);
  return 0;
}
