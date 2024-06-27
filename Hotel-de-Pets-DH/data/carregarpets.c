#include <stdio.h>
#include <stdlib.h>

typedef enum { GATO, CACHORRO } EspeciePet;

typedef struct {
  int id;
  char nome[50];
  int tutor_id;
  EspeciePet especiepet;
} Pet;

void carregar_pets(Pet pets[], int *num_pets) {
  FILE *file = fopen("data/pets.dat", "r");
  if (file == NULL) {
    perror("Erro! Arquivo não pôde ser aberto.");
    exit(1);
  }
  *num_pets = 0;
  int especiepet;
  while (fscanf(file, "%d|%[^|]|%d|%d\n", &pets[*num_pets].id,
                pets[*num_pets].nome, &pets[*num_pets].tutor_id,
                &especiepet) != EOF) {
    pets[*num_pets].especiepet = (EspeciePet)especiepet;
    (*num_pets)++;
  }
  fclose(file);
}
