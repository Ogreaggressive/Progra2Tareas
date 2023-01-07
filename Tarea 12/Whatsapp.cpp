#include "Whatsapp.h"

Whatsapp::Whatsapp() :Usuarios(TAM_MAX_USUARIOS)
{

}

Whatsapp::~Whatsapp()
{

}

ArrayGenerico<Usuario>& Whatsapp::getUsuarios()
{
	return Usuarios;
}
