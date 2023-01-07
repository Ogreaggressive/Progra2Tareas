#include "ElementoSimple.h"

ElementoSimple::ElementoSimple(int id,int x,int y) : ElementoGrafico (id)
{
	this->x = x;
	this->y = y;
}

ElementoSimple::~ElementoSimple()
{

}