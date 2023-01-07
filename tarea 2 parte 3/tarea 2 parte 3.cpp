// tarea 2 parte 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define T 100
using namespace std;


void mostrarMatriz(int mat[T][T], int x,int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void numerosEnMalla(int &num, int dirDer, int dirAbajo, int matriz[T][T],int posx,int posy)
{
    if (matriz[posx][posy]== 0)
    {
        num +=0;
    }
    else
    {
        num += 1;
        if (matriz[posx + dirDer][posy + dirAbajo] == 1)
        {
            num += 1;
        }
        else
        {
            if(dir)
        }
    }
}


int main()
{
    int n=0, aumento, suma;
    int** mat;
    int dirDer = 1;
    int dirAbajo = 1;
    int posx, posy;
   /* cout << "ingrese n:" << endl;
    cin >> n;*/
    int matriz[T][T] = { { 0,0,1,1,0,0,0,1 },
                         { 0,1,0,1,1,0,1,0 },
                         { 0,0,0,0,0,0,1,0 },
                         { 0,1,0,1,1,0,1,1 },
                         { 1,0,0,0,0,1,0,0 } };
    mostrarMatriz(matriz, 5, 8);
    cout << endl;
    numerosEnMalla(n, dirDer, dirAbajo, matriz, 0, 3);
    cout << n<<endl;

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
