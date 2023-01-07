#pragma once

#include "Estudiante.h"

#include "ListaGenerica.h"

class SingletonEstudiantes
{
private:
	ListaGenerica<Estudiante> estudiantes;
public:
	static SingletonEstudiantes& getInst();
	~SingletonEstudiantes();
	ListaGenerica<Estudiante>& getEstudiantes();
	void registrar(Estudiante* e1);
	Estudiante* buscar(int ci);
	void ordenar();
	void mostrar();

private:
	SingletonEstudiantes();
};








