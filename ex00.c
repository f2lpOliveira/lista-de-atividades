// Faça um programa que calcule e mostre a área de um triângulo. Sabe-se
// que: Área = (base * altura)/2.

#include <stdio.h>

main() {

  float area, base, altura;

  printf("Digite o valor da base do triângulo: ");
  scanf("%f", &base);
  printf("Digíte o valor da altura do triângulo: ");
  scanf("%f", &altura);

  area = (base * altura) / 2;

  printf("O valor da área é: %f", area);
}