#include "Equipo.h"

Equipo::Equipo(string nombreEquipo, Socio* piloto, Socio* copiloto, Vehiculo* vehiculo)
{
	this->nombreEquipo = nombreEquipo;
	this->piloto = piloto;
	this->copiloto = copiloto;
	this->vehiculo = vehiculo;
	puntaje = 0;
}

Equipo::~Equipo()
{

}

void Equipo::mostrar()
{
	cout << "nombre del Equipo: " << nombreEquipo << endl;
	cout << "el piloto es: " << endl;
	piloto->mostrar();
	cout << "el copiloto es: " << endl;
	copiloto->mostrar();
	cout << "el auto a usar es: " << endl;
	vehiculo->mostrar();
}

void Equipo::darPuntaje(int puntajePiloto, int puntajeCopiloto)
{
	puntaje = puntajeCopiloto + puntajePiloto;
	piloto->aumentarPuntaje(puntajePiloto);
	copiloto->aumentarPuntaje(puntajeCopiloto);
}

string Equipo::getNombre()
{
	return nombreEquipo;
}

int Equipo::getPuntaje()
{
	return puntaje;
}

int Equipo::conseguirNumeroVehiculo()
{
	return vehiculo->getnumAsignado();
}