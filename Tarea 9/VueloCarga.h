#pragma once
#include "Vuelo.h"
#define TAM_MAX_PAQ 40

class VueloCarga :
	public Vuelo
{
private:
	ArrayGenerico<Paquete> cargas;
public:
	VueloCarga(int codigo);
	VueloCarga(int codigo, string origen, string destino, long fecha);
	~VueloCarga();
	void mostrar();
	void registrar();
};



