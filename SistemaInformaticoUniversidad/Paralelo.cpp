#include "Paralelo.h"

Paralelo::Paralelo(int numero)
{
	this->numero = numero;
	numero = 1;
	ind = 0;
}

Paralelo::~Paralelo()
{
	for (int i = 0; i <= numero; i++)
	{
		delete inscritos[i];
	}
}

void Paralelo::mostrarInscritos()
{
	for (int i = 0; i < numero; i++)
	{
		inscritos[i]->mostrar();
	}
}

void Paralelo::mostrar()
{
	cout << "Paralelo: " << numero << endl;
	cout << "cant inscritos: " << ind << endl;
}