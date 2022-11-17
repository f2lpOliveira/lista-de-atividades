// Mostrar na tela os números pares entre 0 e 10.

#include <stdio.h>

main() {

  int i;
  printf("Números pares entre 0 e 10:\n\n");
  for (i = 0; i <= 10; i++) {

    if (i % 2 == 0 && i != 0) {

      printf("%d\n", i);
    };
  };
}
