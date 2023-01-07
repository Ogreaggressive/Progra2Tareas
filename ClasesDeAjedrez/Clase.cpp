#include "Clase.h"

Clase::Clase(string pasar, int tiempo, Persona* estudiante)
{
	this->pasar = pasar;
	this->tiempo = tiempo;
	this->estudiante = estudiante;
}

Clase::~Clase()
{

}

void Clase::mostrar(int clase)
{
	cout << "en la clase " << clase << endl;
	if (pasar == "si")
	{
		cout << "el/la estudiante " << estudiante->getNombre() << "paso: " << tiempo << " horas" << endl;
	}
	else
	{
		cout << "el/la estudiante " << estudiante->getNombre() << "no paso clases" << endl;
	}
}

string Clase::pasoClases()
{
	return pasar;
}

int Clase::tiempoPasado()
{
	return tiempo;
}