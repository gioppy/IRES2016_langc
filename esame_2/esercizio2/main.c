#include <stdio.h>
#include <stdlib.h>
#include "zip.h"
#include "sum.h"

int main(){
  int a[100];
  int b[100];
  int size_a = sizeof(a) / sizeof(int);
  int size_b = sizeof(b) / sizeof(int);
  int size_zip = size_a + size_b;

  int i = 0, index_a = 0, index_b = 0;
  for(; i <= size_zip; ++i){
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

  int zip_length = sizeof(zip_array) / sizeof(int);
  int result = sum(zip_array, zip_length);

  printf("%d\n", result);

  return EXIT_SUCCESS;
}