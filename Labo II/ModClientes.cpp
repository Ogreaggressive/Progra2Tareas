#include "ModClientes.h"

ModClientes::ModClientes(int cantMaxClientes)
{
	clientes = new Cliente * [cantMaxClientes];
	this->cantMaxClientes = cantMaxClientes;
	ind = 0;
}

ModClientes::~ModClientes()
{
	for (int i = 0; i < ind; i++)
	{
		delete clientes[i];
	}
	delete[] clientes;
}

void ModClientes::registrar(string codigo, string nombre, int fono, string direccion, int cantMaxCuentas)
{
	if (ind < cantMaxClientes)
	{
		clientes[ind] = new Cliente(codigo, nombre, fono, direccion,cantMaxCuentas);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModClientes::aumentar(Cliente* cliente)
{
	if (ind < cantMaxClientes)
	{
		clientes[ind] = cliente;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModClientes::eliminar(Cliente* cliente) //al aumentar otro cliente este sobreescribira el valor de la ultima posicion
{
	string codigo1, codigo2;
	Cliente* clienteCambio;
	for (int i = 0; i < ind; i++)
	{
		codigo1 = clientes[i]->getCodigo();
		codigo2 = cliente->getCodigo();
		if (codigo1==codigo2)
		{
			clienteCambio = clientes[ind-1];
			clientes[ind-1] = clientes[i];
			clientes[i] = clienteCambio;
			ind = ind - 1;
		}
	}
}



void ModClientes::mostrar()
{
	cout << "------clientes-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "cliente: " << endl;
		clientes[i]->mostrar();
	}
}

Cliente* ModClientes::buscar(string codigo)
{
	//cout << "Clientes" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (clientes[i]->getCodigo() == codigo)
		{
			return clientes[i];
		}
	}
}

void ModClientes::ordenarClienteAsignado()
{
	string Codigo1, Codigo2;
	Cliente* clientePasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			Codigo1 = clientes[i]->getCodigo();
			Codigo2 = clientes[j]->getCodigo();
			if (Codigo1 > Codigo2)
			{
				clientePasar = clientes[i];
				clientes[i] = clientes[j];
				clientes[j] = clientePasar;
			}
		}
	}
}
