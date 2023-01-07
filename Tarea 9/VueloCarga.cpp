#include "VueloCarga.h"

VueloCarga::VueloCarga(int codigo) :Vuelo(codigo), cargas(TAM_MAX_PAQ)
{

}

VueloCarga::VueloCarga(int codigo, string origen, string destino, long fecha) : Vuelo(codigo, origen, destino, fecha), cargas(TAM_MAX_PAQ)
{

}

VueloCarga::~VueloCarga()
{

}


void VueloCarga::mostrar()
{
	cout << "------VueloCarga:----------" << endl;
	Vuelo::mostrar();
	cargas.mostrar(Paquete::mostrar);
}

void VueloCarga::registrar()
{
	int peso;
	cout << "Ingrese peso de la carga: " << endl;
	cin >> peso;
	Paquete cargasABuscar(peso);

	Paquete* carga = SingletonPaquetes::getInstancia().getPaquetes().buscar(&cargasABuscar);
	cargas.registrar(carga);
}



