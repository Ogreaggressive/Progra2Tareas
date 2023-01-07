#pragma once

#include <iostream>
#include <string>

using namespace std;

class Obra
{
private:
	string titulo;
	string autor;
	string tipo;
	int precio;
public:
	Obra(string titulo, string autor, string tipo, int precio);
	~Obra();
	string getAutor();
	string getTitulo();
	string getTipo();
	void mostrar();
	static void mostrar(Obra* obra);
	bool operator==(Obra* obra);
	static bool compTituloAsc(Obra* p1, Obra* p2);
	static bool compAutorAsc(Obra* p1, Obra* p2);
};







