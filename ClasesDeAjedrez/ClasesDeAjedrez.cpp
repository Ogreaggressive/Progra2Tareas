

#include "Asociacion.h"

void registrarPersona()
{
    Asociacion asociacion(10, 3);
    asociacion.getModPersonas()->registrar(1, "juan", "basico");
    asociacion.getModPersonas()->registrar(2, "pedro", "basico");
    asociacion.getModPersonas()->registrar(3, "daniel", "intermedio");
    asociacion.getModPersonas()->registrar(4, "jose", "avanzado");
    asociacion.getModPersonas()->mostrar();
}

void registrarCurso()
{
    Asociacion asociacion(10, 3);
    asociacion.getModPersonas()->registrar(212141, "pedro", "basico");
    Persona* profesorBasico = asociacion.getModPersonas()->buscar("pedro");
    asociacion.getModCursos()->registrar("basico", profesorBasico);
    Curso* cursoBasico = asociacion.getModCursos()->buscar("basico");
    cursoBasico->registrarEstudiante(1, "juan", "basico");
    cursoBasico->registrarEstudiante(2, "nicolas", "basico");
    cursoBasico->registrarEstudiante(3, "pablo", "basico");
    asociacion.getModCursos()->mostrar();
}

void prueba()
{
    Asociacion asociacion(10, 3);
    asociacion.getModPersonas()->registrar(1, "juan", "basico");
    Persona* estudiante1 = asociacion.getModPersonas()->buscar("juan");
    asociacion.getModMensualidades()->registrar("enero");
    Mensualidad* enero = asociacion.getModMensualidades()->buscar("enero");
    enero->registrarClase("si",1,estudiante1);
    enero->registrarClase("no", 1, estudiante1);
    enero->registrarClase("si", 2, estudiante1);
    enero->registrarClase("no", 1, estudiante1);
    enero->registrarClase("si", 3, estudiante1);
    asociacion.getModMensualidades()->mostrar();
}


int main()
{
    //registrarPersona();
    //registrarCurso();
    prueba();
    return 0;
}

