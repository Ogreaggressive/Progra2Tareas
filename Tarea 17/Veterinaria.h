#pragma once

#include "ListaGenerica.h"
#include "Clientes.h"
#include "Atencion.h"
#include "Reserva.h"

#include "InextistenteAtencionException.h"
#include "InextistenteMascotaException.h"

#include "ReservaSimple.h"
#include "ReservaCombo.h"

#include "AtencionMedica.h"
#include "AtencionPeluqueria.h"

class Veterinaria
{
private:
	ListaGenerica<Atencion> atenciones;
	ListaGenerica<Reserva> reservas;
public:
	Veterinaria();
	~Veterinaria();
	void registrarAtencion(AtencionMedica* m1);
	void registrarAtencion(AtencionPeluqueria* m1);
	void registrarReservaSimple(int idReserva, int codigoAtencion, int ciCliente, string nombreMascota);
	void registrarReservaCombo(int idReserva, int codigoAtencion1,int codigoAtencion2, int ciCliente, string nombreMascota);
	string toString();
	void ordenar();
};

