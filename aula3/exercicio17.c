#include "stdio.h"
#include "stdlib.h"

/**
 * Escreva uma função em C que receba um número n e retorne 1 se a soma dos
 * dígitos formantes de n for 10; 0 caso contrário. Por exemplo, se o valor de
 * n recebido for 145 a função retorna 1.
 */

int match(int n) {
  int sum = 0;

  for (int i = 1; i < n; i *= 10) {
    sum += n / i % 10;
  }

  return sum == 10 ? 1 : 0;
}

int main() {
  int n;

  printf("insira o número: ");
  scanf("%d", &n);

  printf("resultado: %d\n", match(n));

  return 0;
}
