#include <stdio.h>
#include <stdlib.h>
#include "somma.h"
#include "moltiplicazione.h"

int main(){
  int molt1 = moltiplicazione(3, 5);
  printf("%d\n", molt1);

  int molt2 = moltiplicazione(0, 15);
  printf("%d\n", molt2);

  return EXIT_SUCCESS;
}