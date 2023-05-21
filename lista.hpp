#pragma once

#include "noLista.hpp"

#include <iostream>

class lista {
private:
	noLista* prime;


public:
	// Builders
	lista();
	
	void insere(int novo);

	int imprime(int posicao);
	
	bool vazia();

	int comprimento();

	noLista* busca(int alvo);
	
	noLista* ultimo();

	friend std::ostream& operator<<(std::ostream& os, const lista list);
};

