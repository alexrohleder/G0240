#include "stdio.h"

/**
 * Desenvolva um algoritmo que lê e armazena 100 inteiros.
 */

int main() {
  int n[100];

  for (int i = 0; i < 100; i++) {
    printf("insira (%d): ", i);
    scanf("%d", &n[i]);
  }

  return 0;
}
