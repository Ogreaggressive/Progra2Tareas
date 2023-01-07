#include "Supermercado.h"

Supermercado::Supermercado()
{

}

Supermercado::~Supermercado()
{

}

void Supermercado::generarReporte()
{
	cout << endl;
	cout << "se consiguio en total:";
	cout << RegistroVentas::getInst().conseguirTotal() << " bolivianos en ventas" << endl;
	cout << "nos quedan en total:" << endl;
	Stock::getInst().stockFinal();
}

int Supermercado::iniciarVendedores()
{
	int num;
	cout << "cuantos vendedores tendremos el dia de hoy?" << endl;
	cin >> num;
	return num;
}