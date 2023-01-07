#pragma once

#include <iostream>
using namespace std;

class InexistenteException : public exception
{
public:
	const char* what() const throw ()
	{
		return "Cliente inexistente";
	}
};
