#include "stdio.h"
#include "stdlib.h"

/**
 * Escreva uma função em C com o seguinte protótipo long int somatório(int i, int n)
 * A função deve retornar o somatório de i a n. Por exemplo, a chamada
 * somatório(3,10) retorna 52 (3+4+5+6+7+8+9+10)
 */

int somatorio(int i, int n);

int main() {
  printf("somatorio(3,10) = %d\n", somatorio(3, 10));

  return 0;
}

int somatorio(int i, int n) {
  int resultado = 0;

  for (int j = i; j <= n; j++) {
    resultado += j;
  }

  return resultado;
}
