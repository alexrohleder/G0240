#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

/**
 * Defina as funções descritas a seguir:
 * a) eh_minuscula(c): informa se o caractere c é uma letra minúscula.
 * b) eh_maiuscula(c): informa se o caractere c é uma letra maiúscula.
 * c) minuscula(c): converte a letra c para minúscula.
 * d) maiuscula(c): converte a letra c para maiúscula.
 */

int eh_minuscula(char c) {
  return islower(c) ? 1 : 0;
}

int eh_maiuscula(char c) {
  return isupper(c) ? 1 : 0;
}

char minuscula(char c) {
  return tolower(c);
}

char maiuscula(char c) {
  return toupper(c);
}

int main() {
  char c;

  printf("insira o character: ");
  scanf(" %c", &c);

  printf("é minuscula: %d\n", eh_minuscula(c));
  printf("é maiuscula: %d\n", eh_maiuscula(c));
  printf("minuscula: %c\n", minuscula(c));
  printf("maiuscula: %c\n", maiuscula(c));

  return 0;
}
