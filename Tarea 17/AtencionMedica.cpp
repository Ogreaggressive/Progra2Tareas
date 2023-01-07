#include "AtencionMedica.h"

AtencionMedica::AtencionMedica(int codigo, string descripcion, int costo, string medicamentos) : Atencion(codigo, descripcion, costo)
{
	this->medicamentos = medicamentos;
}

AtencionMedica::AtencionMedica(int codigo) : Atencion(codigo)
{

}

AtencionMedica::~AtencionMedica()
{

}

void AtencionMedica::mostrar()
{
	cout << "---AtencionMedica---" << endl;
	Atencion::mostrar();
	//cout << "peso: " << peso << endl;
}

string AtencionMedica::toString()
{
	stringstream ss;
	ss << "{tipo:AtencionMedica,";
	ss << "codigo:" << codigo << ",descripcion:" << descripcion << ",costo:" << costo;
	ss << ",medicamentos:" << medicamentos<<"}";
	return ss.str();
}








