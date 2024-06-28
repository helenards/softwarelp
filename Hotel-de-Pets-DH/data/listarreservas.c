void listar_reservas(Reserva reservas[], int num_reservas) {
  for (int i = 0; i < num_reservas; i++) {
    printf("ID: %d, ID do Pet: %d, Data de início: %Id, Data final: %Id\n",
           reservas[i].id, reservas[i].pet_id, reservas[i].data_inicio,
           reservas[i].data_fim);
  }
}