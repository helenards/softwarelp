#ifndef RESERVA_H
#define RESERVA_H

#include <time.h>

typedef struct {
  int id;
  int pet_id;
  time_t data_inicio;
  time_t data_fim;
} Reserva;

void fazer_reserva();
void listar_reservas();

#endif // RESERVA_H