#include "Obligatoria.h"

Obligatoria::Obligatoria(string titulo, int fecha) : Tarea(titulo, fecha)
{

}

Obligatoria::~Obligatoria()
{

}

void Obligatoria::mostrar()
{
	Tarea::mostrar();
	entregas.ordenar(Entrega::compHoraAsc);
	entregas.mostrar(Entrega::mostrar);
}

void Obligatoria::registrar(EntregaConArchivoAdjunto* e1)
{
	Entrega* p1 = e1;
	entregas.registrar(p1);
}

void Obligatoria::registrar(EntregaSoloTexto* e1)
{
	Entrega* p1 = e1;
	entregas.registrar(p1);
}
