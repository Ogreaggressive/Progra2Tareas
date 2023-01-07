#pragma once

#include "Curso.h"

class ModCursos
{
private:
	Curso** cursos;
	int cantMaxCursos;
	int ind;
public:
	ModCursos(int cantMaxCursos);
	~ModCursos();
	void registrar(string nombreCurso, Persona* profesor);
	void mostrar();
	Curso* buscar(string nombreCurso);
};





