#pragma once

#include <iostream>
using namespace std;

template<class T>
class Nodo
{
private:
	T* dato;
	Nodo* siguiente;
public:
	Nodo(T* dato);
	~Nodo();
	T* getDato();
	Nodo<T>* getSiguiente();
	void crearSiguiente(T* dato);
};

template<class T>
Nodo<T>::Nodo(T* dato)
{
	this->dato = dato;
	siguiente = NULL;
}

template<class T>
Nodo<T>::~Nodo()
{

}

template<class T>
T* Nodo<T>::getDato()
{
	return dato;
}


template<class T>
Nodo<T>* Nodo<T>::getSiguiente()
{
	return siguiente;
}

template<class T>
void Nodo<T>::crearSiguiente(T* dato)
{
	siguiente = new Nodo<T>(dato);
}

