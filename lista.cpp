#include "lista.hpp"


// Builders

lista::lista() :
	prime(nullptr)

{

}


void lista::insere(int novo) {


	if (prime == nullptr) {
		prime = new noLista(novo);

	}

	else {
		noLista* last = prime;

		while (last->getProx() != nullptr) {
			last = last->getProx();
		};
		
		
		last->setProx(new noLista(novo));
		last = last->getProx();
	}

};

int lista::imprime(int posicao) {
	
	noLista* ponteiro = prime;
	
	for (int i(0); i < posicao; i++) {

		ponteiro = ponteiro->getProx();
	};

	return ponteiro->getInfo();

};

bool lista::vazia() {
	if (prime == nullptr) return true;

	return false;
}

int lista::comprimento() {
	if (prime == nullptr) return 0;


	int contagem = 1;
	noLista* ponteiro = prime;

	while (ponteiro->prox != nullptr) {
		ponteiro = ponteiro->getProx();
		contagem++;
	}

	return contagem;
}

noLista *lista::busca(int alvo) {
	
	noLista* ponteiro = prime;
	int posicao = 0;

	while (ponteiro != nullptr) {
		if (ponteiro->getInfo() == alvo) {
			return ponteiro;
		};

		ponteiro = ponteiro->getProx();
		posicao++;

	};

	return nullptr;

}

noLista* lista::ultimo() {
	if (prime == nullptr) return nullptr;

	noLista* last = prime;

	while (last->getProx() != nullptr) {
		last = last->getProx();
	};

	return last;
};

std::ostream& operator<<(std::ostream& os, const lista list) {
	
	noLista* ponteiro = list.prime;

	os << "[";

	if (ponteiro != nullptr) {
		os << ponteiro->getInfo();
		ponteiro = ponteiro->getProx();
	}

	while (ponteiro != nullptr) {
		os << ", " << ponteiro->getInfo();
		
		ponteiro = ponteiro->getProx();
	};

	os << "]";

	return os;

}
