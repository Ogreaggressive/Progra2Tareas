#include "Competencia.h"

Competencia::Competencia(string nombreCompetencia)
{
	this->nombreCompetencia = nombreCompetencia;
	ind = 0;
}

Competencia::~Competencia()
{

}

void Competencia::registrarEquipo(string nombreEquipo, Socio* piloto, Socio* copiloto, Vehiculo* vehiculo)
{
	if (ind < CANT_MAX_EQUIPOS)
	{
		equipos[ind] = new Equipo(nombreEquipo,piloto,copiloto,vehiculo);
		ind++;
	}
	else
	{
		cout << "Error, limite de equipos excedido!" << endl;
	}
}

void Competencia::mostrarEquipos()
{
	for (int i = 0; i < ind; i++)
	{
		cout << "------equipo "<<i+1<<"--------"<< endl;
		equipos[i]->mostrar();
	}
}

void Competencia::mostrar()
{
	cout << "-----Competencia----" << endl;
	cout << "nombre: " << nombreCompetencia << endl;
	cout << "cant inscritos: " << ind <<endl;
	mostrarEquipos();
}

string Competencia::getNombre()
{
	return nombreCompetencia;
}

Equipo* Competencia::buscar(string nombre)
{
	for (int i = 0; i < ind; i++)
	{
		if (equipos[i]->getNombre() == nombre)
		{
			return equipos[i];
		}
	}
}

void Competencia::darPuntaje(int i, int puntajePiloto, int puntajeCopiloto)
{
	equipos[i]->darPuntaje(puntajePiloto,puntajeCopiloto);
}



void Competencia::equiposGanadores(string n1, string n2, string n3, string n4, string n5)
{
	for (int i = 0; i < ind; i++)
	{
		if (equipos[i]->getNombre() == n1)
		{
			darPuntaje(i, 50, 40);
		}
		if (equipos[i]->getNombre() == n2)
		{
			darPuntaje(i, 40, 30);
		}
		if (equipos[i]->getNombre() == n3)
		{
			darPuntaje(i, 30, 20);
		}
		if (equipos[i]->getNombre() == n4)

		{
			darPuntaje(i, 20, 10);
		}
		if (equipos[i]->getNombre() == n5)
		{
			darPuntaje(i, 10, 5);
		}
	}
}


void Competencia::ordenarPuntaje()
{
	int puntaje1,puntaje2;
	Equipo* equipoPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			puntaje1 = equipos[i]->getPuntaje();
			puntaje2 = equipos[j]->getPuntaje();
			if (puntaje1 < puntaje2)
			{
				equipoPasar = equipos[i];
				equipos[i] = equipos[j];
				equipos[j] = equipoPasar;
			}
		}
	}
}

void Competencia::ordenarVehiculoAsignado()
{
	int placa1, placa2;
	Equipo* equipoPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			placa1=equipos[i]->conseguirNumeroVehiculo();
			placa2 = equipos[j]->conseguirNumeroVehiculo();
			if (placa1 > placa2)
			{
				equipoPasar = equipos[i];
				equipos[i] = equipos[j];
				equipos[j] = equipoPasar;
			}
		}
	}
}
