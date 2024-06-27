#include "tutor.h"
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

void listar_tutores() {
  Tutor tutor;
  FILE *file = fopen("data/tutores.dat", "rb");
  if (file == NULL) {
    perror("Erro! Arquivo não pôde ser aberto.");
    exit(1);
  }
  while (fread(&tutor, sizeof(Dono), 1, file)) {
    printf("ID: %d, Nome: %s, Telefone: %s\n", tutor.id, tutor.nome,
           tutor.telefone);
  }
  fclose(file);
}
