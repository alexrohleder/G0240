#include "stdio.h"

/**
 * Escreva um programa que solicite ao usuário o preenchimento de uma matriz de
 * inteiros 5x5 e, ao final, apresente a matriz seguida do maior número inserido
 * junto de seu índice (localização na matriz).
 */

int size = 5;

int main() {
  int matrix[size][size], biggest = 0;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("insira x[%d] y[%d]: ", i, j);
      scanf("%d", &matrix[i][j]);

      if (
        matrix[i][j] > biggest ||
        (biggest == 0 && matrix[i][j] < 0) // considerando números negativos
      ) {
        biggest = matrix[i][j];
      }
    }
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d ", matrix[i][j]);
    }

    printf("\n");
  }

  printf("\n maior numero: %d", biggest);

  return 0;
}
