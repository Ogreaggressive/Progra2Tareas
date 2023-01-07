#pragma once

#include "Equipo.h"

#define CANT_MAX_EQUIPOS 20

class Competencia
{
private:
	string nombreCompetencia;
	Equipo* equipos[CANT_MAX_EQUIPOS];
	int ind;
public:
	Competencia(string nombreCompetencia);
	~Competencia();
	void registrarEquipo(string nombreEquipo, Socio* piloto, Socio* copiloto, Vehiculo* vehiculo);
	void mostrar();
	void mostrarEquipos();
	void darPuntaje(int i,int puntajePiloto,int puntajeCopiloto);
	string getNombre();
	Equipo* buscar(string nombreEquipo);
	void equiposGanadores(string n1,string n2,string n3,string n4,string n5);
	void ordenarPuntaje();
	void ordenarVehiculoAsignado();
};

