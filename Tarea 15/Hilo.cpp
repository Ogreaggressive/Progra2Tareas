#include "Hilo.h"

Hilo::Hilo()
{

}

Hilo::~Hilo()
{

}

void Hilo::iniciar()
{
	t = new thread(ejecutarProcesar, this);
}

void Hilo::join()
{
	t->join();
}

void Hilo::ejecutarProcesar(Hilo* h)
{
	h->procesar();
}