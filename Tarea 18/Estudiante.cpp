#include "Estudiante.h"

Estudiante::Estudiante(int ci, string nombre, int fono)
{
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
}

Estudiante::Estudiante(int ci)
{
	this->ci = ci;
}


Estudiante::~Estudiante()
{

}

int Estudiante::getCi()
{
	return ci;
}

string Estudiante::getNombre()
{
	return nombre;
}

void Estudiante::mostrar()
{
	cout << "Estudiante:" << endl;
	cout << "ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
	cout << "fono: " << fono << endl;
}


void Estudiante::mostrar(Estudiante* estudiante)
{
	estudiante->mostrar();
}

bool Estudiante::operator==(Estudiante* estudiante)
{
	if (ci == estudiante->ci)
	{
		return true;
	}
	return false;
}

bool Estudiante::compCiAsc(Estudiante* p1, Estudiante* p2)
{
	return p1->ci > p2->ci;
}

bool Estudiante::compNomAsc(Estudiante* p1, Estudiante* p2)
{
	return p1->nombre > p2->nombre;
}

