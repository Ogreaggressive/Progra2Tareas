#pragma once

#include "Cliente.h"


class Sala
{
private:
	int numSala;
	int filas;
	int columnas;
	int ind;
	Cliente** clientes;
	int** ocupado;
public:
	Sala(int numSala, int filas, int columnas);
	~Sala();
	void registrar(int ci, string nombre);
	void mostrarClientes();
	void mostrar();
	static void mostrar(Sala* s1);
	bool operator==(Sala* s1);
	static bool cmpNumAsc(Sala* s1, Sala* s2);
	void venderBoletos(Cliente* cliente, int fila, int columna);
	void mostrarBoletosVendidos();
};

