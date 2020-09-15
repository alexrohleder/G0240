#include "stdio.h"
#include "stdlib.h"

/**
 * A aceleração é a taxa de variação da velocidade em relação ao tempo, isto é,
 * a razão entre a variação da velocidade e o intervalo de tempo. Matematicamente,
 * Onde é a variação da velocidade ou a velocidade final menos a velocidade inicial.
 * Escreva uma função em C que receba como parâmetros a velocidade inicial, a
 * velocidade final e o intervalo de tempo correspondente e retorne a aceleração.
 * Mostre, também, uma função main() que chame essa função.
 */

float calc_aceleracao(
  float velocidade_inicial,
  float velocidade_final,
  float intervalo
) {
  return ((velocidade_final - velocidade_inicial) / intervalo);
}

int main() {
  float velocidade_inicial, velocidade_final, intervalo;

  printf("insira velocidade inicial (m/s): ");
  scanf("%f", &velocidade_inicial);

  printf("insira velocidade final (m/s): ");
  scanf("%f", &velocidade_final);

  printf("insira intervalo de tempo (s): ");
  scanf("%f", &intervalo);

  if (intervalo <= 0) {
    printf("intervalo inválido");
    return 1;
  }

  printf(
    "aceleração: %.2f\n",
    calc_aceleracao(velocidade_inicial, velocidade_final, intervalo)
  );

  return 0;
}
