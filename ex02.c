// Faça um programa que receba o custo de um espetáculo teatral e o preço do
// convite desse espetáculo. Esse programa deve calcular e mostrar a
// quantidade de convites que devem ser vendidos para que pelo menos o
// custo do espetáculo seja alcançado.

#include <stdio.h>

main() {

  float custo, ingresso, quantidade;

  printf("Informe o custo do espetáculo: R$");
  scanf("%f", &custo);
  printf("Informe o valor do ingresso: R$");
  scanf("%f", &ingresso);

  quantidade = custo / ingresso;
  printf("A quantidade de ingressos vendidos para cobrir os custos do "
         "espetáculo deve ser de: %f unidades.",
         quantidade);
}