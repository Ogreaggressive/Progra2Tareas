#include "Persona.h"

Persona::Persona(string codigo, string nombre, int fono, string direccion, int cantMaxCuentas,int CI) : Cliente(codigo,nombre,fono,direccion,cantMaxCuentas)
{
	this->CI = CI;
}

Persona::~Persona()
{

}

void Persona::mostrar()
{
	cout << "---Persona---" << endl;
	Cliente::mostrar();
	cout << "CI: " << CI << endl;
}
