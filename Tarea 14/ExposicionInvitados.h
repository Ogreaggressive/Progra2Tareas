#pragma once
#include "Exposicion.h"
#include "Persona.h"
#include "ListaGenerica.h"

class ExposicionInvitados :
	public Exposicion
{
private:
	ListaGenerica<Persona> artistas;
public:
	ExposicionInvitados(int codigo, int fechaInicio, int fechaFin);
	~ExposicionInvitados();
	void mostrar();
	string toString();
	void registrarArtista(string nombre);
	void registrarObra(Pintura* pintura);
	void registrarObra(Escultura* escultura);
	void ordenarObras();
	void ordenarArtistas();
};



