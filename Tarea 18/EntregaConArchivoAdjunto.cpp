#include "EntregaConArchivoAdjunto.h"

EntregaConArchivoAdjunto::EntregaConArchivoAdjunto(Estudiante* autor, int horaEntrega, string nombre, int peso) :Entrega(autor,horaEntrega)
{
	this->nombre = nombre;
	this->peso = peso;
}

EntregaConArchivoAdjunto::~EntregaConArchivoAdjunto()
{

}

void EntregaConArchivoAdjunto::mostrar()
{
	cout << "EntregaConArchivoAdjunto" << endl;
	cout << "nombre: " << nombre << endl;
	cout << "peso" << peso << endl;
	Entrega::mostrar();
}
