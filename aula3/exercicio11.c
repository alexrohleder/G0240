#include "stdio.h"
#include "stdlib.h"

/**
 * Existe um algoritmo interessante para se obter a raiz quadrada de um número
 * quando ela é exata. Para isso, basta subtrair números ímpares consecutivos
 * do número do qual se deseja retirar a raiz quadrada. O número de vezes será
 * a raiz do número.
 *
 * Por exemplo: 25 = 25 −1 − 3 − 5 − 7 − 9 = 0
 *
 * No exemplo, subtraíram‐se de 25 os 5 primeiros números ímpares consecutivos
 * até que se chegasse 0. Assim, a raiz quadrada de 25 é 5. Escreva uma função que
 * receba um inteiro n e retorne a raiz quadrada de n. Por exemplo, se a função
 * receber 49, ele retornará 7. O calculo da raiz quadrada deverá ser feito usando
 * o algoritmo acima, sem usar qualquer função pré‐existente de alguma biblioteca C.
 */

int main() {
  int n, i = 1, raiz = 1;

  printf("insira um número: ");
  scanf("%d", &n);

  while (1) {
    n -= i;

    if (n == 0) {
      printf("raiz: %d\n", raiz);
      return 0;
    }

    if (n < 0) {
      printf("o número não possui raiz quadrada\n");
      return 1;
    }

    raiz++;
    i += 2;
  }

  return 0;
}
