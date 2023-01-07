#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
	int ci;
	string nombre;
	long fono;
public:
	Persona(int ci);
	Persona(int ci, string nombre, long fono);
	~Persona();
	int getCi();
	string getNombre();
	void mostrar();
	static void mostrar(Persona* Persona);
	bool operator==(Persona* Persona);
	static bool cmpCiAsc(Persona* c1, Persona* c2);
	string toString();
};


