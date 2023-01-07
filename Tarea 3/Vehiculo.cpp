#include "Vehiculo.h"

Vehiculo::Vehiculo(string placa, string modelo, int numAsignado)
{
	this->placa = placa;
	this->modelo = modelo;
	this->numAsignado = numAsignado;
}

Vehiculo::~Vehiculo()
{

}

int Vehiculo::getnumAsignado()
{
	return numAsignado;
}

void Vehiculo::mostrar()
{
	//cout << "-----Vehiculo-------" << endl;
	cout << "placa: " << placa << endl;
	cout << "modelo: " << modelo << endl;
	cout << "numAsignado: " << numAsignado << endl;
}
