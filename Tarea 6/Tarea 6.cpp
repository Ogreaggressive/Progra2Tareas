#include "GraficoEnPantalla.h"

void test1()
{
    GraficoEnPantalla gp(1);
    gp.agregarPunto(1,3,3);
    gp.agregarPunto(2, 4, 5);
    gp.dibujar();
}

void test2()
{
    GraficoEnPantalla gp(1);
    gp.agregarLinea(1, 3, 3,5,"derecha");
    gp.agregarLinea(2, 4, 5,7,"abajo");
    gp.dibujar();
}

void test3() //no funciona
{
    GraficoEnPantalla gp(1);
    gp.agregarGarabatoPuntos2(2,3);
    GarabatoPuntos p1(2,3);
    gp.agregarPuntoGarabato(2,3,3,&p1);
    gp.agregarPuntoGarabato(3, 4, 4, &p1);
    gp.agregarPuntoGarabato(4, 5, 7, &p1);
    gp.dibujar();
}

void test4()
{
    GraficoEnPantalla gp(1);
    gp.menu();
}

void test5()
{
    GarabatoPuntos p1(2, 3);
    GarabatoLineas l1(2, 3);
    p1.crearPunto(1, 3, 4);
    p1.crearPunto(2, 5, 4);
    p1.crearPunto(3, 4, 4);
    l1.crearLinea(1, 3, 2,5,"derecha");
    l1.crearLinea(2, 3, 3,5,"abajo");
    p1.dibujar();
    l1.dibujar();

}

int main()
{
    //test4();
    test5();
    return 0;
}
