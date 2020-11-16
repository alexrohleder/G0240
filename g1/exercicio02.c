#include "stdio.h"
#include "stdlib.h"

/**
 * Desenvolva uma função que recebe um ponteiro para um vetor de caracteres e o
 * tamanho desse vetor. A função precisa deixar todas as letras maiúsculas.
 */

char *uppercase(char *vetor_pointer, int tamanho)
{
  char value[tamanho];

  for (int i = 0; i < tamanho; i++)
  {
    value[i] = *(vetor_pointer + i);

    if (value[i] >= 97 && value[i] <= 122)
    {
      value[i] -= 32;
    }
  }

  printf("%s", value);
}

int main()
{
  char vetor[8] = "Alex2020";
  char *vetor_pointer = &vetor[0];

  uppercase(vetor_pointer, 8);

  return 0;
}
