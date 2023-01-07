#include "Punto.h"

Punto::Punto(int id, int x, int y) : ElementoSimple(id,x,y)
{

}

Punto::~Punto()
{

}

void Punto::dibujar()
{
	gotoxy(x, y);
	cout << "*";
}

void Punto::borrar()
{
	gotoxy(x, y);
	cout << " ";
}

