#pragma once

#include "Pequenio1.h"
#include "Pequenio2.h"

#define CANTIDAD1 1000
#define CANTIDAD2 1000

class Grande
{
private:
	string nombre;
	Pequenio1* listaPequenio1[CANTIDAD1];
	Pequenio2* listaPequenio2[CANTIDAD2];
	int indPequenio1;
	int indPequenio2;

public:
	Grande(string nombre);
	~Grande();
	void agregarPequenio1(int ejemplo1, string nombre1);
	void agregarPequenio2(int ejemplo2, int ejemploCI, string nombre2);
	void mostrar();

};

