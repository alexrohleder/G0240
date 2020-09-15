#include "stdio.h"
#include "stdbool.h"

/**
 * Faça um algoritmo que contenha uma matriz quadrada de ordem 12 onde os
 * seus elementos devem ser preenchidos de acordo com as seguintes regras
 * (i e j representam linha e coluna):
 *
 * i + j se ambos os índices forem ímpares
 * i - j se ambos os índices forem pares
 * i * j se i for ímpar e se j for par
 * i / j se i for par e j for ímpar
 *
 * A matriz deve ser apresentada no final da execução do programa.
 */

int size = 12;

bool isEven(int i) {
  return i % 2 == 0;
}

bool isOdd(int i) {
  return !isEven(i);
}

int main() {
  int matrix[size][size];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      // i + j se ambos os índices forem ímpares
      if (isOdd(i) && isOdd(j)) {
        matrix[i][j] = i + j;
        continue;
      }

      // i - j se ambos os índices forem pares
      if (isEven(i) && isEven(j)) {
        matrix[i][j] = i - j;
        continue;
      }

      // i * j se i for ímpar e se j for par
      if (isOdd(i) && isEven(j)) {
        matrix[i][j] = i * j;
        continue;
      }

      // i / j se i for par e j for ímpar
      if (isEven(i) && isOdd(j)) {
        matrix[i][j] = i / j;
        continue;
      }
    }
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d ", matrix[i][j]);
    }

    printf("\n");
  }

  return 0;
}
