#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class Obra
{
protected:
	string titulo;
	string autor;
	int codigo;
public:
	Obra(int codigo,string titulo, string autor);
	Obra(int codigo);
	~Obra();
	string getAutor();
	int getCodigo();
	void mostrar();
	static void mostrar(Obra* obra);
	bool operator==(Obra* obra);
	static bool compTituloAsc(Obra* p1, Obra* p2);
	static bool compAutorAsc(Obra* p1, Obra* p2);
	virtual string toString() = 0;
};









