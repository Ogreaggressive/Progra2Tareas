#include "Simple.h"

Simple::Simple(int id, string nombre, int cantMaxTenistas) : Competencia(id,nombre)
{
	tenistas = new Tenista * [cantMaxTenistas];
	this->cantMaxTenistas = cantMaxTenistas;
	ind = 0;
}

Simple::~Simple()
{
	for (int i = 0; i < ind; i++)
	{
		delete tenistas[i];
	}
}

void Simple::registrarTenista(string codReg, int ci, string nombre, int telefono)
{
	if (ind < cantMaxTenistas)
	{
		tenistas[ind] = new Tenista(codReg, ci, nombre, telefono);
		ind++;
	}
	else
	{
		cout << "Error, limite de tenistas excedido!" << endl;
	}
}

void Simple::aumentarTenista(Tenista* tenista)
{
	if (ind < cantMaxTenistas)
	{
		tenistas[ind] = tenista;
		ind++;
	}
	else
	{
		cout << "Error, limite de tenistas excedido!" << endl;
	}
}

void Simple::mostrarTenistas()
{
	for (int i = 0; i < ind; i++)
	{
		tenistas[i]->mostrar();
	}
}

void Simple::mostrar()
{
	cout << "------Simple------" << endl;
	Competencia::mostrar();
	cout << "///////////tenistas//////////:" << endl;
	mostrarTenistas();
}

void Simple::ordenar()
{
	string codReg1, codReg2;
	Tenista* TenistaPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			codReg1 = tenistas[i]->getcodReg();
			codReg2 = tenistas[j]->getcodReg();
			if (codReg1 > codReg2)
			{
				TenistaPasar = tenistas[i];
				tenistas[i] = tenistas[j];
				tenistas[j] = TenistaPasar;
			}
		}
	}
}

void Simple::registrarGanadores(string codReg)
{
	for (int i = 0; i < ind; i++)
	{
		if (tenistas[i]->getcodReg() == codReg)
		{
			cout << "el ganador de la competencia es: " << endl;
			tenistas[i]->mostrar();
		}	
	}
}