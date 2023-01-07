#include "Archivo.h"

Archivo::Archivo(long fono, string nombre, string ext) : Mensaje(fono)
{
	this->nombre = nombre;
	this->ext = ext;
}

Archivo::~Archivo()
{

}

void Archivo::mostrar()
{
	Mensaje::mostrar();
	cout << "tipo:archivo" << endl;
	cout << "nombre:" << nombre << endl;
	cout << "ext:" << ext << endl;
}


