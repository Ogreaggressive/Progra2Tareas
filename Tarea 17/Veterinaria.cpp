#include "Veterinaria.h"

Veterinaria::Veterinaria()
{

}

Veterinaria::~Veterinaria()
{

}

void Veterinaria::registrarAtencion(AtencionMedica* m1)
{
	Atencion* t1 = m1;
	atenciones.registrar(t1);
}

void Veterinaria::registrarAtencion(AtencionPeluqueria* m1)
{
	Atencion* t1 = m1;
	atenciones.registrar(t1);
}

string Veterinaria::toString()
{
	stringstream ss;
	ordenar();
	Nodo<Atencion>* aux = atenciones.getPrimer();
	ss << "{atenciones:[";
	for (int i = 0; i < atenciones.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != atenciones.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]";
	if (reservas.getPrimer() != NULL)
	{
		reservas.ordenar(Reserva::cmpIdReserva);
	}
	Nodo<Reserva>* aux2 = reservas.getPrimer();
	ss << ",reservas:[";
	for (int i = 0; i < reservas.getTam(); i++)
	{
		ss << aux2->getDato()->toString();
		aux2 = aux2->getSiguiente();
		if (i != reservas.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void Veterinaria::ordenar()
{
	atenciones.ordenar(Atencion::cmpCodigo);
}

void Veterinaria::registrarReservaSimple(int idReserva, int codigoAtencion, int ciCliente, string nombreMascota)
{
	Atencion* atencionABuscar = new AtencionMedica(codigoAtencion);

	if (atenciones.buscar(atencionABuscar) == NULL)
	{
		throw InexistenteAtencionException(codigoAtencion);
	}

	Atencion* atencionEncontrada = atenciones.buscar(atencionABuscar);


	Cliente* c1 = Clientes::getInst().buscar(ciCliente);

	Mascota* mascotaABuscar = new Mascota(nombreMascota);

	if (c1->getMascotas().buscar(mascotaABuscar) == NULL)
	{
		throw InexistenteMascotaException(nombreMascota);
	}
	Mascota* m1 = c1->getMascotas().buscar(mascotaABuscar);

	Reserva* r1 = new ReservaSimple(idReserva,atencionEncontrada,c1,m1);
	reservas.registrar(r1);
}

void Veterinaria::registrarReservaCombo(int idReserva, int codigoAtencion1,int codigoAtencion2, int ciCliente, string nombreMascota)
{
	Atencion* atencionABuscar = new AtencionMedica(codigoAtencion1);
	Atencion* atencionEncontrada1 = atenciones.buscar(atencionABuscar);
	Atencion* atencionABuscar2 = new AtencionMedica(codigoAtencion2);
	Atencion* atencionEncontrada2 = atenciones.buscar(atencionABuscar2);

	Cliente* c1 = Clientes::getInst().buscar(ciCliente);

	Mascota* mascotaABuscar = new Mascota(nombreMascota);
	Mascota* m1 = c1->getMascotas().buscar(mascotaABuscar);

	Reserva* r1 = new ReservaCombo(idReserva, atencionEncontrada1,atencionEncontrada2, c1, m1);
	reservas.registrar(r1);
}