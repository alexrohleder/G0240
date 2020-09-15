#include "stdio.h"

/**
 * Faça um programa para ler 100 inteiros e informar a soma de todos números
 * lidos.
 */

int main() {
  int n, c = 0;

  for (int i = 0; i < 100; i++) {
    printf("insira (%d): ", i);
    scanf("%d", &n);
    c += n;
  }

  printf("total: %d", c);

  return 0;
}
