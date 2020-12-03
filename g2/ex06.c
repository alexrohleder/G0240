#include <stdio.h>
#include "ex02.h"

void preencher_casas(struct Casa *casas, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("insira o valor da casa: ");
    scanf("%d", &casas[i].valor);
  }
}

void mostrar_some_dos_valores(struct Casa *casas, int tamanho)
{
  int soma = 0;

  for (int i = 0; i < tamanho; i++)
  {
    soma += casas[i].valor;
  }

  printf("%d", soma);
}

int main()
{
  int tamanho = 2;
  struct Casa casas[tamanho];

  preencher_casas(casas, tamanho);
  mostrar_some_dos_valores(casas, tamanho);

  return 0;
}
