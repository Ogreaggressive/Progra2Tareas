#pragma once

#include <iostream>
using namespace std;

template<class T>
class Matriz
{
private:
	T** datos;
	int filas;
	int cols;
public:
	Matriz(int filas, int cols);
	~Matriz();
	int getTamFilas();
	int getTamCols();
	void registrar(T dato, int fila, int col); //persona*
	void mostrar(void (*mostrarT)(T)); //persona*
	T* buscar(T dato);
	T* operator[](int fila);
};

template<class T>
Matriz<T>::Matriz(int filas, int cols)
{
	datos = new T * [filas];
	for (int i = 0; i < filas; i++)
	{
		datos[i] = new T[cols];
	}
	this->filas = filas;
	this->cols = cols;
}


template<class T>
Matriz<T>::~Matriz()
{
	for (int i = 0; i < filas; i++)
	{
		delete[] datos[i];
	}
	delete[] datos;
}

template<class T>
int Matriz<T>::getTamFilas()
{
	return filas;
}

template<class T>
int Matriz<T>::getTamCols()
{
	return cols;
}

template<class T>
void Matriz<T>::registrar(T dato, int fila, int col)
{
	if (fila < filas && col < cols)
	{
		datos[fila][col] = dato;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}


template<class T>
void Matriz<T>::mostrar(void (*mostrarT)(T))
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < filas; j++)
		{
			(*mostrarT)(datos[i][j]);
		}
	}
}
/*
template<class T>
T* Matriz<T>::buscar(T* dato)
{
	for (int i = 0; i < ind; i++)
	{
		if (*datos[i] == *dato)
		{
			return datos[i];
		}
	}
	return NULL;
}

*/
template<class T>
T* Matriz<T>::operator[](int fila)
{
	return datos[fila];
}