#pragma once
#include "Mensaje.h"

#define CANT_MAX_MENSAJES 10

class Chat
{
private:
	long fono;
	Mensaje** mensajes;
	int ind;
public:
	Chat(long fono);
	~Chat();
	void mostrar();
	long getFono();
	void aumentarMensaje(Mensaje* mensaje);
};

