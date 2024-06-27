#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  int id;
  int pet_id;
  time_t data_inicio;
  time_t data_fim;
} Reserva;

void carregar_reservas(Reserva reservas[], int *num_reservas) {
  FILE *file = fopen("data/reservas.dat", "r");
  if (file == NULL) {
    perror("Erro! Arquivo não pôde ser aberto.");
    exit(1);
  }
  *num_reservas = 0;
  while (fscanf(file, "%d|%d|%Id|%Id\n", &reservas[*num_reservas].id,
                &reservas[*num_reservas].pet_id,
                &reservas[*num_reservas].data_inicio,
                &reservas[*num_reservas].data_fim) != EOF) {
    (*num_reservas)++;
  }
  fclose(file);
}