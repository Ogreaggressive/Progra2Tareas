#pragma once

#include "Vuelo.h"
#include "ArrayGenerico.h"

#define TAM_MAX_VUELOS 10

class Aerolinea
{
private:
	ArrayGenerico<Vuelo> vuelos;
public:
	Aerolinea();
	~Aerolinea();
	ArrayGenerico<Vuelo>& getVuelos();
};

