#include "Escultura.h"

Escultura::Escultura(string titulo, string autor, string tipo, int precio, int peso) : Obra(titulo, autor, tipo, precio)
{
	this->peso = peso;
}

Escultura::~Escultura()
{

}

void Escultura::mostrar()
{
	cout << "---Escultura---" << endl;
	Obra::mostrar();
	cout << "peso: " << peso << endl;
}






