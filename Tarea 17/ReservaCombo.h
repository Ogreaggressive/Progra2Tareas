#pragma once
#include "Reserva.h"
class ReservaCombo :
    public Reserva
{
private:
    Atencion* atencion2;
public:
    ReservaCombo(int idReserva, Atencion* atencion1, Atencion* atencion2,Cliente* cliente, Mascota* mascota);
    ReservaCombo(int idReserva);
    ~ReservaCombo();
    void mostrar();
    string toString();
};



