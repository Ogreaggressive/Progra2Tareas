#pragma once

#include <sstream>
#include <iostream>
using namespace std;

class InexistenteMascotaException : public exception
{
private:
	string mensaje;
public:
	InexistenteMascotaException(string nombre) {
		stringstream ss;
		ss << "Mascota " << nombre << " inexistente";
		mensaje = ss.str();
	}
	const char* what() const throw ()
	{
		return mensaje.c_str();
	}
};

