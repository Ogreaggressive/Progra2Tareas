

#include <iostream>

#include "ListaVentas.h"
#include "Vendedor.h"
#include "Supermercado.h"

int main()
{
	int numVendedores;
	Vendedor** vendedores;
	Supermercado s;
	ListaVentas::getInst().CargarDeArchivo();
	Stock::getInst().cargarDeArchivo();
	numVendedores=s.iniciarVendedores();
	vendedores = new Vendedor* [numVendedores];
	for (int i = 0; i < numVendedores; i++)
	{
		vendedores[i] = new Vendedor;
	}
	for (int i = 0; i < numVendedores; i++)
	{
		vendedores[i]->iniciar();
	}
	//Vendedor v;
	for (int i = 0; i < numVendedores; i++)
	{
		vendedores[i]->join();
	}
	//v.iniciar();

	//v.join();

	s.generarReporte();

	return 0;
}
