#include "Pequenio2.h"

Pequenio2::Pequenio2(int ejemplo2,int ejemploCI ,string nombre2)
{
	this->ejemplo2 = ejemplo2;
	this->ejemploCI = ejemploCI;
	this->nombre2 = nombre2;
}
Pequenio2::~Pequenio2()
{

}

void Pequenio2::mostrar()
{
	cout << "-----Pequenio2-------" << endl;
	cout << "ejemplo2: " << ejemplo2 << endl;
	cout << "ejemploCI: " << ejemploCI << endl;
	cout << "nombre2: " << nombre2 << endl;
}