#include "ExposicionPropia.h"

ExposicionPropia::ExposicionPropia(int codigo,int fechaInicio, int fechaFin) : Exposicion(codigo,fechaInicio,fechaFin)
{

}

ExposicionPropia::~ExposicionPropia()
{

}

void ExposicionPropia::mostrar()
{
	cout << "---ExposicionPropia---" << endl;
	Exposicion::mostrar();
}

string ExposicionPropia::toString()
{
	stringstream ss;
	ss << "{tipo:propia,";
	ss << "id:" << codigo << ",inicio:" << fechaInicio << ",fin:" << fechaFin;
	ss << ",obras:[";
	//ordenarObras();
	for (int i = 0; i < obras.getTam(); i++)
	{
		ss<<obras[i]->toString();
		if (i != obras.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void ExposicionPropia::agrergarObra(int codigo)
{
	Obra* obraABuscar = new Pintura(codigo);
	Obra* obraEncontrada = ListaObras::getInst().getObras().buscar(obraABuscar);
	if (obraEncontrada != NULL)
	{
		obras.registrar(obraEncontrada);
	}
}

void ExposicionPropia::ordenarObras()
{
	obras.ordenar(Obra::compTituloAsc);
}


