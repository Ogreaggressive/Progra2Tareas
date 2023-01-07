#include "Salon.h"

Salon::Salon(int codigo, int tamanio)
{
	this->codigo = codigo;
	this->tamanio = tamanio;
	exposiciones = new Exposicion * [CANT_MAX_EXPO];
	ind = 0;
}

Salon::~Salon()
{
	for (int i = 0; i < ind; i++)
	{
		delete exposiciones[i];
	}
	delete[] exposiciones;
}

int Salon::getCodigo()
{
	return codigo;
}

int Salon::getTamanio()
{
	return tamanio;
}


void Salon::mostrar()
{
	//cout << "Salon:" << endl;
	cout << "codigo: " << codigo << endl;
	cout << "tamanio: " << tamanio << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "exposiciones " << i + 1 << endl;
		exposiciones[i]->mostrar();
	}
}


void Salon::mostrar(Salon* salon)
{
	salon->mostrar();
}

bool Salon::operator==(Salon* salon)
{
	if (codigo == salon->codigo)
	{
		return true;
	}
	return false;
}

bool Salon::compCodAsc(Salon* p1, Salon* p2)
{
	return p1->codigo > p2->codigo;
}

void Salon::registrar(Exposicion* expo)
{
	if (ind < CANT_MAX_EXPO)
	{
		exposiciones[ind] = expo;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void Salon::ordenar()
{
	int id1, id2;
	Exposicion* exposicionesPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			id1 = exposiciones[i]->getFechaInicio();
			id2 = exposiciones[j]->getFechaInicio();
			if (id1 > id2)
			{
				exposicionesPasar = exposiciones[i];
				exposiciones[i] = exposiciones[j];
				exposiciones[j] = exposicionesPasar;
			}
		}
	}
}

