#include "Aerolinea.h"

Aerolinea::Aerolinea() :vuelos(TAM_MAX_VUELOS)
{

}

Aerolinea::~Aerolinea()
{

}

ArrayGenerico<Vuelo>& Aerolinea::getVuelos()
{
	return vuelos;
}