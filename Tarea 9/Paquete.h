#pragma once

#include "Persona.h"

class Paquete
{
private:
	int peso;
	Persona* realizaEnvio;
	Persona* recibeEnvio;
public:
	Paquete(int peso);
	Paquete(int peso, Persona* realizaEnvio, Persona* recibeEnvio);
	~Paquete();
	int getPeso();
	void mostrar();
	static void mostrar(Paquete* Paquete);
	bool operator==(Paquete* Paquete);
	static bool cmpPesoAsc(Paquete* p1, Paquete* p2);
};



