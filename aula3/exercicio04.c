#include "stdio.h"

/**
 * Faça um programa com uma função que recebe por parâmetro um número inteiro
 * e retorna 1 caso seja maior que um valor inserido pelo usuário dentro da
 * função e 0 em caso contrário.
 */

int funcao(int i) {
  int n;

  printf("insira um número: ");
  scanf("%d", &n);

  return i > n ? 0 : 1;
}

int main() {
  printf("resultado: %d\n", funcao(30));

  return 0;
}
