#include <stdio.h>
#include "ex02.h"

void preencher_casas(struct Casa *casas, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("insira o número da casa: ");
    scanf("%d", &casas[i].numero);

    printf("insira a quantidade de quartos da casa: ");
    scanf("%d", &casas[i].quantidade_quartos);

    printf("insira o valor da casa: ");
    scanf("%d", &casas[i].valor);

    printf("insira o nome do properitário da casa: ");
    scanf(" %s", casas[i].nome_proprietario);
  }
}

int main()
{
  int tamanho = 2;
  struct Casa casas[tamanho];

  preencher_casas(casas, tamanho);

  return 0;
}
