#Makefile para PetFera IMD2020
#Autores: André Faria, David Martins, Paulo Rolim

BIN = ./bin
SRC = ./src
INC = ./include

PROG = $(BIN)/programa
CC = g++
CPPFLAGS = -Wall -std=c++11 -I./include

OBJS = $(BIN)/Funcionario $(BIN)/Tratador $(BIN)/Veterinario $(BIN)/Animal $(BIN)/Anfibio $(BIN)/Ave $(BIN)/Mamifero $(BIN)/Reptil $(BIN)/Exotico $(BIN)/Nativo $(BIN)/Loja $(BIN)/utils $(BIN)/main

all : $(OBJS)
		$(CC) $(OBJS) -o $(PROG)

debug: CPPFLAGS += -DDEBUG -g -O0
debug: clean all

$(BIN)/main : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@
$(BIN)/utils : $(SRC)/utils.cpp $(INC)/utils.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/utils.cpp -o $@
$(BIN)/Funcionario : $(SRC)/funcionario/Funcionario.cpp $(INC)/funcionario/Funcionario.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario/Funcionario.cpp -o $@
$(BIN)/Tratador : $(SRC)/funcionario/Tratador.cpp $(INC)/funcionario/Tratador.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario/Tratador.cpp -o $@
$(BIN)/Veterinario : $(SRC)/funcionario/Veterinario.cpp $(INC)/funcionario/Veterinario.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario/Veterinario.cpp -o $@
$(BIN)/Animal : $(SRC)/animal/Animal.cpp $(INC)/animal/Animal.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal/Animal.cpp -o $@
$(BIN)/Anfibio : $(SRC)/animal/Anfibio.cpp $(INC)/animal/Anfibio.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal/Anfibio.cpp -o $@
$(BIN)/Ave : $(SRC)/animal/Ave.cpp $(INC)/animal/Ave.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal/Ave.cpp -o $@
$(BIN)/Mamifero : $(SRC)/animal/Mamifero.cpp $(INC)/animal/Mamifero.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal/Mamifero.cpp -o $@
$(BIN)/Reptil : $(SRC)/animal/Reptil.cpp $(INC)/animal/Reptil.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal/Reptil.cpp -o $@
$(BIN)/Nativo : $(SRC)/animal/Nativo.cpp $(INC)/animal/Nativo.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal/Nativo.cpp -o $@
$(BIN)/Exotico : $(SRC)/animal/Exotico.cpp $(INC)/animal/Exotico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal/Exotico.cpp -o $@
$(BIN)/MamiferoExotico : $(SRC)/animal/MamiferoExotico.cpp $(INC)/animal/MamiferoExotico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal/MamiferoExotico.cpp -o $@
$(BIN)/Loja : $(SRC)/Loja.cpp $(INC)/Loja.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/Loja.cpp -o $@

clean:
	rm -f core $(PROG) $(OBJS)