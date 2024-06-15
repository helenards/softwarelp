#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int id;
  char nome[50];
  char CPF[11];
  char endereco[50];
  char telefone[15];
  char email[50];
  char senha[20];
} Tutor;

typedef enum { GATO, CACHORRO } EspeciePet;

typedef struct {
  int id;
  char nome[50];
  char raca[20];
  char idade[2];
  int tutor_id;
} Pet;

void cadastrar_tutor() {
  Tutor novo_tutor;
  FILE *file = fopen("donos.dat", "ab");
  if (file == NULL) {
    perror("Erro! Arquivo não pôde ser aberto.");
    exit(1);
  }

  printf("Nome do tutor: \n");
  scanf("%s", novo_tutor.nome);
  printf("Telefone do tutor: \n");
  scanf("%s", novo_tutor.telefone);
  fwrite(&novo_tutor, sizeof(Tutor), 1, file);
  fclose(file);
  printf("Seu cadastro foi realizado com sucesso!\n");
}

void cadastrar_pet() {
  Pet novo_pet;
  FILE *file = fopen("pets.dat", "ab");
  if (file == NULL) {
    perror("Erro! Arquivo não pôde ser aberto.");
    exit(1);
  }

  printf("Nome do pet: \n");
  scanf("%s", novo_pet.nome);
  printf("ID do Tutor: \n");
  scanf("%d", &novo_pet.tutor_id);
  fwrite(&novo_pet, sizeof(Pet), 1, file);
  fclose(file);
  printf("Parabéns! O seu pet foi cadastrado com sucesso.");
}