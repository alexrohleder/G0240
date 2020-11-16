#include "stdio.h"
#include "stdlib.h"

/**
 * Crie uyma função que recebe um ponteiro para um vetor de inteiros e o tamanho
 * desse vetor. A função deve retornar a soma de todos os elementos do vetor.
 */

int soma(int *vetor_pointer, int tamanho)
{
  int total = 0;

  for (int i = 0; i < tamanho; i++)
  {
    total += *(vetor_pointer + i);
  }

  return total;
}

int main()
{
  int vetor[5] = {1, 2, 3, 4, 5};
  int *vetor_pointer = &vetor[0];

  printf("%d", soma(vetor_pointer, 5));

  return 0;
}
