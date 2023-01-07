#include "Chat.h"

Chat::Chat(long fono)
{
	mensajes = new Mensaje*[CANT_MAX_MENSAJES];
	this->fono = fono;
	ind = 0;
}

Chat::~Chat()
{
	for (int i = 0; i < ind; i++)
	{
		delete mensajes[i];
	}
	delete[] mensajes;
}

void Chat::mostrar()
{
	//cout << "autor:" << fono << endl;
	for (int i = 0; i < ind; i++)
	{
		mensajes[i]->mostrar();
	}
}

long Chat::getFono()
{
	return fono;
}

void Chat::aumentarMensaje(Mensaje* mensaje)
{
	if (ind < CANT_MAX_MENSAJES)
	{
		mensajes[ind] = mensaje;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}