// Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande,
// cada uma sendo vendida respectivamente por 10, 12 e 15 reais. Faça um
// programa em que o usuário forneça a quantidade de camisetas pequenas,
// médias e grandes referentes a uma venda, e a máquina informe quanto será
// o valor arrecadado.

#include <stdio.h>

main() {

  int tamPequeno = 10, quantidadeP, tamMedio = 12, quantidadeM, tamGrande = 15,
      quantidadeG;
  float valor;

  printf("Informe a quantidade de camisetas do tamanho pequeno vendidas: ");
  scanf("%d", &quantidadeP);
  printf("Informe a quantidade de camisetas do tamanho médio vendidas: ");
  scanf("%d", &quantidadeM);
  printf("Informe a quantidade de camisetas do tamanho grande vendidas: ");
  scanf("%d", &quantidadeG);

  valor = (tamPequeno * quantidadeP) + (tamMedio * quantidadeM) +
          (tamGrande * quantidadeG);

  printf("O valor total é de : R$%f", valor);
}