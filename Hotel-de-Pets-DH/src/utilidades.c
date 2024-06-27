#include <semaphore.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

sem_t *sem;

void iniciar_semaforo() {
  sem = sem_open("/semaforo_hotel_de_pets_DH", O_CREAT, 0644, 1);
  if (sem == SEM_FAILED) {
    perror("Erro! Semáforo não pode ser criado.");
    exit(1);
  }
}

void fechar_semaforo() {
  sem_close(sem);
  sem_unlink("/semaforo_hotel_de_pets_DH");
}