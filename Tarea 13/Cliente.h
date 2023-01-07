#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class Cliente
{
protected:
	int ci;
	string nombre;
public:
	Cliente(int ci, string nombre);
	Cliente(int ci);
	~Cliente();
	int getCi();
	string getNombre();
	void mostrar();
	static void mostrar(Cliente* Cliente);
	bool operator==(Cliente* Cliente);
	static bool compCiAsc(Cliente* p1, Cliente* p2);
	static bool compNomAsc(Cliente* p1, Cliente* p2);
	virtual string toString() =0;
};







