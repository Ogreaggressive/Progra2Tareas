#include "ElementoGrafico.h"

ElementoGrafico::ElementoGrafico(int id)
{
	this->id = id;
}

ElementoGrafico::~ElementoGrafico()
{

}

int ElementoGrafico::getID()
{
	return id;
}