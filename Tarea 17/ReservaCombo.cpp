#include "ReservaCombo.h"

ReservaCombo::ReservaCombo(int idReserva, Atencion* atencion1, Atencion* atencion2, Cliente* cliente, Mascota* mascota) : Reserva(idReserva, atencion1, cliente, mascota)
{
	this->atencion2 = atencion2;
}

ReservaCombo::ReservaCombo(int idReserva) : Reserva(idReserva)
{

}

ReservaCombo::~ReservaCombo()
{

}

void ReservaCombo::mostrar()
{
	cout << "---ReservaCombo---" << endl;
	Reserva::mostrar();
	//cout << "peso: " << peso << endl;
}

string ReservaCombo::toString()
{
	stringstream ss;
	ss << "{ReservaCombo:";
	ss << "{id:" << idReserva;
	ss << ",cliente:" << cliente->toStringMen();
	ss << ",";
	ss << "mascota:" << mascota->toString();
	ss << "},";
	ss << "atencion1:" << atencion1->toString();
	ss << ",";
	ss << "atencion2:" << atencion2->toString();
	ss << "}";
	return ss.str();
}











