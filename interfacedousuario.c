#include <stdio.h>

void show_main_menu() {
  printf("Hotel de Pets DH\n");
  printf("Cadastro do Tutor\n");
  printf("Cadastro do Pet\n");
  printf("Fazer reserva\n");
  printf("Sair\n");
}
// seções da coluna do menu

int main() {
  int choice;
  do {
    show_main_menu();
    printf("Escolher uma opção: ");
    scanf("%d", &choice); // chama a função selecionada
  } while (choice != 4);

  printf("Obrigada pela preferência! Volte sempre.\n");
  printf("Att. Equipe Hotel de Pets DH");
  return 0;
}