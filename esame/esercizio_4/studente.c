#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studente.h"

void setCognome(Studente* this, char* cognome){
  int length = strlen(cognome);
  this->cognome = malloc(length + 1);
  strcpy(this->cognome, cognome);
}

void getCognome(Studente* this, char* cognome){
  strcpy(cognome, this->cognome);
}

void setVoto(Studente* this, int voto){
  this->voto = voto;
}

void getVoto(Studente* this, int* voto){
  *voto = this->voto;
}