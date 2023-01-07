#include "Pequenio1.h"

Pequenio1::Pequenio1(int ejemplo1,string nombre1)
{
	this->ejemplo1 = ejemplo1;
	this->nombre1 = nombre1;
}
Pequenio1::~Pequenio1()
{

}

void Pequenio1::mostrar()
{
	cout << "-----Pequenio1-------" << endl;
	cout << "ejemplo1: " << ejemplo1 << endl;
	cout << "nombre1: " << nombre1 << endl;
}
