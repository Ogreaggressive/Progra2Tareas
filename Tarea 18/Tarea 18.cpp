

#include "SingletonEstudiantes.h"
#include "ListaGenerica.h"
#include "Estudiante.h"

#include "Tarea.h"
#include "Obligatoria.h"
#include "Voluntaria.h"

#include "Entrega.h"
#include "EntregaConArchivoAdjunto.h"
#include "EntregaSoloTexto.h"

void test1()
{
    SingletonEstudiantes::getInst().registrar(new Estudiante(1, "nicolas", 123));
    SingletonEstudiantes::getInst().registrar(new Estudiante(4, "jose", 123));
    SingletonEstudiantes::getInst().registrar(new Estudiante(6, "pablo", 123));
    SingletonEstudiantes::getInst().registrar(new Estudiante(3, "soto", 123));
    SingletonEstudiantes::getInst().registrar(new Estudiante(5, "dios", 123));
    SingletonEstudiantes::getInst().registrar(new Estudiante(2, "gabo", 123));
    SingletonEstudiantes::getInst().ordenar();
    SingletonEstudiantes::getInst().mostrar();
}

void test2()
{
    ListaGenerica<Tarea> tareas;
    Tarea* t1=new Voluntaria("tarea1", 111, 100, 10);
    Tarea* t2 = new Obligatoria("tarea3", 333);
    Tarea* t3 = new Voluntaria("tarea4", 444, 100, 10);
    Tarea* t4 = new Obligatoria("tarea5", 555);
    Tarea* t5 = new Voluntaria("tarea2", 222, 100, 10);
    Tarea* t6 = new Obligatoria("tarea7", 777);
    Tarea* t7 = new Voluntaria("tarea6", 666, 100, 10);

    tareas.registrar(t1);
    tareas.registrar(t2);
    tareas.registrar(t3);
    tareas.registrar(t4);
    tareas.registrar(t5);
    tareas.registrar(t6);
    tareas.registrar(t7);

    tareas.ordenar(Tarea::compFechaAsc);
    tareas.mostrar(Tarea::mostrar);
}

void test3()
{
    ListaGenerica<Entrega> entregas;
    Estudiante* e1 = SingletonEstudiantes::getInst().buscar(1);
    Estudiante* e2 = SingletonEstudiantes::getInst().buscar(2);
    Estudiante* e3 = SingletonEstudiantes::getInst().buscar(3);
    Estudiante* e4 = SingletonEstudiantes::getInst().buscar(4);
    Estudiante* e5 = SingletonEstudiantes::getInst().buscar(5);
    Estudiante* e6 = SingletonEstudiantes::getInst().buscar(6);
    /*Entrega* t1 = new EntregaConArchivoAdjunto(e1, 111, "tarea1", 3);
    Entrega* t2 = new EntregaSoloTexto(e2, 555,"ejemploTexto");
    Entrega* t3 = new EntregaConArchivoAdjunto(e3, 222, "tarea1", 3);
    Entrega* t4 = new EntregaConArchivoAdjunto(e4, 444, "tarea1", 3);
    Entrega* t5 = new EntregaConArchivoAdjunto(e5, 333, "tarea1", 3);*/

    Obligatoria* ob1= new Obligatoria("tarea1",12351);
    ob1->registrar(new EntregaConArchivoAdjunto(e1, 111, "tarea1", 3));
    ob1->registrar(new EntregaSoloTexto(e2, 555, "ejemploTexto"));
    ob1->registrar(new EntregaConArchivoAdjunto(e3, 222, "tarea1", 3));
    ob1->registrar(new EntregaConArchivoAdjunto(e4, 444, "tarea1", 3));
    ob1->registrar(new EntregaConArchivoAdjunto(e5, 333, "tarea1", 3));

    ob1->mostrar();
}

int main()
{
    test1();
    //test2();
    cout << "------------------------entregas---------------------" << endl;
    test3();

    return 0;
}

