#include "EntregaSoloTexto.h"

EntregaSoloTexto::EntregaSoloTexto(Estudiante* autor, int horaEntrega, string texto) :Entrega(autor, horaEntrega)
{
	this->texto = texto;
}

EntregaSoloTexto::~EntregaSoloTexto()
{

}

void EntregaSoloTexto::mostrar()
{
	cout << "EntregaSoloTexto" << endl;
	cout << "texto: " << texto << endl;
	Entrega::mostrar();
}
