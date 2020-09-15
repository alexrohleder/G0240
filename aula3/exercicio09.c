#include "stdio.h"
#include "stdlib.h"

/**
 * Utilizando o conceito de protótipos, escreva um programa com 5 opções:
 * 4 para realizar as operações matemáticas básicas, e 1 para encerrar o
 * programa. Ex:
 *
 * 1 – Adição
 * 2 – Subtração
 * 3 – Multiplicação
 * 4 – Divisão
 * 0 – Sair
 *
 * Implemente uma função para cada operação. Não se esquecer de tratar a
 * divisão por zero
 */

int sum(int i, int j);
int sub(int i, int j);
int mut(int i, int j);
float dvs(int i, int j);

int main() {
  int i, j, op;

  printf("insira o primeiro número: ");
  scanf("%d", &i);

  printf("insira o segundo número: ");
  scanf("%d", &j);

  printf("insira a operação (1 - adição, 2 - subtração, 3 - multiplicação, 4 - divisão, 0 - sair): ");
  scanf("%d", &op);

  switch (op) {
    case 1:
      printf("%d + %d = %d\n", i, j, sum(i, j));
      break;
    case 2:
      printf("%d - %d = %d\n", i, j, sub(i, j));
      break;
    case 3:
      printf("%d * %d = %d\n", i, j, mut(i, j));
      break;
    case 4:
      printf("%d / %d = %.2f\n", i, j, dvs(i, j));
      break;
    default:
      if (op != 0) {
        printf("operação não reconhecida\n");
        return 1;
      }
  }

  return 0;
}

int sum(int i, int j) {
  return i + j;
}

int sub(int i, int j) {
  return i - j;
}

int mut(int i, int j) {
  return i * j;
}

float dvs(int i, int j) {
  if (j == 0) {
    printf("impossível dividir por 0\n");
    exit(2);
  }

  return i / j;
}
