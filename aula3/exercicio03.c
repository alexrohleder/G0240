#include "stdio.h"

/**
 * Desenvolva um algoritmo com uma função para receber três valores numéricos
 * A, B e C, e trocá-los entre as variáveis de forma que, ao final, a variável
 * A possua o maior valor e a variável C o menor.
 */

void troca_aux(int *i, int *j) {
  int temp;

  temp = *i;
  *i = *j;
  *j = temp;
}

void troca(int *a, int *b, int *c) {
  if (*a < *b) {
    troca_aux(a, b);
  }

  if (*b < *c) {
    troca_aux(b, c);
  }

  // if the conditions continue, re-execute.
  if (*a < *b || *b < *c) {
    troca(a, b, c);
  }
}

int main() {
  int a, b, c;

  printf("insira um número: ");
  scanf("%d", &a);

  printf("insira um número: ");
  scanf("%d", &b);

  printf("insira um número: ");
  scanf("%d", &c);

  troca(&a, &b, &c);

  printf("A: %d B: %d C: %d\n", a, b, c);

  return 0;
}
