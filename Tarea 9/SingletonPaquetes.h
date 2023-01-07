#pragma once

#include "Paquete.h"
#include "ArrayGenerico.h"

#define TAM_MAX_PAQ 20

class SingletonPaquetes
{
private:
	ArrayGenerico<Paquete> paquetes;
public:
	static SingletonPaquetes& getInstancia();
	~SingletonPaquetes();
	ArrayGenerico<Paquete>& getPaquetes();
private:
	SingletonPaquetes();
};



