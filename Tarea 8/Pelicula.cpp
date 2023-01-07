#include "Pelicula.h"

Pelicula::Pelicula(int fecha, int hora, string detalles, string titulo, string director, string genero) : Funcion(fecha,hora,detalles,titulo,director)
{
	
	this->genero = genero;
}

Pelicula::~Pelicula()
{

}

void Pelicula::mostrar()
{
	cout << "---Pelicula---" << endl;
	Funcion::mostrar();
	cout << "genero: " << genero << endl;
}

