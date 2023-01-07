#pragma once
#include "Exposicion.h"
#include "Pintura.h"
#include "Escultura.h"

class ExposicionPropia :
    public Exposicion
{
private:

public:
	ExposicionPropia(int codigo,int fechaInicio, int fechaFin);
	~ExposicionPropia();
	void mostrar();
	string toString();
	void agrergarObra(int codigo);
	void ordenarObras();
};

