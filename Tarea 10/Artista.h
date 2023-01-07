#pragma once
#include "Persona.h"
#include "Obra.h"

#define CANT_MAX_OBRAS 10

class Artista :
    public Persona
{
private:
    string tecnica;
    Obra** obras;
    int ind;
public:
    Artista(int ci, string nombre, string tecnica);
    ~Artista();
    void mostrar();
    static void mostrar(Artista* artista);
    static bool compTecAsc(Artista* t1, Artista* t2);
    void registrarObra(Obra* obra);
};

