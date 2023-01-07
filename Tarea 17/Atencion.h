#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class Atencion
{
protected:
	int codigo;
	string descripcion;
	int costo;
public:
	Atencion(int codigo, string descripcion, int costo);
	Atencion(int codigo);
	~Atencion();
	string getAutor();
	int getCodigo();
	void mostrar();
	static void mostrar(Atencion* Atencion);
	bool operator==(Atencion* Atencion);
	static bool cmpCodigo(Atencion* p1, Atencion* p2);
	virtual string toString() = 0;
};

