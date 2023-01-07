#pragma once

#include <iostream>
#include <string>

using namespace std;

class Producto
{
private:
	string nombre;
public:
	Producto(string nombre);
	~Producto();
	void mostrar();
	static void mostrar(Producto* p1);
};

