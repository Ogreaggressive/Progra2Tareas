#include "Usuario.h"

Usuario::Usuario(int ci)
{
	this->ci = ci;
}

Usuario::Usuario(int ci, string nombre, long fono)
{
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
	ind = 0;
}

Usuario::Usuario(long fono, string nombre)
{
	chats = new Chat * [10]; //prueba
	this->nombre = nombre;
	this->fono = fono;
	ind = 0;
}

Usuario::~Usuario()
{
	for (int i = 0; i < ind; i++)
	{
		delete chats[i];
	}
	delete[] chats;
}

int Usuario::getCi()
{
	return ci;
}

string Usuario::getNombre()
{
	return nombre;
}

void Usuario::mostrar()
{
	cout << "Usuario:" << endl;
	//cout << "Ci: " << ci << endl;
	cout << "telefono: " << fono << endl;
	cout << "nombre: " << nombre << endl;
	cout << "chats:" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "telefono:" << chats[i]->getFono() << endl;
		cout << "mensajes:" << endl;
		chats[i]->mostrar();
	}
}

void Usuario::mostrar(Usuario* usuario)
{
	usuario->mostrar();
}


bool Usuario::operator==(Usuario* usuario)
{
	return ci == usuario->ci;
}

bool Usuario::cmpCiAsc(Usuario* u1, Usuario* u2)
{
	return u1->ci > u2->ci;
}

string Usuario::toString()
{
	stringstream ss;
	ss << "{telefono:" << fono << "nombre:" << nombre << "";
	ss << "{,chats:[";
	for (int i = 0; i < ind; i++)
	{

	}
	ss << "]}";
	return ss.str();
}

void Usuario::enviarMensaje(Mensaje *m1, long fono)
{
	bool nuevoTelefono=true;
	for (int i = 0; i < ind; i++)
	{
		if (m1->getFono() == chats[i]->getFono())
		{
			nuevoTelefono = false;
		}
	}
	if (nuevoTelefono == true)
	{
		chats[ind] = new Chat(fono);
		chats[ind]->aumentarMensaje(m1);
		ind++;
	}
	else
	{
		chats[buscar(fono)]->aumentarMensaje(m1);
	}
	
	
}

void Usuario::recibirMensaje(Mensaje* m1)
{
	bool nuevoTelefono = true;
	for (int i = 0; i < ind; i++)
	{
		if (m1->getFono() == chats[i]->getFono())
		{
			nuevoTelefono = false;
		}
	}
	if (nuevoTelefono == true)
	{
		chats[ind] = new Chat(m1->getFono());
		chats[ind]->aumentarMensaje(m1);
		ind++;
	}
	else
	{
		chats[buscar(fono)]->aumentarMensaje(m1);
	}
}

void Usuario::ordenar()
{
	long obj1, obj2;
	Chat* Pasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			obj1 = chats[i]->getFono();
			obj2 = chats[j]->getFono();
			if (obj1 > obj2)
			{
				Pasar = chats[i];
				chats[i] = chats[j];
				chats[j] = Pasar;
			}
		}
	}
}

int Usuario::buscar(long fono)
{
	for (int i = 0; i < ind; i++)
	{
		if (chats[i]->getFono() == fono)
		{
			return i;
		}
		else
		{
			return 0;
		}
	}
}