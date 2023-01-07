
#include "Whatsapp.h"
#include "Usuario.h"
#include "Mensaje.h"
#include "Texto.h"
#include "Archivo.h"

int pregunta0()
{
    cout << "----Pregunta 0----" << endl;
    //Creamos usuarios(telefono,nombre)
    Usuario* paola = new Usuario(70700001, "Paola");
    Usuario* leonardo = new Usuario(70700002, "Leonardo");
    Usuario* elena = new Usuario(70700003, "Elena");
    // Paola envia mensaje a Leonardo
    Mensaje* m1 = new Texto(70700001, "Mandame la foto");
    paola->enviarMensaje(m1,70700002);
    leonardo->recibirMensaje(m1);
    // Leonardo envia mensaje a Paola
    Mensaje* m2 = new Archivo(70700002, "Familia", "jpg");
    leonardo->enviarMensaje(m2, 70700001);
    paola->recibirMensaje(m2);
    // Paola envia mensaje a Elena
    Mensaje* m3 = new Texto(70700001, "Como estas?");
    paola->enviarMensaje(m3, 70700003);
    elena->recibirMensaje(m3);
    paola->ordenar();
    paola->mostrar();
    //cout << paola->toString() << endl;
    return 20;
}



int main()
{
    /*Usuario* paola = new Usuario(70700001, "Paola");
    Usuario* leonardo = new Usuario(70700002, "Leonardo");
    Usuario* elena = new Usuario(70700003, "Elena");
    Mensaje* m1 = new Texto(70700001, "Mandame la foto");
    Mensaje* m2 = new Archivo(70700002, "Familia", "jpg");
    paola->enviarMensaje(m1, 70700002);
    //paola->enviarMensaje(m2, 70700002);
    paola->recibirMensaje(m2);
    paola->ordenar();
    paola->mostrar();
    //leonardo->recibirMensaje(m1);*/
    pregunta0();
    /*int total = pregunta();
    cout << total << endl;*/
    return 0;
}


