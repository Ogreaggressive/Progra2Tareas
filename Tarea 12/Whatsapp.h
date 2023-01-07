#pragma once

#include "Usuario.h"
#include "ArrayGenerico.h"

#define TAM_MAX_USUARIOS 10

class Whatsapp
{
private:
	ArrayGenerico<Usuario> Usuarios;
public:
	Whatsapp();
	~Whatsapp();
	ArrayGenerico<Usuario>& getUsuarios();
};



