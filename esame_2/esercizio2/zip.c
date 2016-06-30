#include <stdio.h>
#include <stdlib.h>
#include "zip.h"

void zip(int* a, int* b, int size, int result[]){
  int i = 0, odd = 0, even = 1;

  for(; i < size; ++i){
    result[i + odd] = a[i];
    result[i + even] = b[i];
    ++odd;
    ++even;
  }
}