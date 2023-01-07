// Desespero.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Grande.h"

void test1()
{

}

void test2()
{

}

int main()
{
    Grande grande1 = Grande("grande");
    grande1.agregarPequenio1(11111,"nombre1");
    grande1.agregarPequenio1(11112,"nombre2 pequenio1");
    grande1.agregarPequenio2(22222,12345, "nombre2");
    grande1.agregarPequenio2(22221,12345,"nombre2 pequenio2");
    grande1.mostrar();

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
