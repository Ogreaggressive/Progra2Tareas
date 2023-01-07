#include "SingletonEstudiantes.h"


SingletonEstudiantes::SingletonEstudiantes()
{

}

SingletonEstudiantes::~SingletonEstudiantes()
{

}

ListaGenerica<Estudiante>& SingletonEstudiantes::getEstudiantes()
{
	return estudiantes;
}

SingletonEstudiantes& SingletonEstudiantes::getInst()
{
	static SingletonEstudiantes instancia;
	return instancia;
}

void SingletonEstudiantes::registrar(Estudiante* e1)
{
	estudiantes.registrar(e1);
}


void SingletonEstudiantes::ordenar()
{
	estudiantes.ordenar(Estudiante::compCiAsc);
}

void SingletonEstudiantes::mostrar()
{
	estudiantes.mostrar(Estudiante::mostrar);
}

Estudiante* SingletonEstudiantes::buscar(int ci)
{
	Estudiante* c1 = new Estudiante(ci);
	return estudiantes.buscar(c1);
}

