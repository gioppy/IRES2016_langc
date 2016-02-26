#include <stdio.h>
#include <stdlib.h>

void zip(int* a, int* b, int size, int result[]){
  int i = 0, odd = 0, even = 1;

  for(; i < size; ++i){
    result[i + odd] = a[i];
    result[i + even] = b[i];
    ++odd;
    ++even;
  }
}

int main(){

  int a[100];
  int b[100];
  int size_a = sizeof(a) / sizeof(int);
  int size_b = sizeof(b) / sizeof(int);
  int size_zip = size_a + size_b;

  int i = 0, index_a = 0, index_b = 0;
  for(; i < size_zip; ++i){
    if(i % 2 == 0){
      a[index_a] = i;
      index_a++;
    }else{
      b[index_b] = i;
      index_b++;
    }
  }

  int zip_array[size_zip];
  zip(a, b, size_a, zip_array);

  int k = 0;
  for(; k < size_zip; ++k){
    printf("%d\n", zip_array[k]);
  }

  return EXIT_SUCCESS;
}