#include "Docente.h"

Docente::Docente()
{
	cout << "construyendo Docente" << endl;
}

Docente::Docente(int ci, string nombre, long fono)
{
	cout << "construyendo Docente" << endl;
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
}

Docente::~Docente()
{
	cout << "destruyendo Docente" << endl;
}

void Docente::mostrar()
{
	cout << "-----Docente-------" << endl;
	cout << "ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
	cout << "telefono: " << fono << endl;
}
