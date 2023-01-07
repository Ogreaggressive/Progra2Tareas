#pragma once

#include "Atencion.h"
#include "AtencionMedica.h"
#include "AtencionPeluqueria.h"

#include "Clientes.h"
#include "Mascota.h"

class Reserva
{
protected:
	int idReserva;
	Atencion* atencion1;
	Cliente* cliente;
	Mascota* mascota;
public:
	Reserva(int idReserva, Atencion* atencion1, Cliente* cliente, Mascota* mascota);
	Reserva(int idReserva);
	~Reserva();
	int getIdReserva();
	void mostrar();
	static void mostrar(Reserva* Reserva);
	bool operator==(Reserva* Reserva);
	static bool cmpIdReserva(Reserva* p1, Reserva* p2);
	virtual string toString() = 0;
};



