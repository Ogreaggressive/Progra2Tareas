#include "Obra.h"

Obra::Obra(int codigo, string titulo, string autor)
{
	this->codigo = codigo;
	this->titulo = titulo;
	this->autor = autor;
}

Obra::Obra(int codigo)
{
	this->codigo = codigo;
}

Obra::~Obra()
{

}

int Obra::getCodigo()
{
	return codigo;
}

string Obra::getAutor()
{
	return autor;
}

void Obra::mostrar()
{
	//cout << "Obra:" << endl;
	cout << "id:" << codigo << endl;
	cout << "titulo:" << titulo << endl;
	cout << "autor:" << autor << endl;
	
}


void Obra::mostrar(Obra* obra)
{
	obra->mostrar();
}

bool Obra::operator==(Obra* obra)
{
	if (codigo == obra->codigo)
	{
		return true;
	}
	return false;
}

bool Obra::compTituloAsc(Obra* p1, Obra* p2)
{
	return p1->titulo > p2->titulo;
}

bool Obra::compAutorAsc(Obra* p1, Obra* p2)
{
	return p1->autor > p2->autor;
}


