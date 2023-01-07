#pragma once

#include <iostream>
#include <string>
using namespace std;

class Estudiante
{
private: 
	int ci;
	string nombre;
	long fono;
public:
	Estudiante(); //Constructor
	Estudiante(int ci, string nombre, long fono); //Constructor Copia
	~Estudiante(); //Destructor
	void mostrar();
};

