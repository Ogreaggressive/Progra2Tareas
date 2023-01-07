#include "AtencionPeluqueria.h"

AtencionPeluqueria::AtencionPeluqueria(int codigo, string descripcion, int costo, int duracion) : Atencion(codigo, descripcion, costo)
{
	this->duracion = duracion;
}

AtencionPeluqueria::AtencionPeluqueria(int codigo) : Atencion(codigo)
{

}

AtencionPeluqueria::~AtencionPeluqueria()
{

}

void AtencionPeluqueria::mostrar()
{
	cout << "---AtencionPeluqueria---" << endl;
	Atencion::mostrar();
	//cout << "peso: " << peso << endl;
}

string AtencionPeluqueria::toString()
{
	stringstream ss;
	ss << "{tipo:AtencionPeluqueria,";
	ss << "codigo:" << codigo << ",descripcion:" << descripcion << ",costo:" << costo;
	ss << ",duracion:" << duracion << "}";
	return ss.str();
}









