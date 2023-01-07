#include "Pintura.h"

Pintura::Pintura(int codigo,string titulo, string autor, int alto, int ancho) : Obra(codigo,titulo, autor)
{
	this->alto = alto;
	this->ancho = ancho;
}

Pintura::Pintura(int codigo) : Obra(codigo)
{

}

Pintura::~Pintura()
{

}

void Pintura::mostrar()
{
	cout << "---Pintura---" << endl;
	Obra::mostrar();
	cout << "alto: " << alto << endl;
	cout << "ancho: " << ancho << endl;
}

string Pintura::toString()
{
	stringstream ss;
	ss << "{tipo:pintura,";
	ss <<"id:"<<codigo <<",titulo:"<< titulo<<",autor:" << autor;
	ss << ",alto:" <<alto << ",ancho:" <<ancho << "}";
	return ss.str();
}






