#pragma once

#include <iostream>
#include <string>


using namespace std;


class Estudiante
{
private:
	int ci;
	string nombre;
	int fono;
public:
	Estudiante(int ci, string nombre, int fono);
	Estudiante(int ci);
	~Estudiante();
	int getCi();
	string getNombre();
	void mostrar();
	static void mostrar(Estudiante* estudiante);
	bool operator==(Estudiante* estudiante);
	static bool compCiAsc(Estudiante* p1, Estudiante* p2);
	static bool compNomAsc(Estudiante* p1, Estudiante* p2);
};





