#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pet.h"

typedef enum { GATO, CACHORRO } EspeciePet;

typedef struct {
  int id;
  char nome[50];
  char raca[20];
  char idade[2];
  int tutor_id;
  int especiepet;
} Pet;

void cadastrar_pet() {
  Pet novo_pet;
  FILE *file = fopen("data/pets.dat", "ab");
  if (file == NULL) {
    perror("Erro! Arquivo não pôde ser aberto.");
    exit(1);
  }

  printf("Nome do pet: \n");
  scanf("%s", novo_pet.nome);
  printf("ID do Tutor: \n");
  scanf("%d", &novo_pet.tutor_id);
  printf("Espécie de pet (0 para Gato, 1 para Cachorro): ");
  int especie;
  scanf("%d", &especie);
  if (especie == 0) {
    novo_pet.especiepet = GATO;
  } else if (especie == 1) {
    novo_pet.especiepet = CACHORRO;
  } else {
    printf("Espécie não encontrada.\n");
    fclose(file);
    return;
  }
  fwrite(&novo_pet, sizeof(Pet), 1, file);
  fclose(file);
  printf("Parabéns! O seu pet foi cadastrado com sucesso.");
}

void listar_pets() {
  Pet pet;
  FILE *file = fopen("data/pets.dat", "rb");
  if (file == NULL) {
    perror("Erro! Arquivo não pôde ser aberto.");
    exit(1);
  }
  while (fread(&pet, sizeof(Pet), 1, file)) {
    printf("ID: %d, Nome: %s, Tutor ID: %d, Espécie: %s\n", pet.id, pet.nome,
    pet.tutor_id, pet.especiepet == GATO ? "Gato" : "Cachorro");
  }
  fclose(file);
}