#include "Sala.h"

Sala::Sala(int numSala, int filas, int columnas)
{
	clientes = new Cliente * [filas*columnas];
	ocupado = new int * [filas];
	for (int i = 0; i < filas; i++)
	{
		ocupado[i] = new int[columnas];
	}
	this->filas = filas;
	this->columnas = columnas;
	this->numSala = numSala;
	ind = 0;
}

Sala::~Sala()
{
	for (int i = 0; i < ind; i++)
	{
		delete clientes[i];
	}
	delete[] clientes;
}


void Sala::registrar(int ci, string nombre)
{
	if (ind < filas * columnas)
	{
		clientes[ind] = new Cliente(ci,nombre);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void Sala::mostrarClientes()
{
	cout << "------Clientes-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "Cliente " << i + 1 << endl;
		clientes[i]->mostrar();
	}
}

void Sala::mostrar()
{
	cout << "-----sala-----" << endl;
	cout << "numSala" << numSala << endl;
	cout << "filas" << filas << endl;
	cout << "columnas" << columnas << endl;
	mostrarClientes();
}

void Sala::mostrar(Sala* s1)
{
	s1->mostrar();
}

bool Sala::operator==(Sala* cliente)
{
	return numSala == cliente->numSala;
}

bool Sala::cmpNumAsc(Sala* s1, Sala* s2)
{
	return s1->numSala > s2->numSala;
}

void Sala::venderBoletos(Cliente* cliente, int fila, int columna)
{
	if (ind < filas * columnas && ocupado[fila][columna]!=1)
	{
		clientes[ind] = cliente;
		ocupado[fila][columna] = 1;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void Sala::mostrarBoletosVendidos()
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; i++)
		{
			if (ocupado[i][j] == 1)
			{
				cout << "el asiento " << i << j << "esta ocupado" << endl;
			}
		}
	}
}