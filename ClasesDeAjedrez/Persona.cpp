#include "Persona.h"

Persona::Persona(int ci, string nombre, string nivel)
{
	this->ci = ci;
	this->nombre = nombre;
	this->nivel = nivel;
}

Persona::~Persona()
{

}

int Persona::getCi()
{
	return ci;
}

string Persona::getNombre()
{
	return nombre;
}

string Persona::getNivel()
{
	return nivel;
}

void Persona::mostrar()
{
	//cout << "Persona:" << endl;
	cout << "Ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
	cout << "nivel de juego: " << nivel << endl;
}



