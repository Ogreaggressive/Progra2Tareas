#pragma once

#include "Persona.h"

#define CANT_MAX_ESTUDIANTES 30 //curso no puede tener mas que esto 

class Curso  //aun no esta implementado con el metodo de superclase y subtipos, por lo que se repiten algunas funciones
{
private:
	string nombreCurso;
	Persona* estudiante[CANT_MAX_ESTUDIANTES];
	Persona* profesor;
	int indEst;
public:
	Curso(string nombreCurso, Persona* profesor);
	~Curso();
	void mostrarEstudiantes();
	void mostrar();
	void registrarEstudiante(int ci, string nombre, string nivel);
	string getNombre();
};



