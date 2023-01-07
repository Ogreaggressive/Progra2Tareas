#include "Linea.h"

Linea::Linea(int id, int x, int y, int tam, string orientacion) : ElementoSimple(id, x, y)
{
	this->tam = tam;
	this->orientacion = orientacion;
}

Linea::~Linea()
{

}

void dibujarDerecha(int x, int y, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		gotoxy(x+i, y);
		cout << "*";
	}
}

void borrarDerecha(int x, int y, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		gotoxy(x + i, y);
		cout << " ";
	}
}

void dibujarIzquierda(int x, int y, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		gotoxy(x - i, y);
		cout << "*";
	}
}

void borrarIzquierda(int x, int y, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		gotoxy(x - i, y);
		cout << " ";
	}
}

void dibujarArriba(int x, int y, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		gotoxy(x, y-i);
		cout << "*";
	}
}

void borrarArriba(int x, int y, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		gotoxy(x, y - i);
		cout << " ";
	}
} 

void dibujarAbajo(int x, int y, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		gotoxy(x, y+i);
		cout << "*";
	}
}

void borrarAbajo(int x, int y, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		gotoxy(x, y + i);
		cout << " ";
	}
}

void Linea::dibujar()
{
	if (orientacion == "derecha")
	{
		dibujarDerecha(x, y, tam);
	}
	else if (orientacion == "izquierda")
	{
		dibujarIzquierda(x, y, tam);
	}
	else if (orientacion == "abajo")
	{
		dibujarAbajo(x, y, tam);
	}
	else if (orientacion == "arriba")
	{
		dibujarArriba(x, y, tam);
	}
	else
	{
		cout << "no existe esa direccion" << endl;
	}
}

void Linea::borrar()
{
	if (orientacion == "derecha")
	{
		borrarAbajo(x, y, tam);
	}
	else if (orientacion == "izquierda")
	{
		borrarIzquierda(x, y, tam);
	}
	else if (orientacion == "abajo")
	{
		borrarAbajo(x, y, tam);
	}
	else if (orientacion == "arriba")
	{
		borrarArriba(x, y, tam);
	}
	else
	{
		cout << "no existe esa direccion" << endl;
	}
}
