#include "Mensaje.h"


Mensaje::Mensaje(long fono)
{

	this->fono = fono;
}

Mensaje::~Mensaje()
{

}

long Mensaje::getFono()
{
	return fono;
}

void Mensaje::mostrar()
{
	cout << "autor:" << fono << endl;
}

void Mensaje::mostrar(Mensaje* mensaje)
{
	mensaje->mostrar();
}

bool Mensaje::operator==(Mensaje* mensaje)
{
	if (fono == mensaje->fono)
	{
		return true;
	}
	return false;
}



