#include "Obra.h"

Obra::Obra(string titulo, string autor, string tipo, int precio)
{
	this->titulo = titulo;
	this->autor = autor;
	this->tipo = tipo;
	this->precio = precio;
}

Obra::~Obra()
{

}

string Obra::getTitulo()
{
	return titulo;
}

string Obra::getAutor()
{
	return autor;
}

string Obra::getTipo()
{
	return tipo;
}

void Obra::mostrar()
{
	//cout << "Obra:" << endl;
	cout << "titulo: " << titulo << endl;
	cout << "autor: " << autor << endl;
	cout << "tipo: " << tipo << endl;
	cout << "precio: " << precio << endl;
}


void Obra::mostrar(Obra* obra)
{
	obra->mostrar();
}

bool Obra::operator==(Obra* obra)
{
	if (titulo == obra->titulo)
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

