#include "VueloPasajeros.h"

VueloPasajeros::VueloPasajeros(int codigo) :Vuelo(codigo), pasajeros(TAM_MAX_PAS)
{
	
}

VueloPasajeros::VueloPasajeros(int codigo, string origen, string destino, long fecha) : Vuelo(codigo,origen,destino,fecha), pasajeros(TAM_MAX_PAS)
{

}

VueloPasajeros::~VueloPasajeros()
{

}


void VueloPasajeros::mostrar()
{
	cout << "------VueloPasajeros:----------" << endl;
	Vuelo::mostrar();
	pasajeros.mostrar(Persona::mostrar);
}

void VueloPasajeros::registrar()
{
	int ci;
	cout << "Ingrese ci del pasajero: " << endl;
	cin >> ci;
	Persona pasajeroABuscar(ci);

	Persona* pasajero = SingletonClientes::getInstancia().getClientes().buscar(&pasajeroABuscar);
	if (pasajero != NULL)
	{
		pasajeros.registrar(pasajero);
	}
	else
	{
		cout << "error" << endl;
	}
	
}


