#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "software.h"

int main(){

  int size = 3;

  Software* software = malloc(size * sizeof(Software));
  Software_setName(software, "Software 1");

  return EXIT_SUCCESS;
}