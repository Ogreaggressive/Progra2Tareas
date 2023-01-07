#include "Tenista.h"

Tenista::Tenista(string codReg, int ci,string nombre, int telefono) : Participante(codReg)
{
	this->ci = ci;
	this->nombre = nombre;
	this->telefono = telefono;
}

Tenista::~Tenista()
{

}

void Tenista::mostrar()
{
	cout << "---Tenista---" << endl;
	Participante::mostrar();
	cout << "ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
	cout << "telefono: " << telefono << endl;
}

