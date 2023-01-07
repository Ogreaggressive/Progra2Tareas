// tarea2Parte2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


#define T 100
using namespace std;


/////////////////////ejercicio11
void reservar11(int*** mat, int n)
{
    *mat = new int* [n];
    for (int i = 0; i < n; i++)
    {
        (*mat)[i] = new int[i+1];
    }
}

void mostrar11(int** mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}


void liberarMatriz(int** mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        delete[] mat[i];
    }

    delete[] mat;
}

void llenarVector(int* vec, int tam, int valorIni)
{
    for (int i = 0; i < tam; i++)
    {
        vec[i] = valorIni;
        valorIni++;
    }
}

void llenarMatriz(int** mat,int n)
{
    if (n > 0)
    {
        llenarVector(mat[n-1], n, n);
        llenarMatriz(mat, n - 1);
    }
}


/////////////////////ejercicio12
void reservar(int*** mat, int n)
{
    *mat = new int* [n];
    for (int i = 0; i < n; i++)
    {
        (*mat)[i] = new int[n];
    }
}

void mostrar12(int** mat, int n)
{
    int subida = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < subida; j++)
        {
            cout << mat[i][j] << " ";
        }
        if (i < (n / 2))
        {
            subida += 1;
        }
        else
        {
            subida -= 1;
        }
        cout << endl;
    }
}


void llenarArrayDerAIzq(int* vec, int n, int posIni, int valorIni)
{
    for (int i = posIni; i >= 0; i--)
    {
        vec[i] = valorIni;
        valorIni++;
    }
}

void ejercicio12(int** mat, int n,int aumento)
{
    if (aumento<n/2+1)
    {
        llenarArrayDerAIzq(*(mat + aumento), n, aumento, 1);
        llenarArrayDerAIzq(*(mat + n - aumento - 1), n, aumento, 1);
        ejercicio12(mat,n,aumento+1);
    }
}

/////////////////////ejercicio13

void llenarMatriz13(int** mat, int n, int aumento)
{
    if (aumento <= n)
    {
        llenarVector(mat[aumento-1], (aumento)/2+1, aumento);
        llenarMatriz13(mat, n,aumento+1);
    }
}

void mostrar13(int** mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i+1)/2+1; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

/////////////////////ejercicio15

void llenarVector15(int* vec, int tam, int valorIni)
{
    int suma = 1;
    for (int i = 0; i < tam; i++)
    {
        vec[i] = suma;
        if (i + 1 < valorIni)
        {
            suma += 1;
        }
    }
}

void llenarMatriz15(int** mat, int n, int m,int aumento)
{
    if (aumento <= n)
    {
        if (aumento - 1 < m)
        {
            llenarVector15(mat[aumento - 1], n, aumento);
        }
        else
        {
            llenarVector15(mat[aumento - 1], m, aumento);
        }
        llenarMatriz15(mat, n,m, aumento + 1);
    }
}

void mostrar15(int** mat, int n, int m)
{
    int aumento = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-aumento; j++)
        {
            cout << mat[i][j] << " ";
        }
        if (m==i+1)
        {
            aumento = m-1;
        }
        cout << endl;
    }
}

/////////////////////ejercicio16
void llenarVector16(int* vec, int tam, int valorIni)
{
    int a = valorIni;
    for (int i = 0; i < tam; i++)
    {
        vec[i] = valorIni;
        if (a==1)
        {
            valorIni += 1;
        }
        else
        {
            valorIni -= 1;
        }
    }
}

void llenarMatriz16(int** mat, int n, int aumento)
{
        if (aumento <= n/2+1)
        {
            llenarVector16(mat[aumento - 1], n / 2 + 2 - aumento, aumento);
            llenarMatriz16(mat, n, aumento + 1);
        }   
}

void llenarMatrizAbajo16(int** mat, int n, int aumento, int suma)
{
   if (suma<n-2)
    {
        llenarVector16(mat[suma+n/2],suma+1, aumento);
        llenarMatrizAbajo16(mat, n, aumento - 1, suma+1);
    }
}

void mostrar16(int** mat, int n)
{
    int aumento = n-2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < aumento; j++)
        {
            cout << mat[i][j] << " ";
        }
        if (i < n / 2)
        {
            aumento -= 1;
        }
        else
        {
            aumento += 1;
        }
        cout << endl;
    }
}

//para ver abrir llave por llave y cerrar los otros.
int main()
{
    int n, aumento,suma;
    int** mat;
    cout << "ingrese n:" << endl;
    cin >> n;
    //ejercicio 11
    /*
    reservar11(&mat, n);
    llenarMatriz(mat, n);
    mostrar11(mat, n);
    liberarMatriz(mat, n);
    */

    //ejercicio 12
    /*
    aumento=0;
    reservar(&mat, n);
    ejercicio12(mat, n,aumento);
    mostrar12(mat, n);
    liberarMatriz(mat, n);
    */

    //ejercicio13
    /*
    aumento = 1;
    reservar(&mat, n);
    llenarMatriz13(mat, n,aumento);
    mostrar13(mat,n);
    liberarMatriz(mat, n);
    */

    //ejercicio 14 igual al ejercicio 2

    //ejercicio 15
    /*
    aumento = 1;
    int m;
    cout << "ingrese m:" << endl;
    cin >> m;
    reservar(&mat, n);
    llenarMatriz15(mat, n,m,aumento);
    mostrar15(mat, n,m);
    liberarMatriz(mat, n);
    */

    //ejercicio 16
    /*
    //este ejercicio solo funciona con N=5, no entendi como se veria la figura con otros numeros 
    aumento = 1;
    suma = 1;
    reservar(&mat, n);
    llenarMatriz16(mat, n,aumento);
    llenarMatrizAbajo16(mat,n,n/2,suma);
    mostrar16(mat, n);
    liberarMatriz(mat, n);
    */

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
