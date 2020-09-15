#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

/**
 * O número 3025 possui a seguinte característica:
 *
 * a) 30 + 25 = 55.
 * b) 55 * 55 = 3025.
 *
 * Desenvolva um algoritmo que verifica, através de uma função, e imprima
 * todos os números de quatro algarismos (de 1000 até 9999) que apresentam
 * tal característica.
 */

bool has_characteristics(int i) {
  int part1 = i / 100, part2 = i % 100, sum = part1 + part2;

  return sum * sum == i;
}

int main() {
  for (int i = 1000; i < 10000; i++) {
    if (has_characteristics(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}
