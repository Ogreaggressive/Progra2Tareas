#pragma once

#include <iostream>
#include "Formato.h"


using namespace std;

class ElementoGrafico
{
protected:
	int id;
public:
	ElementoGrafico(int id);
	~ElementoGrafico();
	int getID();
	virtual void dibujar() = 0;
	virtual void borrar() = 0;
};

