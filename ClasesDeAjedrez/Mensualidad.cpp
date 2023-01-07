#include "Mensualidad.h"

Mensualidad::Mensualidad(string mes)
{
	this->mes = mes;
	ind = 0;
}

Mensualidad::~Mensualidad()
{

}

void Mensualidad::registrarClase(string pasar, int tiempo, Persona* estudiante)
{
	if (ind < CANT_CLASES_MES)
	{
		clases[ind] = new Clase(pasar,tiempo,estudiante);
		ind++;
	}
	else
	{
		cout << "Error, limite de clases excedido!" << endl;
	}
}

int Mensualidad::sumarHoras()
{
	int a=0;
	for (int i = 0; i < ind; i++)
	{
		if (clases[i]->pasoClases() == "si")
		{
			a = a + clases[i]->tiempoPasado();
		}
	}
	return a;
}

void Mensualidad::mostrar()
{
	int a;
	cout << "-----Mensualidad----" << endl;
	cout << "mes: " << mes << endl;
	cout << "cant clases pasadas: " << ind << endl;
	a = sumarHoras();
	cout << "tiempo pasado: " <<a<<" horas"<<endl;
}

void Mensualidad::mostrarCadaClase()
{
	for (int i = 0; i < ind; i++)
	{
		clases[i]->mostrar(i);
	}
}


string Mensualidad::getNombre()
{
	return mes;
}


