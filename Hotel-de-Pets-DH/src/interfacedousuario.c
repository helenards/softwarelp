#include <stdio.h>
#include "interfacedousuario.h"
#include "tutor.h"
#include "pet.h"
#include "reserva.h"

void show_main_menu() {
  printf("Bem-vindo ao Hotel de Pets DH!\n");
  printf("Cadastrar Tutor\n");
  printf("Cadastrar Pet\n");
  printf("Fazer uma reserva\n");
  printf("Listar Donos\n"); // para acesso exclusivo dos funcionários
  printf("Listar Pets\n"); // para acesso exclusivo dos funcionários
  printf("Listar Reservas\n"); // para acesso exclusivo dos funcionários
  printf("Sair\n");
}

void handle_choice(int choice) {
  switch (choice) {
    case 1:
      cadastrar_tutor();
      break;

    case 2:
      cadastrar_pet();
      break;

    case 3:
      fazer_reserva();
      break;

    case 4:
      listar_tutores();
      break;

    case 5:
      listar_pets();
      break;

    case 6:
      listar_reservas();
      break;

    case 7:
      printf("Saindo da página inicial...\n");
      break;

    default:
      printf("Opção não permitida!\n");
      break; 
  }
}