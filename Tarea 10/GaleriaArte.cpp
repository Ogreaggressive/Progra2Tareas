#include "GaleriaArte.h"

GaleriaArte::GaleriaArte() :salones(TAM_MAX_SALONES)
{

}

GaleriaArte::~GaleriaArte()
{

}

ArrayGenerico<Salon>& GaleriaArte::getSalones()
{
	return salones;
}
