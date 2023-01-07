#pragma once

#include <sstream>
#include <iostream>
using namespace std;

class InexistenteAtencionException : public exception
{
private:
	string mensaje;
public:
	InexistenteAtencionException(int numero) {
		stringstream ss;
		ss << "Atencion " << numero << " inexistente";
		mensaje = ss.str();
	}
	const char* what() const throw ()
	{
		return mensaje.c_str();
	}
};

