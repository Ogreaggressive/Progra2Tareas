#pragma once

#include "Cliente.h"
#include "Matriz.h"

class Funcion
{
private:
    int codigo;
    string nombre;
    Matriz<Cliente*> clientes;
public:
    Funcion(int codigo, string nombre, int filas, int columnas);
    Funcion(int codigo, int filas, int columnas);
    ~Funcion();
    bool operator==(Funcion* Funcion);
    void mostrar();
    string toString();
    Matriz<Cliente*>& getAsientos();
};

