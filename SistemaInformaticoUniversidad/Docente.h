#pragma once

#include <iostream>
#include <string>
using namespace std;

class Docente
{
private:
	int ci;
	string nombre;
	long fono;
public:
	Docente(); //Constructor
	Docente(int ci, string nombre, long fono); //Constructor Copia
	~Docente(); //Destructor
	void mostrar();
};
