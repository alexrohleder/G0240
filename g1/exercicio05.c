#include "stdio.h"
#include "stdlib.h"

/**
 * Faça uma função que recebe um ponteiro para um vetor de caracteres e o tamanho
 * desse vetor. A função deve retornar o inteiro equivalente aos números recebidos
 * da string.
 */

int faz_alguma_coisa(char *vetor_pointer, int tamanho)
{
  int inteiro_equivalente_a_algo = 0;

  for (int i = 0; i < tamanho; i++)
  {
    int valor = *(vetor_pointer + i);

    // se o valor for um inteiro
    if (valor >= 48 && valor <= 57)
    {
      // faz algo, não entendi a questão
      inteiro_equivalente_a_algo += valor;
    }
  }

  return inteiro_equivalente_a_algo;
}

int main()
{
  char vetor[] = "alex2020";
  char *vetor_pointer = &vetor[0];

  printf("%d", faz_alguma_coisa(vetor_pointer, 8));

  return 0;
}
