#include "math.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes,
 * coletando dados sobre o salário e número de filhos. Faça algoritmo com
 * uma função que leia esses dados para um número não determinado de pessoas
 * e apresente a média de salário da população, a média do número de filhos,
 * o maior salário e o percentual de pessoas com salário até R$350,00.
 */

int main() {
  int somatorio_salario = 0,
    somatorio_filhos = 0,
    total_respostas = 0,
    maior_salario = 0,
    total_salario_ate_350 = 0,
    quantidade_filhos,
    salario;

  char continuar = 's';

  while (continuar == 's' || continuar == 'S') {
    printf("insira quantidade de filhos: ");
    scanf("%d", &quantidade_filhos);

    printf("insira o salário: ");
    scanf("%d", &salario);

    somatorio_filhos += quantidade_filhos;
    somatorio_salario += salario;
    total_respostas++;

    if (maior_salario < salario) {
      maior_salario = salario;
    }

    if (salario <= 350) {
      total_salario_ate_350++;
    }

    printf("continuar inserindo? (s/n) ");
    scanf(" %c", &continuar);
  }

  printf("\n");
  printf("média de salário: %d\n", somatorio_salario / total_respostas);
  printf("média do número de filhos: %.0f\n", round(somatorio_filhos / total_respostas));
  printf("maior salário: %d\n", maior_salario);
  printf("percentual de pessoas com salário até R$350,00: %d\n", total_salario_ate_350 * 100 / total_respostas);

  return 0;
}
