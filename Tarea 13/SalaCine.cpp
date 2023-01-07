#include "SalaCine.h"

SalaCine::SalaCine(string nombre, int filas, int columnas)
{
	this->nombre = nombre;
	this->filas = filas;
	this->columnas = columnas;
	//ejm = new ejm * [];
}

SalaCine::~SalaCine()
{

}

void SalaCine::mostrar()
{
	//cout << "SalaCine:" << endl;
	cout << "nombre: " << nombre << endl;
}

void SalaCine::crearFuncion(int codigo, string nombre)
{
	funciones.registrar(new Funcion(codigo,nombre,filas,columnas));
}

string SalaCine::toString()
{
	stringstream ss;
	Nodo<Funcion>* aux = funciones.getPrimer();
	//Nodo<Funcion>* nextAux;
	ss << "{nombre:" << nombre<<",funciones:[";
	for (int i = 0; i < funciones.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != funciones.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

Funcion* SalaCine::getFuncion(int codigo)
{
	Funcion* funcion = new Funcion(codigo,filas,columnas);
	return funciones.buscar(funcion);
}
