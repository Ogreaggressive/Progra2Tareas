#pragma once

#include <iostream>
#include <string>

using namespace std;

class Socio
{
private:
	int ci;
	string nombre;
	int puntaje;
public:
	Socio(int ci, string nombre);
	~Socio();
	int getCi();
	string getNombre();
	void mostrar();
	void aumentarPuntaje(int num);

};


