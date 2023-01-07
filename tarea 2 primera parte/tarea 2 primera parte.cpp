// tarea 2 primera parte.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> 
#include <windows.h>
#include <time.h>
#include <stdlib.h>

#define T 100

using namespace std;

//ejercicio1 
void numPerfecto(int n,int num,int &tot) //ejercicio 1
{
    if (n == 1)
    {
        tot = 1;
    }
    else
    {
        numPerfecto(n-1,num,tot);
        if (num % n == 0)
        {
            tot = tot + n;
        }
    }
}

void ejercicio1()
{
    int n, num, tot = 0;
    cout << "elija el numero para ver si es perfecto" << endl;
    cin >> num;
    n = num / 2;
    numPerfecto(n, num, tot);
    if (tot == num)
    {
        cout << "el numero es perfecto"<< endl;
    }
    else
    {
        cout << "el numero no es perfecto" << endl;
    }
}

//ejercicio 2
void numDecimalAHexadecimal(int num, int vectorHexadecimal[T], int pos)
{
    if (num <= 9)
    {
        vectorHexadecimal[pos] = num;
    }
    else
    {
        vectorHexadecimal[pos] = 97 + num - 10;
    }
}

void transformarDecAHex(int tamNum,int pos,int &division,int &residuo,int &num, int vectorHexadecimal[T])
{
    if (tamNum==0)
    {
        pos = 0;
    }
    else
    {
        division = num / 16;
        residuo = num % 16;
        numDecimalAHexadecimal(residuo,vectorHexadecimal,pos);
        num = division;
        transformarDecAHex(tamNum-1, pos+1, division, residuo, num, vectorHexadecimal); 
        pos += 1;
    }
    
}

void mostrarVectorHexadecimal(int vector[T],int tam)
{
    for (int n = tam-1; n >= 0; n--)
    {
        if (vector[n] > 90)
        {
            cout << char(vector[n]);
        }
        else if (vector[n]>0 && vector[n]<90)
        {
            cout << vector[n] << "";
        }
        if (vector[n] == 0 && n <tam-1)
        {
            cout << vector[n] << "";
        }
    }
    cout << endl;
}

void ejercicio2()
{
    int num,pos=0,division=0,residuo=0;
    int vectorHexadecimal[T];
    cout << "elija el numero para ver su forma hexadecimal" << endl;
    cin >> num;
    int size = trunc(log10(num)) + 1;
    transformarDecAHex(size, pos, division, residuo, num, vectorHexadecimal);
    mostrarVectorHexadecimal(vectorHexadecimal,size);
}

//ejercicio 3, ejercicio 4 y ejercicio 5
void llenarVectorConAleatorios(int vect[T], int tam, int maximo)
{
    for (int f = 0; f < tam; f++)
    {
            vect[f] = rand() % maximo;
    }
}
//parteDelEjercicio3
void sumaVectorEnteros(int vect[T], int& suma, int tam)
{
    if (tam == 0)
    {
        suma +=0;
    }
    else
    {
        suma = suma + vect[tam-1];
        sumaVectorEnteros(vect, suma, tam - 1);
    }
}
//parteDelEjercicio5
void invertirVectorEnteros(int vect[T], int vectInv[T],int tam,int aumento)
{
    if (tam == 0)
    {
        return;
    }
    else
    {
        vectInv[aumento] = vect[tam - 1];
        invertirVectorEnteros(vect,vectInv,tam - 1,aumento+1);
    }
}

void mostrarVector(int vector[T], int tam)
{
    for (int n = 0; n < tam; n++)
    {
            cout << vector[n] << " ";
    }
    cout << endl;
}

