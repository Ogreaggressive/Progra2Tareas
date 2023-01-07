// SistemaInformaticoUniversidad.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Universidad.h"
/*
void RegistrarEstudiantes()
{
    ModPersona** estudiantes = new ModPersona * [3];
    estudiantes[0].registrar(1,"Juan");
    
}*/

void prueba()
{
    Universidad Cato("Cato");
    Cato.getModuloAsignaturas().registrar("Programacion II");
    Cato.getModuloAsignaturas().registrar("Fisica");
    //Asignatura* ProgramacionII = Cato.getModuloAsignaturas().buscar("Programacion II");
    Cato.getModuloAsignaturas().mostrar();
}

void prueba2()
{
    Universidad Cato("Cato");
    Cato.getModuloPersonas().registrar(12345,"nicolas");
    Cato.getModuloPersonas().registrar(12445, "lel");
    Cato.getModuloPersonas().mostrar();
}

void mostrarMaterias()
{
    Universidad Cato("Cato");
    Cato.getModuloAsignaturas().registrar("Programacion II");
    Cato.getModuloAsignaturas().registrar("Fisica");
    Cato.getModuloAsignaturas().registrar("ingles");
    Cato.getModuloAsignaturas().registrar("Base de Datos");
    Cato.getModuloAsignaturas().mostrar();
}

void prueba3()
{
   // Universidad Cato("Cato");
    //Cato.getModuloAsignaturas().registrar("Programacion II");
    Asignatura programacionII("Programacion II");
    programacionII.registrarParalelo();
    programacionII.mostrar();
}

void paralelos()
{
    Paralelo paralelo1(1);
}

int main()
{
    paralelos();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
