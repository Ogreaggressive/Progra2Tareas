#pragma once

#include "Nodo.h"

template<class T>
class ListaGenerica
{
private:
	Nodo<T>* primer;
	int tam;
public:
	ListaGenerica();
	~ListaGenerica();
	int getTam();
	Nodo<T>* getPrimer();
	void registrar(T* dato);
	void mostrar(void(*mostrarT)(T*));
	T* buscar(T* dato);
	void ordenar(bool (*funcComp)(T*, T*));
	void ordenar2(bool (*funcComp)(T*, T*));
	void eliminar(T* dato);
};


template<class T>
ListaGenerica<T>::ListaGenerica()
{
	primer = NULL;
	tam = 0;
}

template<class T>
ListaGenerica<T>::~ListaGenerica()
{
}

template<class T>
int ListaGenerica<T>::getTam()
{
	return tam;
}

template<class T>
Nodo<T>* ListaGenerica<T>::getPrimer()
{
	return primer;
}

template<class T>
void ListaGenerica<T>::registrar(T* dato)
{
	if (primer == NULL)
	{
		primer = new Nodo<T>(dato);
	}
	else
	{
		Nodo<T>* aux = primer;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->crearSiguiente(dato);
	}
	tam++;
}

template<class T>
void ListaGenerica<T>::mostrar(void (*mostrarT)(T*))
{
	Nodo<T>* aux = primer;
	while (aux != NULL)
	{
		(*mostrarT)(aux->getDato());
		aux = aux->getSiguiente();
	}
}


template<class T>
T* ListaGenerica<T>::buscar(T* dato)
{
	Nodo<T>* aux = primer;
	while (aux->getSiguiente() != NULL)
	{
		if (*(aux->getDato()) == dato)
		{
			return aux->getDato();
		}
		aux = aux->getSiguiente();
	}
	return NULL;
}


template<class T>
void intercambiar(Nodo<T>* a, Nodo<T>* b)
{
	Nodo<T> aux = *a;
	*a = *b;
	*b = aux;
}

template<class T>
void intercambiarDatos(T* a, T* b)
{
	T aux = *a;
	*a = *b;
	*b = aux;
}

/*
template<class T>
void ListaGenerica<T>::ordenar(bool (*funcComp)(T*, T*))
{
	int ind=0;
	Nodo<T>* aux = primer;
	Nodo<T>* aux2 = primer;
	while (aux->getSiguiente() != NULL)
	{
		aux = aux->getSiguiente();
		tam = ind+1;
	}
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			if ((*funcComp)(aux->getDato(), aux2->getDato()))
			{
				intercambiar(&(aux), &(aux2));
			}
			aux2 = aux2->getSiguiente();
		}
		aux = aux->getSiguiente();
	}
}*/

/*
template<class T>
void ListaGenerica<T>::ordenar(bool (*funcComp)(T*, T*))
{
	int ind = 0;
	Nodo<T>* aux;
	Nodo<T>* aux2;
	Nodo<T>* auxNum = primer;
	while (auxNum->getSiguiente() != NULL)
	{
		auxNum = auxNum->getSiguiente();
		ind = ind + 1;
	}
	for (int i = 0; i < ind; i++)
	{
		aux = primer;
		aux2 = aux->getSiguiente();
		for (int j = i + 1; j < ind; j++)
		{
			if ((*funcComp)(aux->getDato(), aux2->getDato()))
			{
				//intercambiarDatos((aux->getDato()), (aux2->getDato()));
				intercambiar(aux, aux2);
			}
			aux = aux2;
			aux2 = aux2->getSiguiente();
		}
	}
}*/


template<class T>
void ListaGenerica<T>::ordenar(bool (*funcComp)(T*, T*))
{
	bool ordenado = false;
	Nodo<T>* aux;
	Nodo<T>* aux2;
	while (!ordenado)
	{
		ordenado = true;
		aux = primer;
		aux2 = aux->getSiguiente();
		while (aux->getSiguiente() != NULL)
		{
			if ((*funcComp)(aux->getDato(), aux2->getDato()))
			{
				ordenado = false;
				intercambiar(aux, aux2);
			}
			aux = aux2;
			aux2 = aux2->getSiguiente();
		}
	}
}

/*
template<class T>
void ListaGenerica<T>::ordenar(bool (*funcComp)(T*, T*))
{
	bool ordenado = false;
	Nodo<T>* aux=primer;
	Nodo<T>* aux2;
	while (aux->getSiguiente()!=NULL)
	{
		aux = primer;
		aux2 = aux->getSiguiente();
		while (aux2->getSiguiente() != NULL)
		{
			if ((*funcComp)(aux->getDato(), aux2->getDato()))
			{
				intercambiar(aux, aux2);
			}
			aux2 = aux2->getSiguiente();
		}
		aux->getSiguiente();
		aux2 = aux;
	}
}*/

/*
template<class T>
void ListaGenerica<T>::eliminar(T* dato)
{
	if (primer != nullptr)
	{
		Nodo<T>* aux = primer;
		if (primer->getDato() == dato)
		{
			primer = primer->getSiguiente();
			delete aux;
		}
		else
		{
			while (aux->getSiguiente() != nullptr && aux->getSiguiente()->getDato() != dato)
			{
				aux = aux->getSiguiente();
			}
			if (aux->getSiguiente() != nullptr && aux->getSiguiente()->getDato() == dato)
			{
				Nodo<T>* aEliminar = aux->getSiguiente();
				//aux->getSiguiente() = aux->getSiguiente()->getSiguiente();
				delete aEliminar;
			}
		}
	}
}*/


template<class T>
void ListaGenerica<T>::eliminar(T* dato)
{
	if (primer != NULL)
	{
		Nodo<T>* aux_borrar;
		Nodo<T>* anterior = NULL;

		aux_borrar = primer;

		while ((aux_borrar != NULL) && !(*(aux_borrar->getDato()) == dato))
		{
			anterior = aux_borrar;
			aux_borrar = aux_borrar->getSiguiente();
		}
		if (aux_borrar == NULL)
		{
			cout << "elemento no encontrado" << endl;
		}
		else if (anterior == NULL)
		{
			primer = primer->getSiguiente();
			delete aux_borrar;
		}
		else
		{
			//anterior->getSiguiente() = aux_borrar->getSiguiente();
			anterior->crearSiguiente(aux_borrar->getSiguiente()->getDato());
			delete aux_borrar;
		}
	}
}

