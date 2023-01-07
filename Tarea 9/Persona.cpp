#include "Persona.h"

Persona::Persona(int ci)
{
	this->ci = ci;
}

Persona::Persona(int ci, string nombre, long fono)
{
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
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

void Persona::mostrar()
{
	cout << "Persona:" << endl;
	cout << "Ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
	cout << "fono: " << fono << endl;
}

void Persona::mostrar(Persona* Persona)
{
	Persona->mostrar();
}


bool Persona::operator==(Persona* Persona)
{
	return ci == Persona->ci;
}

bool Persona::cmpCiAsc(Persona* c1, Persona* c2)
{
	return c1->ci > c2->ci;
}

string Persona::toString()
{
	stringstream ss;
	ss << "{ci:" << ci << ",nombre:" << nombre << ",fono:" << fono <<"}";
	return ss.str();
}

