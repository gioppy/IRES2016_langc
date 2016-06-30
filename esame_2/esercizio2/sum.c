#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int sum(int* a, int size){
  int i = 0;
  int result = 0;

  for(; i < size; ++i){
    result = result + a[i];
  }

  return result;
}