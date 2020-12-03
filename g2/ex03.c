#include <stdio.h>
#include "ex02.h"

int main()
{
  struct Casa casas[5];

  for (int i = 0; i < 5; i++)
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

  return 0;
}
