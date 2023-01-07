#include "Paquete.h"

Paquete::Paquete(int peso)
{
	this->peso = peso;
}

Paquete::Paquete(int peso, Persona* realizaEnvio, Persona* recibeEnvio)
{
	this->peso = peso;
	this->realizaEnvio = realizaEnvio;
	this->recibeEnvio = recibeEnvio;
}

Paquete::~Paquete()
{

}

int Paquete::getPeso()
{
	return peso;
}

void Paquete::mostrar()
{
	cout << "-------------------------Paquete:----" << endl;
	cout << "Ci: " << peso << endl;
	cout << "realizaEnvio:" << endl;
	realizaEnvio->mostrar();
	cout << "recibeEnvio: " << endl;
	recibeEnvio->mostrar();
}

void Paquete::mostrar(Paquete* Paquete)
{
	Paquete->mostrar();
}


bool Paquete::operator==(Paquete* Paquete)
{
	return peso == Paquete->peso;
}

bool Paquete::cmpPesoAsc(Paquete* p1, Paquete* p2)
{
	return p1->peso > p2->peso;
}



