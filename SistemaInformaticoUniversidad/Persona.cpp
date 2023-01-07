#include "Persona.h"

Persona::Persona(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Persona::~Persona()
{

}

void Persona::mostrar()
{
	cout << "-----Persona-------" << endl;
	cout << "ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
}

