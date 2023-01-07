#pragma once

#include <iostream>
#include <string>

using namespace std;

class Venta
{
private:
	string nombre;
	float precio;
	int cant;
public:
	Venta(string nombre,int cant, float precio);
	~Venta();
	void mostrar();
	static void mostrar(Venta* v1);
	string getNombre();
	int getCant();
	float getPrecio();
};



