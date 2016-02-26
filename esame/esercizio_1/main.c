#include <stdio.h>
#include <stdlib.h>

double avg(int* a, int size){
  int i = 0;
  double sum = 0;
  double result;

  for(; i < size; ++i){
    sum = sum + a[i];
  }

  result = sum / size;
  return result;
}

int main(){

  int a[100];
  int size = sizeof(a) / sizeof(int);

  int i = 0;
  for(; i < size; ++i){
    a[i] = 3 * (i + 1);
  }

  double average = avg(a, size);

  printf("%f\n", average);

  return EXIT_SUCCESS;
}