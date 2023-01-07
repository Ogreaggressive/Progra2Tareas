#include "Funcion.h"


Funcion::Funcion(int codigo, string nombre, int filas, int columnas) : clientes(filas,columnas)
{
	this->codigo = codigo;
	this->nombre = nombre;
}

Funcion::Funcion(int codigo, int filas, int columnas) : clientes(filas, columnas)
{
	this->codigo = codigo;
}


Funcion::~Funcion()
{

}


void Funcion::mostrar()
{
	//cout << "Funcion:" << endl;
	cout << "Ci: " << codigo << endl;
	cout << "nombre: " << nombre << endl;
}

string Funcion::toString()
{
	stringstream ss;
	ss << "{id"<<codigo<<",pelicula:" << nombre;
	ss << ",sala:[";
	for (int i = 0; i < clientes.getTamFilas(); i++)
	{
		for (int j = 0; j < clientes.getTamCols(); j++)
		{
			ss << "{fila:" << i << ",columna:" << j;
			clientes[i][j]=NULL;
			ss << ",persona:{vacio}}";
			if ((i != clientes.getTamFilas()-1)||(j != clientes.getTamCols() - 1))
			{
				ss << ",";
			}
			//ss << ",";
		}
		//if (i != clientes.getTamFilas())
		//{
			
		//}
	}
	ss << "]}";
	return ss.str();
}

Matriz<Cliente*>& Funcion::getAsientos()
{
	return clientes;
}

bool Funcion::operator==(Funcion* funcion)
{
	if (codigo == funcion->codigo)
	{
		return true;
	}
	return false;
}