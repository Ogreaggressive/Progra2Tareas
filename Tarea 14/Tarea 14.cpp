// Tarea 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ListaObras.h"
#include "ListaExposiciones.h"

int pregunta1()
{
    cout << "----Pregunta 1----" << endl;
    ListaObras::getInst().registrar(1, "Porton", "Dario Antezana", 100, 80);
    ListaObras::getInst().registrar(3, "Rostro", "Ponciano Cardenas", 20);
    ListaObras::getInst().registrar(2, "Cosecha", "Amadeo Castro", 180, 200);
    ListaObras::getInst().ordenar();
    string result = ListaObras::getInst().toString();
    cout << result << endl;
    if (result == "{obras:[{tipo:pintura,id:2,titulo:Cosecha,autor:Amadeo Castro,alto:180,ancho:200},{tipo:pintura,id:1,titulo:Porton,autor:Dario Antezana,alto:100,ancho:80},{tipo:escultura,id:3,titulo:Rostro,autor:Ponciano Cardenas,peso:20}]}")
    {
        cout << "Resultado: correcto" << endl;
        return 20;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}

int pregunta2()
{
    cout << "----Pregunta 2----" << endl;
    ListaExposiciones exposiciones;
    ExposicionPropia* ep1 = new ExposicionPropia(1, 20190301, 20190330);
    ExposicionPropia* ep2 = new ExposicionPropia(2, 20190101, 20190130);
    ExposicionInvitados* ei1 = new ExposicionInvitados(3, 20190201, 20190215);
    ExposicionInvitados* ei2 = new ExposicionInvitados(4, 20190101, 20190110);
    exposiciones.registrar(ep1);
    exposiciones.registrar(ep2);
    exposiciones.registrar(ei1);
    exposiciones.registrar(ei2);
    exposiciones.ordenar();
    string result = exposiciones.toString();
    cout << result << endl;
    if (result == "{exposiciones:[{tipo:propia,id:2,inicio:20190101,fin:20190130,obras:[]},{tipo:invitados,id:4,inicio:20190101,fin:20190110,obras:[],artistas:[]},{tipo:invitados,id:3,inicio:20190201,fin:20190215,obras:[],artistas:[]},{tipo:propia,id:1,inicio:20190301,fin:20190330,obras:[]}]}")
    {
        cout << "Resultado: correcto" << endl;
        return 20;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}

int pregunta3()
{
    cout << "----Pregunta 3----" << endl;
    ListaObras::getInst().registrar(1, "Porton", "Dario Antezana", 100, 80);
    ListaObras::getInst().registrar(3, "Rostro", "Ponciano Cardenas", 20);
    ListaObras::getInst().registrar(2, "Cosecha", "Amadeo Castro", 180, 200);

    ListaExposiciones exposiciones;
    ExposicionPropia* ep1 = new ExposicionPropia(1, 20190301, 20190330);
    ep1->agrergarObra(1);
    ep1->agrergarObra(2);
    ExposicionPropia* ep2 = new ExposicionPropia(2, 20190101, 20190130);
    ep2->agrergarObra(2);
    ep2->agrergarObra(3);
    exposiciones.registrar(ep1);
    exposiciones.registrar(ep2);
    exposiciones.ordenar();
    string result = exposiciones.toString();
    cout << result << endl;
    if (result == "{exposiciones:[{tipo:propia,id:2,inicio:20190101,fin:20190130,obras:[{tipo:pintura,id:2,titulo:Cosecha,autor:Amadeo Castro,alto:180,ancho:200},{tipo:escultura,id:3,titulo:Rostro,autor:Ponciano Cardenas,peso:20}]},{tipo:propia,id:1,inicio:20190301,fin:20190330,obras:[{tipo:pintura,id:1,titulo:Porton,autor:Dario Antezana,alto:100,ancho:80},{tipo:pintura,id:2,titulo:Cosecha,autor:Amadeo Castro,alto:180,ancho:200}]}]}")
    {
        cout << "Resultado: correcto" << endl;
        return 30;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}

int pregunta4()
{
    cout << "----Pregunta 4----" << endl;
    ListaExposiciones exposiciones;
    ExposicionInvitados* ei1 = new ExposicionInvitados(1, 20190301, 20190330);
    ei1->registrarArtista("Dario Antezana");
    ei1->registrarArtista("Ponciano Cardenas");
    ei1->registrarObra(new Pintura(1, "Porton", "Dario Antezana", 100, 80));
    ei1->registrarObra(new Escultura(3, "Rostro", "Ponciano Cardenas", 20));
    ExposicionInvitados* ei2 = new ExposicionInvitados(2, 20190101, 20190130);
    ei2->registrarArtista("Amadeo Castro");
    ei2->registrarObra(new Pintura(2, "Cosecha", "Amadeo Castro", 180, 200));
    exposiciones.registrar(ei1);
    exposiciones.registrar(ei2);
    exposiciones.ordenar();
    string result = exposiciones.toString();
    cout << result << endl;
    if (result == "{exposiciones:[{tipo:invitados,id:2,inicio:20190101,fin:20190130,obras:[{tipo:pintura,id:2,titulo:Cosecha,autor:Amadeo Castro,alto:180,ancho:200}],artistas:[Amadeo Castro]},{tipo:invitados,id:1,inicio:20190301,fin:20190330,obras:[{tipo:pintura,id:1,titulo:Porton,autor:Dario Antezana,alto:100,ancho:80},{tipo:escultura,id:3,titulo:Rostro,autor:Ponciano Cardenas,peso:20}],artistas:[Dario Antezana,Ponciano Cardenas]}]}")
    {
        cout << "Resultado: correcto" << endl;
        return 30;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}


void pruebaListaGenerica()
{
    ListaGenerica<Persona> personas;
    personas.registrar(new Persona("h"));
    personas.registrar(new Persona("g"));
    personas.registrar(new Persona("y"));
    personas.registrar(new Persona("x"));
    personas.registrar(new Persona("d"));
    personas.registrar(new Persona("c"));
    personas.registrar(new Persona("z"));
    personas.registrar(new Persona("a"));
    personas.ordenar(Persona::compNomAsc);
    personas.mostrar(Persona::mostrar);
}



int main()
{
    int nota = pregunta1() + pregunta2() + pregunta3() + pregunta4();
    cout << endl;
    cout << "====================" << endl;
    cout << "===> NOTA: " << nota << "/100" << endl;
    cout << "====================" << endl;
    //pruebaListaGenerica();
    //el ejercicio 3 lo hizo de manera erronea, ya que
    //pide mostrarlas ordenadas por título.
    //pero la prueba esta sin ser ordenadas
    system("pause");
    return 0;
}
