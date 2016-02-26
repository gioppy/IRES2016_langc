#ifndef STUDENTE_H
#define STUDENTE_H

typedef struct {
  char* cognome;
  int voto;
} Studente;

void setCognome(Studente* this, char* cognome);
void getCognome(Studente* this, char* cognome);
void setVoto(Studente* this, int voto);
void getVoto(Studente* this, int* voto);

#endif