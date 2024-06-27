#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int id;
  char nome[50];
  char telefone[15];
} Tutor;

void carregar_tutores(Tutor tutores[], int *num_tutores) {
  FILE *file = fopen("data/tutores.dat", "r");
  if(file == NULL) {
    perror("Erro! Arquivo não pôde ser aberto.");
    exit(1);
  }
  *num_tutores = 0;
  while(fscanf(file, "%d|%[^|]|%s\n", &tutores[*num_tutores].id, tutores[*num_tutores].nome,
  donos[*num_tutores].telefone) !=EOF) {
    (*num_tutores)++;
  }
  fclose(file);
}