// Tarea 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <conio.h>

#define T 100

using namespace std;

//ejercicios del examen

void gotoxy(short x, short y)
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

///////////////////////////////////////ejercicio 1
void flechaAbajo(int num)
{
    int posx, posy;
    for (int y = 0; y < num / 2 + 1; y++)
    {
        posy = 3 + num / 2 + 1 + y;
        posx = (num / 2 + 1) * 2 + ((num - 5) / 2);
        gotoxy(posx, posy); cout << "*";
    }
    for (int x = 0; x < num; x++)
    {
        posx = (x) * 2;
        gotoxy(posx + x, posy); cout << "*";
    }
    int cambio = 0;
    for (int y = 0; y < num / 2 + 1; y++)
    {
        for (int x = 0; x < num; x++)
        {
            posx = 2 * x;
            if (x == cambio || x == (num - cambio - 1))
            {
                gotoxy(posx + x, posy + y); cout << "*";
            }
        }
        cambio = cambio + 1;
    }
}


///////////////////////////////////////ejercicio 2
void crearVector(int vect[T], int num)
{
    for (int x = 0; x < num; x++)
    {
        vect[x] = x;
    }
}

void cambiarVector(int vect[T], int vectCambio[T], int num)
{
    for (int x = 0; x < num; x++)
    {
        vectCambio[0] = vect[num - 1];
        vectCambio[x + 1] = vect[x];
    }
}

void mostrarVector(int vect[T], int num)
{
    for (int x = 0; x < num; x++)
    {
        cout << vect[x];
    }
    cout << endl;
}


///////////////////////////////////////ejercicio 3

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

void ejercicio3(int matriz[T][T], int n) //para despues
{
    int suma = 1, cont = 0, fila = 0,retroceso=1,total;
    for (int x = 0; x < n; x++)
    {
        matriz[x][0] = suma+cont;
        suma += 1;
        total = suma + cont;
        while (cont > 0)
        {
            matriz[x - retroceso][retroceso] = total-1-retroceso;
            retroceso += 1;
            suma += 1;
            cont -= 1;
        }
        fila += 1;
        retroceso = 1;
        cont = fila;
    }
    cont = n - 2, fila = n - 2;
    for (int x = 1; x < n; x++)
    {
        matriz[n - 1][x] = suma+cont;
        suma += 1;
        total = suma + cont;
        while (cont > 0)
        {
            matriz[n - 1 - retroceso][retroceso + x] = total-1-retroceso;
            retroceso += 1;
            suma += 1;
            cont -= 1;
        }
        fila -= 1;
        retroceso = 1;
        cont = fila;
    }
}


///////////////////////////////////////ejercicio 4

int invertirNumero(int num)
{
    int numInv = 0, residuo;
    while (num != 0)
    {
        residuo = num % 10;
        numInv = numInv * 10 + residuo;
        num = num / 10;
    }
    return numInv;
}


int main()
{
    //variables
    int num1, num2, num3, num4, resp4;
    int matriz[T][T];
    ///////////////////////////////////////ejercicio 1
    /*
    cout << "ejercicio 1" << endl;
    cout << "escriba un numero impar" << endl;
    cin>>num1;
    flechaAbajo(num1);
    */
    ///////////////////////////////////////ejercicio 2
    /*
    int vect[T], vectCambio[T];
    cout << "ejercicio 2" << endl;
    cout << "escriba el tamanio del vector" << endl;
    cin >> num2;
    crearVector(vect, num2);
    cout << "vector inicial" << endl;
    mostrarVector(vect, num2);
    cambiarVector(vect, vectCambio, num2);
    cout << "vector final" << endl;
    mostrarVector(vectCambio, num2);
    */
    ///////////////////////////////////////ejercicio 3
    /*
    cout << "elija el tamano del vector:" << endl;
    cin >> num3;
    ejercicio3(matriz, num3);
    mostrarMatriz(matriz, num3);
    */
    ///////////////////////////////////////ejercicio 4
    /*
    cout << "ejercicio 4" << endl;
    cout << "escriba un numero" << endl;
    cin>>num4;
    resp4=invertirNumero(num4);
    cout<<resp4<<endl;
    */

    return 0;
}


