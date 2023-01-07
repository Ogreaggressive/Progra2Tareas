#pragma once

#include <iostream>
#include <string>

using namespace std;

class Producto
{
private:
	string nombre;
	int cant;
public:
	Producto(string nombre, int cant);
	~Producto();
	string getNombre();
	int getCant();
	void cambiarCant(int valor);
	void mostrar();
	static void mostrar(Producto* p1);
};

