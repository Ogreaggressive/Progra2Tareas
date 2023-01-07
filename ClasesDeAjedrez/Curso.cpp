#include "Curso.h"

Curso::Curso(string nombreCurso, Persona* profesor)
{
	this->nombreCurso = nombreCurso;
	this->profesor = profesor;
	indEst = 0; 
}

Curso::~Curso()
{

}


void Curso::registrarEstudiante(int ci, string nombre, string nivel)
{
	if (indEst < CANT_MAX_ESTUDIANTES && nivel==nombreCurso)
	{
		estudiante[indEst] = new Persona(ci, nombre, nivel);
		indEst++;
	}
	else if (nivel != nombreCurso)
	{
		cout << "el estudiante no pertenece a este nivel" << endl;
	}
	else
	{
		cout << "Error, limite de estudiantes excedido!" << endl;
	}
}

void Curso::mostrarEstudiantes()
{
	for (int i = 0; i < indEst; i++)
	{
		cout << "------estudiante " << i + 1 << "--------" << endl;
		estudiante[i]->mostrar();
	}
}


void Curso::mostrar()
{
	cout << "abriendo el curso: " << nombreCurso << endl;
	cout << "los estudiantes inscritos en el curso son: " << endl;
	mostrarEstudiantes();
	cout << "el profesor a cargo del curso es: " << endl;
	profesor->mostrar();
}


string Curso::getNombre()
{
	return nombreCurso;
}

