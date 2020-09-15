#include "stdio.h"

/**
 * Desenvolva um algoritmo com uma função que recebe a idade de um nadador por
 * parâmetro e apresenta sua categoria de acordo com a tabela abaixo:
 *
 * idade -> categoria:
 *
 * 5 a 7 anos -> infantil A
 * 8 a 10 anos -> infantil B
 * 11 a 13 anos -> juvenil A
 * 14 a 17 anos -> juvenil B
 * maiores de 80 (inclusive) -> adulto
 */

int main() {
  int n;

  printf("insira quantos anos o nadador tem: ");
  scanf("%d", &n);

  if (n < 5) {
    printf("O nadador deve ter pelo menos 5 anos.\n");
    return 1;
  }

  if (n < 8) {
    printf("infantil A\n");
  } else if (n < 11) {
    printf("infantil B\n");
  } else if (n < 14) {
    printf("juvenil A\n");
  } else if (n < 18) {
    printf("juvenil B\n");
  } else {
    printf("adulto\n");
  }

  return 0;
}
