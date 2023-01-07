#pragma once

#include <iostream>
#include <thread>
#include <mutex>
#include <random>

#include "ArrayGenerico.h"
#include "Producto.h"

using namespace std;

class Hilo
{
private:
	thread* t;
public:
	Hilo();
	~Hilo();
	void iniciar();
	void join();
private:
	static void ejecutarProcesar(Hilo* h);
protected:
	virtual void procesar() = 0;
};


