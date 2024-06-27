#ifndef PET_H
#define PET_H

typedef enum { GATO, CACHORRO } EspeciePet;

typedef struct {
  int id;
  char nome[50];
  int tutor_id;
  EspeciePet especie;
} Pet;

void cadastrar_pet();
void listar_pets();

#endif // PET_H
