#include "stdio.h"
#include "stdlib.h"

/**
 * Projete uma função que recebe um ponteiro para um vetor de caracteres e o
 * tamanho desse vetor. A função deve retornar um ponteiro para um novo vetor
 * com o conteúdo invertido. ex. arvore -> evora
 */

char *inverte(char *vetor_pointer, int tamanho)
{
  char *invertido = (char *)malloc(tamanho);

  for (int i = tamanho - 1; i >= 0; i--)
  {
    invertido[tamanho - 1 - i] = *(vetor_pointer + i);
  }

  return invertido;
}

int main()
{
  char vetor[] = "alex2020";
  char *vetor_pointer = &vetor[0];

  printf("inverte: %s", inverte(vetor_pointer, 8));

  return 0;
}
