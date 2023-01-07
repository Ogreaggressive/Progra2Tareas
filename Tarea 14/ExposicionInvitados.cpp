#include "ExposicionInvitados.h"

ExposicionInvitados::ExposicionInvitados(int codigo, int fechaInicio, int fechaFin) : Exposicion(codigo, fechaInicio, fechaFin)
{

}

ExposicionInvitados::~ExposicionInvitados()
{

}

void ExposicionInvitados::mostrar()
{
	cout << "---ExposicionInvitados---" << endl;
	Exposicion::mostrar();
}

string ExposicionInvitados::toString()
{
	stringstream ss;
	Nodo<Persona>* aux = artistas.getPrimer();
	ss << "{tipo:invitados,";
	ss << "id:" << codigo << ",inicio:" << fechaInicio << ",fin:" << fechaFin;
	ss << ",obras:[";
	ordenarObras();
	//ordenarArtistas();
	for (int i = 0; i < obras.getTam(); i++)
	{
		ss << obras[i]->toString();
		if (i != obras.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]";
	ss << ",artistas:[";
	for (int i = 0; i < artistas.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != artistas.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void ExposicionInvitados::registrarArtista(string nombre)
{
	Persona* nuevoArtista = new Persona(nombre);
	artistas.registrar(nuevoArtista);
}

void ExposicionInvitados::registrarObra(Pintura* pintura)
{
	Obra* obra1 = pintura;
	obras.registrar(obra1);
}

void ExposicionInvitados::registrarObra(Escultura* escultura)
{
	Obra* obra1 = escultura;
	obras.registrar(obra1);
}

void ExposicionInvitados::ordenarObras()
{
	obras.ordenar(Obra::compTituloAsc);
}

/*
void ExposicionInvitados::ordenarArtistas()
{
	artistas.ordenar(Persona::compNomAsc);
}*/


