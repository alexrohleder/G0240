#include "stdio.h"
#include "stdlib.h"

/**
 * Desenvolva um algoritmo com uma função que recebe as três notas de um aluno
 * por parâmetro e uma letra. Se a letra for A, deve-se calcular a média
 * aritmética das 3 notas, se for P, calcula-se a média ponderada (pesos: 5, 3 e 2)
 * e se for H, calcula-se a média harmônica. O resultado deve ser apresentado na
 * função principal.
 */

float calc(float i, float j, float k, char op) {
  switch (op) {
    case 'A':
    case 'a':
      return (i + j + k) / 3;
    case 'P':
    case 'p':
      return (i * 5 + j * 3 + k * 2) / (5 + 3 + 2);
    case 'H':
    case 'h':
      return 3 / (1 / i + 1 / j + 1 / k);
    default:
      printf("\n\noperação não suportada, use um operador entre A, P e H");
      exit(1);
  }
}

int main() {
  float i, j, k;
  char op;

  printf("insira a primeira nota: ");
  scanf("%f", &i);

  printf("insira a segunda nota: ");
  scanf("%f", &j);

  printf("insira a terceira nota: ");
  scanf("%f", &k);

  printf("insira a operação (A, P ou H): ");
  scanf(" %c", &op);

  printf("resultado: %f\n", calc(i, j, k, op));

  return 0;
}
