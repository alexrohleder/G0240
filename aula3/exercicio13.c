#include "stdio.h"
#include "stdlib.h"

/**
 * Escreva uma função em C que receba como argumentos a altura (alt) e o sexo
 * de uma pessoa e retorne o seu peso ideal. Para homens, calcular o peso ideal
 * usando a fórmula:
 *
 * PI h= 72.7× alt− 58 e, para mulheres, PI m= 62.1× alt − 44.7.
 */

int main() {
  float altura;
  char sexo;

  printf("insira o sexo: (m/f) ");
  scanf(" %c", &sexo);

  if (sexo != 'm' && sexo != 'f') {
    printf("sexo inválido");
    return 1;
  }

  printf("insira a altura (metros): ");
  scanf("%f", &altura);

  if (sexo == 'm') {
    printf("peso ideal: %.2f\n", 72.7 * altura - 58);
  } else {
    printf("peso ideal: %.2f\n", 62.1 * altura - 44.7);
  }

  return 0;
}
