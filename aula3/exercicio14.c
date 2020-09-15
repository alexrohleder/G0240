#include "stdio.h"
#include "stdlib.h"

/**
 * Escreva uma função em C com o seguinte protótipo
 * long int multiplicatório(int i, int n)
 * A função deve retornar o multiplicatório de i a n. Por exemplo, a chamada
 * multiplicatório(3,10) retorna 1814400 (3×4×5×6×7×8×9×10).
 */

int multiplicatorio(int i, int n);

int main() {
  printf("multiplicatorio(3,10) = %d\n", multiplicatorio(3, 10));

  return 0;
}

int multiplicatorio(int i, int n) {
  int resultado = 1;

  for (int j = i; j <= n; j++) {
    resultado *= j;
  }

  return resultado;
}
