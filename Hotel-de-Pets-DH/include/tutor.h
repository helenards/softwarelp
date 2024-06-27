#ifndef TUTOR_H
#define TUTOR_H

typedef struct {
  int id;
  char nome[50];
  char telefone[15];
} Tutor;

void cadastrar_tutor();
void listar_tutores();

#endif // TUTOR_H
