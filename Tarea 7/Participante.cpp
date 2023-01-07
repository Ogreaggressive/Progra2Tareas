#include "Participante.h"

Participante::Participante(string codReg)
{
	this->codReg = codReg;
}

Participante::~Participante()
{

}

string Participante::getcodReg()
{
	return codReg;
}

void Participante::mostrar()
{
	cout << "codigo Registro: " << codReg << endl;
}
