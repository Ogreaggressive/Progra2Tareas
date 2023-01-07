#pragma once

#include <iostream>
#include <string>

using namespace std;

class Transaccion
{
private:
	string codigo;
	string tipo;
	int monto;
	int fecha;
public:
	Transaccion(string codigo,string tipo, int monto, int fecha);
	~Transaccion();
	string getCodigo();
	int getMonto();
	void mostrar();
};

