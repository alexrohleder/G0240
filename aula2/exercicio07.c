#include "stdio.h"
#include "stdlib.h"

/**
 * Faça uma função (calc) que receba dois números e um caractere que representa
 * a operação (+,-,/,*). A função deve retornar o resultado da operação entre
 * os dois números;
 */

float calc(float i, float j, char op) {
  switch (op) {
    case '+':
      return i + j;
    case '-':
      return i - j;
    case '/':
      return i / j;
    case '*':
      return i * j;
    default:
      printf("\n\noperação não suportada, use um operador entre +, -, / e *");
      exit(1);
  }
}

int main() {
  float i, j;
  char op;

  printf("insira o primeiro numero: ");
  scanf("%f", &i);

  printf("insira o segundo numero: ");
  scanf("%f", &j);

  printf("insira a operação (+, -, /, *): ");
  scanf(" %c", &op);

  printf("resultado: %f", calc(i, j, op));

  return 0;
}
