#pragma once
#include "Competencia.h"
#include "Equipo.h"

class Double :
    public Competencia
{
private:
    Equipo** equipos;
    int cantMaxEquipos;
    int ind;
public:
    Double(int id, string nombre, int cantMaxEquipos);
    ~Double();
    void registrarEquipo(string codReg);
    void aumentarEquipo(Equipo* equipo);
    void mostrarEquipos();
    void mostrar();
    void ordenar();
    void registrarGanadores(string codReg);
};



