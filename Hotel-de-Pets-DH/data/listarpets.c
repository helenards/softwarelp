void listar_pets(Pet pets[], int num_pets) {
  for (int i = 0; i < num_pets; i++) {
    printf("ID: %d, Nome: %s, ID do Tutor: %d, Espécie: %s\n", pets[i].id,
           pets[i].nome, pets[i].tutor_id,
           pets[i].especiepet == GATO ? "Gato" : "Cachorro");
  }
}