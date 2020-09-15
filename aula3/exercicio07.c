#include "stdio.h"
#include "stdlib.h"

/**
 * Escreva um programa que contenha uma função para calcular o desconto
 * de um produto e outra função para calcular o valor total da venda.
 * A primeira função deve receber como parâmetros o valor do produto
 * e a porcentagem do desconto e retornar o novo preço do produto. A segunda
 * função deve receber como parâmetro a quantidade e calcular o preço total já
 * com o desconto. O programa deve apresentar o preço original do produto, o
 * desconto e o valor total da venda.
 */

float calcula_desconto(float preco, int desconto) {
  return preco * (100 - desconto) / 100;
}

float calcula_total(int quantidade, float preco, int desconto) {
  return quantidade * calcula_desconto(preco, desconto);
}

int main() {
  int quantidade, desconto;
  float preco;

  printf("insira a quantidade: ");
  scanf("%d", &quantidade);

  printf("insira o preço: ");
  scanf("%f", &preco);

  printf("insira o desconto (porcentagem): ");
  scanf("%d", &desconto);

  printf("\n");
  printf("preço original: %.2f\n", preco);
  printf("desconto: %d\n", desconto);
  printf("total: %.2f\n", calcula_total(quantidade, preco, desconto));

  return 0;
}
