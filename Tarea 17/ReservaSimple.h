#pragma once
#include "Reserva.h"
class ReservaSimple :
    public Reserva
{
private:

public:
    ReservaSimple(int idReserva, Atencion* atencion1, Cliente* cliente, Mascota* mascota);
    ReservaSimple(int idReserva);
    ~ReservaSimple();
    void mostrar();
    string toString();
};

