#pragma once
#include "Competencia.h"
#include "Tenista.h"

class Simple :
    public Competencia
{
private:
    Tenista** tenistas;
    int cantMaxTenistas;
    int ind;
public:
    Simple(int id, string nombre,int cantMaxTenistas);
    ~Simple();
    void registrarTenista(string codReg, int ci, string nombre, int telefono);
    void aumentarTenista(Tenista* tenista);
    void mostrarTenistas();
    void mostrar();
    void ordenar();
    void registrarGanadores(string codReg);
};

