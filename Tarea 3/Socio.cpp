#include "Socio.h"

Socio::Socio(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
	puntaje = 0;
}

Socio::~Socio()
{

}

int Socio::getCi()
{
	return ci;
}

string Socio::getNombre()
{
	return nombre;
}

void Socio::aumentarPuntaje(int num)
{
	puntaje = puntaje + num;
}

void Socio::mostrar()
{
	//cout << "Socio:" << endl;
	cout << "Ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
	cout << "puntaje en las competencias: " << puntaje << endl;
}


