#include "ReservaSimple.h"

ReservaSimple::ReservaSimple(int idReserva, Atencion* atencion1, Cliente* cliente, Mascota* mascota) : Reserva(idReserva, atencion1,cliente,mascota)
{

}

ReservaSimple::ReservaSimple(int idReserva) : Reserva(idReserva)
{

}

ReservaSimple::~ReservaSimple()
{

}

void ReservaSimple::mostrar()
{
	cout << "---ReservaSimple---" << endl;
	Reserva::mostrar();
	//cout << "peso: " << peso << endl;
}

string ReservaSimple::toString()
{
	stringstream ss;
	ss << "{ReservaSimple:";
	ss << "{id:" << idReserva;
	ss<<",cliente:" << cliente->toStringMen();
	ss << ",";
	ss << "mascota:" <<mascota->toString();
	ss << "},";
	ss << "atencion:" <<atencion1->toString();
	ss << "}";
	return ss.str();
}










