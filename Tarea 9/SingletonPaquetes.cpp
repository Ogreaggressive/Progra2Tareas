#include "SingletonPaquetes.h"

SingletonPaquetes::SingletonPaquetes() :paquetes(TAM_MAX_PAQ)
{

}

SingletonPaquetes::~SingletonPaquetes()
{

}

ArrayGenerico<Paquete>& SingletonPaquetes::getPaquetes()
{
	return paquetes;
}

SingletonPaquetes& SingletonPaquetes::getInstancia()
{
	static SingletonPaquetes instancia;
	return instancia;
}
