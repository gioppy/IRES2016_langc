#include <stdio.h>
#include <stdlib.h>

int sum(int* a, int size){
  int i = 0;
  int result = 0;

  for(; i < size; ++i){
    if(a[i] < 0){
      break;
    }
    result = result + a[i];
  }

  return result;
}

int main(){
  int array[] = {1,4,5,2,6,98,546,123,71,-3,44,5};
  int length = sizeof(array) / sizeof(int);

  int result = sum(array, length);

  printf("%d\n", result);

  return EXIT_SUCCESS;
}