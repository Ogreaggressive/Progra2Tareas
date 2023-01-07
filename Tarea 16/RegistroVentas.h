#pragma once

#include <mutex>
#include <fstream>

#include "ListaGenerica.h"
#include "Venta.h"

using namespace std;

class RegistroVentas
{
private:
	int cont;
	float tot;
	ListaGenerica<Venta> ventas;
	mutex m;
public:
	static RegistroVentas& getInst();
	~RegistroVentas();
	void cambiarContador(int valor);
	void aumentarVenta(Venta* v1);
	void cambiarCont(int& num);
	float conseguirTotal();
	int quitarElemento();
private:
	RegistroVentas();
};



