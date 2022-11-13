// Faça um programa que receba o salário de um funcionário, calcule e mostre o
// novo salário, sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>

main() {

  float salario, aumento = 0.25, novoSalario;

  printf("Informe o valor do seu salário: R$");
  scanf("%f", &salario);

  novoSalario = salario + (salario * aumento);

  printf("O novo salário terá o valor de: R$%f", novoSalario);
}