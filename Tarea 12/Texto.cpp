#include "Texto.h"

Texto::Texto(long fono, string contenido) : Mensaje(fono)
{
	this->contenido = contenido;
}

Texto::~Texto()
{

}

void Texto::mostrar()
{
	Mensaje::mostrar();
	cout << "tipo:texto" << endl;
	cout << "contenido:" << contenido << endl;
}

