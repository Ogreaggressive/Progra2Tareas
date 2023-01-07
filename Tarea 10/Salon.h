#pragma once

#include "Exposicion.h"
#define CANT_MAX_EXPO 10

class Salon
{
private:
	int codigo;
	int tamanio;
	Exposicion** exposiciones;
	int ind;
public:
	Salon(int codigo, int tamanio);
	~Salon();
	int getCodigo();
	int getTamanio();
	void mostrar();
	static void mostrar(Salon* salon);
	bool operator==(Salon* salon);
	static bool compCodAsc(Salon* p1, Salon* p2);
	void registrar(Exposicion* expo);
	void ordenar();
};

