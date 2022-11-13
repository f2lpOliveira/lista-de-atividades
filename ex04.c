// Faça um programa que leia o peso de uma pessoa, a altura, e calcule o
// índice de massa corpórea(IMC). Mostre o resultado na tela. A Fórmula para
// calcular o IMC = peso / altura2.

#include <stdio.h>

main() {

  float peso, altura, imc;

  printf("Informe o seu peso: ");
  scanf("%f", &peso);
  printf("Informe a sua altura: ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("O valor do seu IMC é: %f", imc);
}