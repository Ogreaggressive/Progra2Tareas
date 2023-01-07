#include "Pintura.h"

Pintura::Pintura(string titulo, string autor, string tipo, int precio, int ancho, int largo) : Obra(titulo, autor, tipo, precio)
{
	this->largo = largo;
	this->ancho = ancho;
}

Pintura::~Pintura()
{

}

void Pintura::mostrar()
{
	cout << "---Pintura---" << endl;
	Obra::mostrar();
	cout << "largo: " << largo << endl;
	cout << "ancho: " << ancho << endl;
}





