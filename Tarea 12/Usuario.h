#pragma once

#include <sstream>
#include <iostream>
#include <string>

#include "Mensaje.h"
#include "Chat.h"

using namespace std;

class Usuario
{
private:
	int ci;
	string nombre;
	long fono;
	Chat** chats;
	int ind;
public:
	Usuario(int ci);
	Usuario(long fono, string nombre);
	Usuario(int ci, string nombre, long fono);
	~Usuario();
	int getCi();
	string getNombre();
	void mostrar();
	static void mostrar(Usuario* usuario);
	bool operator==(Usuario* usuario);
	static bool cmpCiAsc(Usuario* u1, Usuario* u2);
	string toString();
	void enviarMensaje(Mensaje* m1, long fono);
	void recibirMensaje(Mensaje* m1);
	void ordenar();
	int buscar(long fono);
};



