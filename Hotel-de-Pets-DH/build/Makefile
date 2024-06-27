CC = gcc
CFLAGS = -Wall -Wextra -I../include
LDFLAGS = -lpthread

SRCS
= ../src/main.c ../src/cadastrotutor.c ..src/cadastropet.c ..src/reserva.c ../src/interfacedousuario.c ..src/utilidades.c
OBJS = $(SRCS:.c=.o)

EXEC = Hotel_de_Pets_DH

all: $(EXEC)

$(EXEC): $(OBJS)
$(CC) $(OBJS) -o $@ $(LDFLAGS)

clean:
rm -f $(OBJS) $(EXEC)

.PHONY: all clean
