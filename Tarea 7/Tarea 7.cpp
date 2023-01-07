
#include "ClubTenis.h"

#include "Equipo.h"
#include "Tenista.h"
#include "Simple.h"
#include "Double.h"

void registrarTenistas()
{
    ClubTenis club(10,10);
    Tenista t1("a1",1,"pedro",1111);
    Participante* p1 = &t1;
    Tenista t2("b2", 2, "juan", 2222);
    Participante* p2 = &t2;
    Tenista t3("a3", 3, "messi", 3333);
    Participante* p3 = &t3;
    Tenista t4("d4", 4, "jesus", 4444);
    Participante* p4 = &t4;
    Tenista t5("a5", 5, "ale", 5555);
    Participante* p5 = &t5;
    club.getModParticipantes()->aumentar(p1);
    club.getModParticipantes()->aumentar(p2);
    club.getModParticipantes()->aumentar(p3);
    club.getModParticipantes()->aumentar(p4);
    club.getModParticipantes()->aumentar(p5);
    club.getModParticipantes()->ordenarParticipanteAsignado();
    club.getModParticipantes()->mostrar();
}


void registrarCompetencias()
{
    ClubTenis club(10, 10);
    Simple s1(5, "competencia1", 10);
    Simple s2(3, "competencia2", 10);
    Simple s3(2, "competencia3", 10);
    Double d1(4, "competencia4", 10);
    Double d2(1, "competencia5", 10);
    Competencia* c1 = &s1;
    Competencia* c2 = &s2;
    Competencia* c3 = &s3;
    Competencia* c4 = &d1;
    Competencia* c5 = &d2;
    club.getModCompetencias()->aumentar(c1);
    club.getModCompetencias()->aumentar(c2);
    club.getModCompetencias()->aumentar(c3);
    club.getModCompetencias()->aumentar(c4);
    club.getModCompetencias()->aumentar(c5);
    club.getModCompetencias()->ordenarCompetenciaAsignado();
    club.getModCompetencias()->mostrar();
}

void registrarJugadorEnCompetenciaSimple()
{
    ClubTenis club(10, 10);
    Simple competenciaSimple(123,"competencia1",10);
    competenciaSimple.registrarTenista("a1", 1, "pedro", 1111);
    competenciaSimple.registrarTenista("b2", 2, "juan", 2222);
    competenciaSimple.registrarTenista("a3", 3, "messi", 3333);
    competenciaSimple.registrarTenista("d4", 4, "jesus", 4444);
    competenciaSimple.registrarTenista("a5", 5, "ale", 5555);
    competenciaSimple.ordenar();
    competenciaSimple.mostrar();
}

void registrarGanador()
{

    ClubTenis club(10, 10);
    Simple competenciaSimple(123, "competencia1", 10);
    competenciaSimple.registrarTenista("a1", 1, "pedro", 1111);
    competenciaSimple.registrarTenista("b2", 2, "juan", 2222);
    competenciaSimple.registrarTenista("a3", 3, "messi", 3333);
    competenciaSimple.registrarTenista("d4", 4, "jesus", 4444);
    competenciaSimple.registrarTenista("a5", 5, "ale", 5555);
    competenciaSimple.registrarGanadores("d4");
}

int main()
{
    //registrarTenistas();
    //registrarCompetencias();
    //registrarJugadorEnCompetenciaSimple();
   // registrarGanador();
    return 0;
}

