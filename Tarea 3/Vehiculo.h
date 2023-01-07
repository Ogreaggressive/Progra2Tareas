#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vehiculo
{
private:
	string placa;
	string modelo;
	int numAsignado;
public:
	Vehiculo(string placa, string modelo, int numAsignado);
	~Vehiculo();
	int getnumAsignado();
	void mostrar();
};





