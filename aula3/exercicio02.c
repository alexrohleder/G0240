#include "stdio.h"

/**
 * Escrever uma função que leia 10 números inteiros e verifique quantos deles
 * são ímpares.
 */

int main() {
  int n, odd_count = 0;

  for (int i = 0; i < 10; i++) {
    printf("insira um número: ");
    scanf("%d", &n);

    if (n % 2 > 0) {
      odd_count++;
    }
  }

  printf("dos números inseridos %d são ímpares.\n", odd_count);

  return 0;
}
