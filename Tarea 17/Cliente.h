#pragma once

#include <sstream>
#include <iostream>
#include <string>

#include "ListaGenerica.h"
#include "Mascota.h"

using namespace std;


class Cliente
{
private:
	int ci;
	string nombre;
	int fono;
	ListaGenerica<Mascota> mascotas;
public:
	Cliente(int ci, string nombre, int fono);
	Cliente(int ci);
	~Cliente();
	int getCi();
	string getNombre();
	void mostrar();
	static void mostrar(Cliente* cliente);
	bool operator==(Cliente* cliente);
	static bool compCiAsc(Cliente* p1, Cliente* p2);
	static bool compNomAsc(Cliente* p1, Cliente* p2);
	string toString();
	string toStringMen();
	ListaGenerica<Mascota>& getMascotas();
	void ordenar();
};



