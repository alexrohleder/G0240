#include "stdio.h"

/**
 * Faça uma função que mostre a contagem de 0 até um número em cada linha;
 *
 * exemplo: número =5
 * 0
 * 01
 * 012
 * 0123
 * 01234
 * 012345
 */

int funcao(int x) {
  for (int i = 0; i <= x; i ++) {
    for (int j = 0; j <= i; j++) {
      printf("%d", j);
    }

    printf("\n");
  }
}

int main() {
  int x;

  printf("insira x: ");
  scanf("%d", &x);

  funcao(x);

  return 0;
}
