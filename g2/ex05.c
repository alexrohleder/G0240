#include <stdio.h>
#include "ex02.h"

void preencher_casas(struct Casa *casas, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("insira o valor da casa: ");
    scanf("%d", &casas[i].valor);

    printf("insira o nome do properitário da casa: ");
    scanf(" %s", casas[i].nome_proprietario);
  }
}

void mostrar_proprietario_da_casa_mais_cara(struct Casa *casas, int tamanho)
{
  int i_com_maior_valor = 0;

  for (int i = 0; i < tamanho; i++)
  {
    if (casas[i].valor > casas[i_com_maior_valor].valor)
    {
      i_com_maior_valor = i;
    }
  }

  printf("%s", casas[i_com_maior_valor].nome_proprietario);
}

int main()
{
  int tamanho = 2;
  struct Casa casas[tamanho];

  preencher_casas(casas, tamanho);
  mostrar_proprietario_da_casa_mais_cara(casas, tamanho);

  return 0;
}
