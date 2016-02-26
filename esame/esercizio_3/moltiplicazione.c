#include <stdio.h>
#include <stdlib.h>
#include "somma.h"
#include "moltiplicazione.h"

int moltiplicazione(int a, int b){
  int result = 0;

  int i = 0;
  for(; i < b; ++i){
    result = somma(result, a);
  }

  return result;
}