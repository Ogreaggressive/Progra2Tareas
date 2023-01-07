#include "Reserva.h"

Reserva::Reserva(int idReserva, Atencion* atencion1, Cliente* cliente, Mascota* mascota)
{
	this->idReserva = idReserva;
	this->atencion1 = atencion1;
	this->cliente = cliente;
	this->mascota = mascota;
}

Reserva::Reserva(int idReserva)
{
	this->idReserva = idReserva;
}

Reserva::~Reserva()
{

}

int Reserva::getIdReserva()
{
	return idReserva;
}


void Reserva::mostrar()
{
	//cout << "Reserva:" << endl;
	/*cout << "id:" << idReserva << endl;
	cout << "codigoAtencion:" << codigoAtencion << endl;
	cout << "ciCliente:" << ciCliente << endl;*/

}


void Reserva::mostrar(Reserva* Reserva)
{
	Reserva->mostrar();
}

bool Reserva::operator==(Reserva* Reserva)
{
	if (idReserva == Reserva->idReserva)
	{
		return true;
	}
	return false;
}

bool Reserva::cmpIdReserva(Reserva* p1, Reserva* p2)
{
	return p1->idReserva > p2->idReserva;
}


