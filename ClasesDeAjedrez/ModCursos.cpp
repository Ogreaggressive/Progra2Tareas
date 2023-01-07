#include "ModCursos.h"

ModCursos::ModCursos(int cantMaxCursos)
{
	cursos = new Curso * [cantMaxCursos];
	this->cantMaxCursos = cantMaxCursos;
	ind = 0;
}

ModCursos::~ModCursos()
{
	for (int i = 0; i < ind; i++)
	{
		delete cursos[i];
	}
	delete[] cursos;
}

void ModCursos::registrar(string nombreCurso, Persona* profesor)
{
	if (ind < cantMaxCursos)
	{
		cursos[ind] = new Curso(nombreCurso,profesor);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

Curso* ModCursos::buscar(string nombreCurso)
{
	for (int i = 0; i < ind; i++)
	{
		if (cursos[i]->getNombre() == nombreCurso)
		{
			return cursos[i];
		}
	}
}

void ModCursos::mostrar()
{
	cout << "------Cursos-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "Curso " << i + 1 << endl;
		cursos[i]->mostrar();
	}
}








