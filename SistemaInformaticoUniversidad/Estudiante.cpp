#include "Estudiante.h"

Estudiante::Estudiante()
{
	cout << "construyendo Estudiante" << endl;
}

Estudiante::Estudiante(int ci, string nombre, long fono)
{
	cout << "construyendo Estudiante" << endl;
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
}

Estudiante::~Estudiante()
{
	cout << "destruyendo Estudiante" << endl;
}

void Estudiante::mostrar()
{
	cout << "-----Estudiante-------" << endl;
	cout << "ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
	cout << "telefono: " << fono << endl;
}
