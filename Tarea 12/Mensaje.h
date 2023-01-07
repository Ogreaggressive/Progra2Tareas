#pragma once

#include <iostream>
#include <string>

using namespace std;

class Mensaje
{
protected:
	long fono;
public:
	Mensaje(long fono);
	~Mensaje();
	long getFono();
	virtual void mostrar();
	static void mostrar(Mensaje* mensaje);
	bool operator==(Mensaje* mensaje);
};



