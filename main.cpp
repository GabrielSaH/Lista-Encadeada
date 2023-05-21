#include "lista.hpp"

#include <iostream>


int main() {


	//		1. void Lista()
	//construtor da classe, deve inicializar uma lista vazia;
	
	lista teste;

	if (!teste.vazia()) exit(2);   // saira com codigo 2 se a lista nao estiver vazia

	
	//		2. void insere(int v)
	//	insere um novo nodulo no inicio da lista. Este novo nodulo deve armazenar o valor recebido na variavel v;
	
	//	sera testado ao decorrer do progama
	for (int i(0); i < 100; i++) {
		
		teste.insere(i);
	}



	//		3.	void imprime()
	//	imprime os valores armazenados na lista
	
	//	como foi pedido para imprimir o valor na tela e no proximo pede para sobreescrever o << ficaria a mesma coisa
	//	entao, troquei para que possa escolher qual modulo voce gostaria de obter, algo como teste[10]
	std::cout << "Este e o valor na posicao 15: " << teste.imprime(15) << std::endl << std::endl;


	//		4. toString() ou sobrecargar do operador <<
	//	por ser um texto muito grande poluiria o terminal entao sera testado por ultimo


	//		5. boolean vazia()
	//	informa se a lista esta ou nao vazia
	std::cout << "A lista esta vazia? " << teste.vazia() << std::endl << std::endl;


	//		6. NoLista busca(int v)
	//	retorna o endereco do primeiro nodulo da lista que armazena o valor v.Se nenhum nodulo com esse valor for encontrado,
	//	o metodo deve retornar null;

	std::cout << "procurando o nodulo com o valor 23: " << teste.busca(23)->getInfo() << std::endl << std::endl;

	// caso nao ache tem que ser nulo:
	if (teste.busca(101) != nullptr) exit(2);

	//		7. int comprimento()
	//	calcula e retorna o numero atual de elementos da lista;

	std::cout << "A lista possui " << teste.comprimento() << " elementos" << std::endl << std::endl;

	//		8. NoLista ultimo()
	//	retorna o endereco do ultimo nodulo da lista. Se a lista estiver vazia, o metodo deve retornar null.

	std::cout << "O ultimo da lista contem o numero: " << teste.ultimo()->getInfo() << std::endl << std::endl;

	lista vazia;
	if (vazia.ultimo() != nullptr) exit(2);

	//		4. toString() ou sobrecargar do operador <<
	//	semelhante ao metodo imprime, porem nos moldes dos metodos toString da linguagem Java; Se voce usar outra linguagem de 
	//	programacao, implemente o metodo equivalente, por exemplo, metodo __str__ no Python
	//	ou sobrecarga do operador << no	C++.
	
	std::cout << teste << std::endl;
	return 0;
}