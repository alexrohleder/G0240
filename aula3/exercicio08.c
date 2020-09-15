#include "stdio.h"
#include "stdlib.h"

/**
 * Escreva uma função que recebe a idade de uma pessoa em anos, meses e dias e
 * retorna essa idade expressa em dias. Leve em consideração que todos os meses
 * possuem 30 dias e que a pessoa já comemorou aniversário no ano corrente.
 */

int main() {
  int anos, meses, dias;

  printf("insira os anos: ");
  scanf("%d", &anos);

  printf("insira os meses: ");
  scanf("%d", &meses);

  printf("insira os dias: ");
  scanf("%d", &dias);

  printf("\n");
  printf("idade em dias: %d\n", dias + (meses * 30) + (anos * 12 * 30));

  return 0;
}
