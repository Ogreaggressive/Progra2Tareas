#pragma once
#include "Vuelo.h"


#define TAM_MAX_PAS 40
class VueloPasajeros :
    public Vuelo
{
private:
    ArrayGenerico<Persona> pasajeros;
public:
	VueloPasajeros(int codigo);
	VueloPasajeros(int codigo, string origen, string destino, long fecha);
	~VueloPasajeros();
	void mostrar();
	void registrar();
};

