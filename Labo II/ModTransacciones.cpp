#include "ModTransacciones.h"

ModTransacciones::ModTransacciones(int cantMaxTransacciones)
{
	transacciones = new Transaccion * [cantMaxTransacciones];
	this->cantMaxTransacciones = cantMaxTransacciones;
	ind = 0;
}

ModTransacciones::~ModTransacciones()
{
	for (int i = 0; i < ind; i++)
	{
		delete transacciones[i];
	}
	delete[] transacciones;
}

void ModTransacciones::registrar(string codigo, string tipo, int monto, int fecha)
{
	if (ind < cantMaxTransacciones)
	{
		transacciones[ind] = new Transaccion(codigo, tipo, monto, fecha);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}


void ModTransacciones::aumentar(Transaccion* transaccion)
{
	if (ind < cantMaxTransacciones)
	{
		transacciones[ind] = transaccion;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModTransacciones::mostrar()
{
	cout << "------transacciones-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "transacciones: " << endl;
		transacciones[i]->mostrar();
	}
}

Transaccion* ModTransacciones::buscar(string codigo)
{
	//cout << "Transacciones" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (transacciones[i]->getCodigo() == codigo)
		{
			return transacciones[i];
		}
	}
}

Transaccion* ModTransacciones::buscarDinero(int monto)
{
	//cout << "Transacciones" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (transacciones[i]->getMonto() == monto)
		{
			return transacciones[i];
		}
	}
}

void ModTransacciones::ordenarTransaccionAsignado()
{
	string Codigo1, Codigo2;
	Transaccion* transaccionesPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			Codigo1 = transacciones[i]->getCodigo();
			Codigo2 = transacciones[j]->getCodigo();
			if (Codigo1 > Codigo2)
			{
				transaccionesPasar = transacciones[i];
				transacciones[i] = transacciones[j];
				transacciones[j] = transaccionesPasar;
			}
		}
	}
}

