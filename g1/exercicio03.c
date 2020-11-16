#include "stdio.h"
#include "stdlib.h"

/**
 * Construa uma função que recebe um ponteiro para um vetor de caracteres e o
 * tamanho desse vetor. A função deve retornar 1 se a string é palindromo, ou
 * 0 caso contrário.
 */

int is_palindromo(char *vetor_pointer, int tamanho)
{
  int is_palindromo = 1;

  for (int i = 0; i < tamanho; i++)
  {
    int b = *(vetor_pointer + i);
    int e = *(vetor_pointer + (tamanho - i - 1));

    if (b != e)
    {
      is_palindromo = 0;
      break;
    }
  }

  return is_palindromo;
}

int main()
{
  char vetor[] = "esse";
  char *vetor_pointer = &vetor[0];

  printf("palindromo: %s -> %d\n", vetor_pointer, is_palindromo(vetor_pointer, 4));

  return 0;
}
