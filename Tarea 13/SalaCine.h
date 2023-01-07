#pragma once
#include "Funcion.h"
#include "Matriz.h"
#include "ListaGenerica.h"
#include "Nodo.h"

class SalaCine
{
private:
    string nombre;
    int filas;
    int columnas;
    ListaGenerica<Funcion> funciones;
public:
    SalaCine(string nombre, int filas, int columnas);
    ~SalaCine();
    void mostrar();
    void crearFuncion(int codigo, string nombre);
    string toString();
    Funcion* getFuncion(int codigo);

};

