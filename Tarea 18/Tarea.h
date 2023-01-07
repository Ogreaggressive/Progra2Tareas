#pragma once

#include <iostream>
#include <string>


using namespace std;

class Tarea
{
protected:
	string titulo;
	int fecha;
public:
	Tarea(string titulo, int fecha);
	~Tarea();
	void mostrar();
	static void mostrar(Tarea* t1);
	bool operator==(Tarea* estudiante);
	static bool compFechaAsc(Tarea* p1, Tarea* p2);
};

