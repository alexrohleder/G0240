#include "stdio.h"

/**
 * Faça uma função que receba um número inteiro e conte de 0 até esse número
 */

int main() {
  int n;

  printf("insira um numero: ");
  scanf("%d", &n);

  if (n > 0) {
    for (int i = 0; i <= n; i++) {
      printf("%d\n", i);
    }
  } else {
    for (int i = 0; i >= n; i--) {
      printf("%d\n", i);
    }
  }

  return 0;
}
