#include "math.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * Faça uma função (calc) que receba dois números e um caractere que representa
 * a operação (+,-,/,*). A função deve retornar o resultado da operação entre
 * os dois números;
 *
 * No exercício anterior, adicione o caractere ^, e faça uma outra função para
 * ser invocada pela função calc que calcule o primeiro número elevado no expoente
 * do segundo número (não utilize funções prontas); // exemplo: 4 , 2, ^ = 4²
 *
 * Adicione, também, o caractere v, o qual retorna, por outra função, a raiz y de
 * um número x (pode utilizar alguma função pronta);
 *
 * exemplo 9,2,v = raiz quadrada de 9
 * exemplo 8,3,v = raiz cúbica de 8
 *
 * Ainda com relação a função calc, adicione o caractere #, e imagine que os números
 * digitados são os lados de um retângulo. Calcule o comprimento de sua diagonal;
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
    case '^':
      return pow(i, j);
    case 'v':
      return pow(i, 1.0 / j);
    case '#':
      return sqrt(pow(i, 2) + pow(j, 2));
    default:
      printf("\n\noperação não suportada, use um operador entre +, -, /, *, ^, v e #");
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

  printf("insira a operação (+, -, /, *, ^, v, #): ");
  scanf(" %c", &op);

  printf("resultado: %f", calc(i, j, op));

  return 0;
}
