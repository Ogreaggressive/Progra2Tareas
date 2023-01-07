#include "Mascota.h"

Mascota::Mascota(string nombre, int edad)
{
	this->edad = edad;
	this->nombre = nombre;
}

Mascota::Mascota(string nombre)
{
	this->nombre = nombre;
}


Mascota::~Mascota()
{

}

int Mascota::getEdad()
{
	return edad;
}

string Mascota::getNombre()
{
	return nombre;
}

void Mascota::mostrar()
{
	//cout << "Mascota:" << endl;
	cout << "nombre: " << nombre << endl;
}


void Mascota::mostrar(Mascota* mascota)
{
	mascota->mostrar();
}

bool Mascota::operator==(Mascota* mascota)
{
	if (nombre == mascota->nombre)
	{
		return true;
	}
	return false;
}

bool Mascota::compEdadAsc(Mascota* p1, Mascota* p2)
{
	return p1->edad > p2->edad;
}

bool Mascota::compNomAsc(Mascota* p1, Mascota* p2)
{
	return p1->nombre > p2->nombre;
}

string Mascota::toString()
{
	stringstream ss;
	ss << "{nombre:" << nombre << ",edad:" << edad<<"}";
	return ss.str();
}


