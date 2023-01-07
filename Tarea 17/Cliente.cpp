#include "Cliente.h"

Cliente::Cliente(int ci, string nombre, int fono)
{
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
}

Cliente::Cliente(int ci)
{
	this->ci = ci;
}


Cliente::~Cliente()
{

}

int Cliente::getCi()
{
	return ci;
}

string Cliente::getNombre()
{
	return nombre;
}

void Cliente::mostrar()
{
	//cout << "Cliente:" << endl;
	cout << "nombre: " << nombre << endl;
}


void Cliente::mostrar(Cliente* cliente)
{
	cliente->mostrar();
}

bool Cliente::operator==(Cliente* cliente)
{
	if (ci == cliente->ci)
	{
		return true;
	}
	return false;
}

bool Cliente::compCiAsc(Cliente* p1, Cliente* p2)
{
	return p1->ci > p2->ci;
}

bool Cliente::compNomAsc(Cliente* p1, Cliente* p2)
{
	return p1->nombre > p2->nombre;
}

string Cliente::toString()
{
	stringstream ss;
	ss <<"{ci:"<< ci<<",nombre:"<<nombre<<",fono:"<<fono;
	ordenar();
	Nodo<Mascota>* aux = mascotas.getPrimer();
	ss << ",mascotas:[";
	for (int i = 0; i < mascotas.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != mascotas.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

string Cliente::toStringMen()
{
	stringstream ss;
	ss << "{ci:" << ci << ",nombre:" << nombre << ",fono:" << fono;
	ss << "}";
	return ss.str();
}


ListaGenerica<Mascota>& Cliente::getMascotas()
{
	return mascotas;
}

void Cliente::ordenar()
{
	mascotas.ordenar(Mascota::compNomAsc);
}