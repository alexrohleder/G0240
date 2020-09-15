#include "stdio.h"

/**
 * Faça uma função que receba 3 parâmetro, x, y e z, e conte desde x até z,
 * pulando y números;
 *
 * exemplo: x=2 , y=3, z=15;
 * 2 5 8 11 14
 */

int funcao(int x, int y, int z) {
  for (int i = x; i < z; i += y) {
    printf("%d\n", i);
  }
}

int main() {
  int x, y, z;

  printf("insira x: ");
  scanf("%d", &x);

  printf("insira y: ");
  scanf("%d", &y);

  printf("insira z: ");
  scanf("%d", &z);

  funcao(x, y, z);

  return 0;
}