void ejercicio3Ejercicio4YEjercicio5()
{
    //variables e inicio del vector
    int vect[T],vectInv[T];
    int tam,maximo,suma=0,aumento=0;
    double prom;
    cout << "elija el tamanio maximo de los numeros dentro del vector y cuantos numeros quieres sumar" << endl;
    cin >> maximo;
    cin >> tam;
    llenarVectorConAleatorios(vect, tam, maximo);
    sumaVectorEnteros(vect, suma, tam);
    cout <<"suma: " <<suma<<endl;
    prom = suma/tam;
    cout << "promedio: " << prom<< endl; //no imprime decimales ??
    invertirVectorEnteros(vect,vectInv,tam,aumento);
    cout << "vector original" << endl;
    mostrarVector(vect, tam);
    cout << "vector invertido" << endl;
    mostrarVector(vectInv, tam);
    

}

//ejercicio6,7,9
//parteDelEjercicio6
void  buscarElemento(int vect[T], int tam, int num,int vectNumEncontrado[T],int &numEncontrado)
{
    if (tam == 0)
    {
        return;
    }
    else
    {
        if (vect[tam-1] == num)
        {
            vectNumEncontrado[numEncontrado]=tam-1;
            numEncontrado += 1;
        }
        buscarElemento(vect, tam - 1, num, vectNumEncontrado, numEncontrado);
    }
}

//parteDelEjercicio7
void buscarMenor(int vect[T], int tam, int &menor)
{
    if (tam == 0)
    {
        menor+=0;
    }
    else
    {
        if (vect[tam - 1] < menor)
        {
            menor = vect[tam - 1];
        }
        buscarMenor(vect, tam - 1, menor);
    }
}


//parteDelEjercicio9
bool numeroPalindromo(int vect[T],int vectInv[T],int tam)
{
    if (tam == 0)
    {
        return false;
    }
    else
    {
        if (vect[tam-1] == vectInv[tam-1])
        {
            return true;
        }
        numeroPalindromo(vect,vectInv,tam-1);
    }

}

void crearVector(int vect[T], int tam)
{
    for (int cont = 0; cont < tam; cont++)
    {
        cin >> vect[cont];
    }
}

void ejercicio6Ejercicio7Ejercicio8yEjercicio9()
{
    //variables e inicio del vector
    int vect[T], vectNumEncontrado[T], vectInv[T], vectPalindromo[T];
    int tam, maximo, num,menor, numEncontrado=0,aumento=0;
    bool palindromo;
    double prom;
    cout << "elija el tamanio maximo de los numeros dentro del vector y cuantos numeros quieres sumar" << endl;
    cin >> maximo;
    cin >> tam;
    cout << "elija el numero a buscar dentro de la matriz" << endl;
    cin >> num;
    llenarVectorConAleatorios(vect, tam, maximo);
    //ejercicio6
    buscarElemento(vect, tam, num, vectNumEncontrado, numEncontrado);
    if (numEncontrado == 0)
    {
        vectNumEncontrado[0] = -1;
        numEncontrado = 1;
    }
    cout << "vector original" << endl;
    mostrarVector(vect, tam);
    cout << "reiteraciones encontradas en posicion: " << endl;
    mostrarVector(vectNumEncontrado, numEncontrado);
    //ejercicio7
    menor = vect[0];
    buscarMenor(vect, tam, menor);
    cout <<"el numero menor encontrado es: "<< menor<<endl;
    //ejercicio8

    //ejercicio9
    cout << "elija el tamanio del vector palindromo a crear y escriba los valores del vector" << endl;
    cin >> tam;
    crearVector(vectPalindromo,tam);
    invertirVectorEnteros(vectPalindromo, vectInv, tam, aumento);
    palindromo = numeroPalindromo(vect, vectInv, tam);
    cout <<"1 para palindromo 0 para no palindromo:" <<palindromo << endl;
}



//los voids ejercicio_numero son lo que entraria en "main", los deje dentro de una funcion para que mi main no se vea tan grande y 
//asi pueda hacer mas ejercicios dentro del mismo cpp y no tenga que reescribir algunas variables 
int main()
{
    //ejercicio1();
    //ejercicio2();
    ejercicio3Ejercicio4YEjercicio5();
    //ejercicio6Ejercicio7Ejercicio8yEjercicio9();
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
