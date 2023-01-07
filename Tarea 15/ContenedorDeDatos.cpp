#include "ContenedorDeDatos.h"

ContenedorDeDatos::ContenedorDeDatos()
{

}

ContenedorDeDatos::~ContenedorDeDatos()
{

}

void ContenedorDeDatos::cambiarContador(int valor)
{
	m.lock();
	cont = valor;
	m.unlock();
}

ContenedorDeDatos& ContenedorDeDatos::getInst()
{
	static ContenedorDeDatos i;
	return i;
}

int ContenedorDeDatos::quitarElemento()
{
	int tmp=-1;
	m.lock();
	if (cont != -1)
	{
		tmp = cont;
		cont = -1;
	}
	m.unlock();
	return tmp;
}