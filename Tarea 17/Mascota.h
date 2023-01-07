#pragma once

#include <sstream>
#include <iostream>
#include <string>


using namespace std;


class Mascota
{
private:
	int edad;
	string nombre;
public:
	Mascota(string nombre, int edad);
	Mascota(string nombre);
	~Mascota();
	int getEdad();
	string getNombre();
	void mostrar();
	static void mostrar(Mascota* mascota);
	bool operator==(Mascota* mascota);
	static bool compEdadAsc(Mascota* p1, Mascota* p2);
	static bool compNomAsc(Mascota* p1, Mascota* p2);
	string toString();
};





