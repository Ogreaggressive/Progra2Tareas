#include "Escultura.h"

Escultura::Escultura(int codigo,string titulo, string autor, int peso) : Obra(codigo, titulo, autor)
{
	this->peso = peso;
}

Escultura::Escultura(int codigo) : Obra(codigo)
{

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

string Escultura::toString()
{
	stringstream ss;
	ss << "{tipo:escultura,";
	ss << "id:" << codigo << ",titulo:" << titulo << ",autor:" << autor;
	ss << ",peso:" << peso << "}";
	return ss.str();
}






