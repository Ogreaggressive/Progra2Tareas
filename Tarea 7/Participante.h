#pragma once

#include <iostream>
#include <string>

using namespace std;

class Participante
{
protected:
	string codReg;
public:
	Participante(string codReg);
	~Participante();
	string getcodReg();
	void mostrar();
};

