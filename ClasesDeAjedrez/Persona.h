#pragma once

#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
	int ci;
	string nombre;
	string nivel;
public:
	Persona(int ci, string nombre, string nivel);
	~Persona();
	int getCi();
	string getNombre();
	string getNivel();
	void mostrar();
	void aumentarPuntaje(int num);

};




