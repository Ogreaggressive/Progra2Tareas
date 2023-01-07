#include "Grande.h"

Grande::Grande(string nombre)
{
	this->nombre = nombre;
	indPequenio1 = 0;
	indPequenio2 = 0;
}
Grande::~Grande()
{

}

void Grande::agregarPequenio1(int ejemplo1, string nombre1)
{
	if (indPequenio1 < CANTIDAD1)
	{
		listaPequenio1[indPequenio1] = new Pequenio1(ejemplo1, nombre1);
		indPequenio1++;
	}
}

void Grande::agregarPequenio2(int ejemplo2, int ejemploCI, string nombre2)
{
	if (indPequenio2 < CANTIDAD2)
	{
		listaPequenio2[indPequenio2] = new Pequenio2(ejemplo2, ejemploCI, nombre2);
		indPequenio2++;
	}
}

void Grande::mostrar()
{
	cout << nombre << endl;
	for (int i = 0; i < indPequenio1; i++)
	{
		listaPequenio1[i]->mostrar();
	}
	for (int i = 0; i < indPequenio2; i++)
	{
		listaPequenio2[i]->mostrar();
	}
}


