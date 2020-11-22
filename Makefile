#Makefile para PetFera IMD2020
#Autores: Adnré Faria, David Martins, Paulo Rolim

BIN = ./bin
SRC = ./src
INC = ./include

PROG = $(BIN)/programa
CC = g++
CPPFLAGS = -Wall -std=c++11 -I./include

OBJS = $(BIN)/funcionario $(BIN)/tratador $(BIN)veterinario

all : $(OBJS)
		$(CC) $(OBJS) -o $(PROG)

debug: CPPFLAGS += -DDEBUG -g -O0
debug: clean all

$(BIN)/main : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@
$(BIN)/funcionario : $(SRC)/funcionario.cpp $(INC)/funcionario.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $@
$(BIN)/tratador : $(SRC)/tratador.cpp $(INC)/tratador.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/tratador.cpp -o $@
$(BIN)/veterinario : $(SRC)/veterinario.cpp $(INC)/veterinario.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/veterinario.cpp -o $@