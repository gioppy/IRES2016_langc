#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studente.h"

int main(){
  Studente studenti[100000];
  int size = sizeof(studenti) / sizeof(Studente);
  int i = 0;
  //Cognome_ + numero a 7 cifre + carattere di fine riga
  int cognome_length = 16;
  int voti_sum = 0;

  for(; i < size; ++i){
    char* cognome = malloc(cognome_length);
    int add_voto = (i + 1) % 10;
    sprintf(cognome, "Cognome_%d", i + 1);

    Studente studente;
    setCognome(&studente, cognome);
    setVoto(&studente, add_voto);
    studenti[i] = studente;

    int voto;
    getVoto(&studenti[i], &voto);

    voti_sum = voti_sum + voto;
  }

  printf("%d\n", voti_sum);

  return EXIT_SUCCESS;
}