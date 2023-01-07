#pragma once

#include "Participante.h"
#include "Tenista.h"

class Equipo :
    public Participante
{
private:
    Tenista* tenistas[2];
    int ind;
public:
    Equipo(string codReg);
    ~Equipo();
    void registrarTenista(string codReg, int ci, string nombre, int telefono);
    void aumentarTenista(Tenista* tenista);
    void mostrarTenistas();
    void mostrar();
};

