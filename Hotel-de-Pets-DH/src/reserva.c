#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "reserva.h"

typedef struct {
  int id;
  int pet_id;
  int data_inicio1;
  int data_fim1;
  time_t data_inicio;
  time_t data_fim;
} Reserva;

void fazer_reserva() {
  Reserva nova_reserva;
  FILE *file = fopen("data/reservas.dat", "ab");
  if (file == NULL) {
    perror("Erro! Arquivo não pôde ser aberto.");
    exit(1);
  }
  printf("ID do pet: ");
  scanf("%d", &nova_reserva.pet_id);
  printf("Data de início (epoch): ");
  scanf("%1d", &nova_reserva.data_inicio1);
  printf("Data final (epoch): ");
  scanf("%1d", &nova_reserva.data_fim1);
  fwrite(&nova_reserva, sizeof(Reserva), 1, file);
  fclose(file);
  printf("A reserva foi realizada com sucesso.\n");
}

void listar_reservas() {
  Reserva reserva;
  FILE *file = fopen("data/reservas.dat", "rb");
  if (file == NULL) {
    perror("Erro! Arquivo não pôde ser aberto.");
    exit(1);
  } 
  while (fread(&reserva, sizeof(Reserva), 1, file)) {
    printf("ID: %d, Pet ID: %d, Data de Início: %1d, Data final: %1d\n", reserva.id, reserva.pet_id,
    reserva.data_inicio1, reserva.data_fim1);
  }
  fclose(file);
}