#pragma once

#include "Salon.h"
#include "ArrayGenerico.h"

#define TAM_MAX_SALONES 10

class GaleriaArte
{
private:
	ArrayGenerico<Salon> salones;
public:
	GaleriaArte();
	~GaleriaArte();
	ArrayGenerico<Salon>& getSalones();
};

