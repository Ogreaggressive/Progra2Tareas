// tarea 1 ejercicio 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define T 100

using namespace std;

void mostrarMatriz(int matriz[T][T], int n)
{
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cout << matriz[x][y] << "   ";
        }
        cout << endl;
    }
}


void ejercicioA(int matriz[T][T],int n)
{
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (y % 2 != 0)
            {
                matriz[x][y] = n*(y+1) -x;
            }
            else
            {
                matriz[x][y] = n*y +x+1;
            }
        }
    }

}

void ejercicioB(int matriz[T][T], int n)
{
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (y % 2 != 0)
            {
                matriz[y][x] = n * (y + 1) - x;
            }
            else
            {
                matriz[y][x] = n * y + x + 1;
            }
        }
    }
}

void ejercicioC(int matriz[T][T], int n)
{
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
                matriz[x][y] = n * (n-y) - x;
        }
    }
}

void ejercicioD(int matriz[T][T], int n) //para despues
{
    int suma=1,cont=0,fila=0;
    int retroceso = 1;
        for (int x = 0; x < n; x++)
        {
            matriz[x][0] = suma;
            suma += 1;
            while (cont > 0)
            {
                matriz[x - retroceso][retroceso]=suma;
                retroceso += 1;
                suma += 1;
                cont -= 1; 
            }
            fila += 1;
            retroceso = 1;
            cont=fila;
        }
        cont = n-2,fila=n-2;
        for (int x = 1; x < n; x++)
        {
            matriz[n - 1][x] = suma;
            suma += 1;
            while (cont > 0)
            {
                matriz[n-1-retroceso][retroceso+x] = suma;
                retroceso += 1;
                suma += 1;
                cont -= 1;
            }
            fila -= 1;
            retroceso = 1;
            cont = fila;
        }
}

void ejercicioE(int matriz[T][T], int n)
{
    int suma = 1;
    int tamanio = 0;
    int cambio = 0;
    while (suma <= n * n)
    {
        for (int x = 0+tamanio; x < n - tamanio; x++)
        {
            matriz[x][cambio] = suma;
            suma += 1;
        }
        tamanio += 1;
        for (int x = 0+tamanio-1; x < n - tamanio; x++)
        {
            matriz[n - 1-cambio][x + 1] = suma;
            suma += 1;
        }
        for (int x = 0 + tamanio; x < n - tamanio; x++)
        {
            matriz[n - 1 - x][n - 1-cambio] = suma;
            suma += 1;
        }
        for (int x = 0 + tamanio; x < n - tamanio+1 ; x++)
        {
            matriz[cambio][n - x] = suma;
            suma += 1;
        }
        cambio += 1;
    }
}

void ejercicioF(int matriz[T][T], int n) //solo da con numeros impares
{
    int suma = 2;
    int tamanio=3;
    int cambio=0;
    matriz[n / 2][n / 2] = 1;
    while (suma <= n * n)
    {
        for (int x = 0; x < tamanio; x++)
        {
            matriz[(n / 2) - 1+x-cambio][n / 2 - 1-cambio] = suma;
            suma += 1;
        }
        for (int x = 1; x < tamanio; x++)
        {
            matriz[(n / 2) + 1 +cambio][n / 2 - 1+x-cambio] = suma;
            suma += 1;
        }
        for (int x = 1; x < tamanio; x++)
        {
            matriz[(n / 2) + 1-x+cambio][n / 2 + 1+cambio] = suma;
            suma += 1;
        }
        for (int x = 1; x < tamanio-1; x++)
        {
            matriz[(n / 2) - 1-cambio][n / 2 + 1-x+cambio] = suma;
            suma += 1;
        }
        tamanio += 2;
        cambio += 1;
    }


}

void ejercicioG(int matriz[T][T], int n)
{
    int aumento = 1;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            matriz[x+y][x] = aumento;
            matriz[x][x+y] = aumento;
        }
        aumento += 1;
    }
}

void ejercicioH(int matriz[T][T], int n)
{
    int aumento = 1, inicio=1;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            matriz[x][y] = aumento;
            aumento += 1;
        }
        inicio += 1;
        aumento =inicio;
    }
}

void ejercicioI(int matriz[T][T], int n) //solo da con numeros impares
{
    int aumento = 1, inicio = 1;
    bool Sumar = true;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            matriz[x][y] = aumento;
            if (Sumar == true)
            {
                aumento += 1;
            }
            else
            {
                aumento -= 1;
            }
            if (aumento == 1)
            {
                Sumar = !Sumar; 
            }
        }
        Sumar = !Sumar;
        if (y<n-1-n/2)
        {
            inicio += 1;
        }
        else
        {
            inicio -= 1;
        }  
        aumento = inicio;
        if (inicio == 1)
        {
            Sumar = true;
        }
    }
}

int main()
{
    int matriz[T][T];
    int n;
    cout << "elija el tamanio con cual trabajaremos todos los ejercicios" << endl;
    cin >> n;
    ejercicioA(matriz, n);
    mostrarMatriz(matriz, n);
    cout << endl;
    ejercicioB(matriz, n);
    mostrarMatriz(matriz, n);
    cout << endl;
    ejercicioC(matriz, n);
    mostrarMatriz(matriz, n);
    cout << endl;
    ejercicioD(matriz, n);
    mostrarMatriz(matriz, n);
    cout << endl;
    ejercicioE(matriz, n);
    mostrarMatriz(matriz, n);
    cout << endl;
    ejercicioF(matriz, n);
    mostrarMatriz(matriz, n);
    cout << endl;
    ejercicioG(matriz, n);
    mostrarMatriz(matriz, n);
    cout << endl;
    ejercicioH(matriz, n);
    mostrarMatriz(matriz, n);
    cout << endl;
    ejercicioI(matriz, n);
    mostrarMatriz(matriz, n);
    
    return 0;
}

