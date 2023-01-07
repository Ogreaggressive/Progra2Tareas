

#include "GaleriaArte.h"
#include "Persona.h"
#include "Artista.h"
#include "ArrayGenerico.h"
#include "Obra.h"
#include "Escultura.h"
#include "Pintura.h"
#include "Venta.h"

void test1()
{
	ArrayGenerico<Obra> obras(10);
	/*Obra* obra1 = new Obra ("caidos del cielo", "romeo", "propia", 100);
	Obra* obra2 = new Obra ("hambre", "evo", "propia", 200);
	Obra* obra3 = new Obra ("llorar por el examen", "yo", "artista",100);*/
	Pintura *pintura1 = new Pintura("caidos del cielo","romeo","propia",100,5,5);
	Obra* obra1 = pintura1;
	Pintura* pintura2 = new Pintura("hambre", "evo", "propia", 200, 5, 5);
	Obra* obra2 = pintura2;
	Escultura* escultura1 = new Escultura("llorar por el examen", "yo", "artista", 100,20);
	Obra* obra3 = escultura1;
	obras.registrar(obra1);
	obras.registrar(obra2);
	obras.registrar(obra3);
	cout << "por autor" << endl;
	obras.ordenar(Obra::compAutorAsc);
	obras.mostrar(Obra::mostrar);
	cout << "por nombre" << endl;
	obras.ordenar(Obra::compTituloAsc);
	obras.mostrar(Obra::mostrar);
}

void test2()
{
	ArrayGenerico<Artista> artistasRegistrados(10);
	Artista* a1 = new Artista(3,"pedro","dibujo");
	Artista* a2 = new Artista(1,"luis", "al azar");
	Artista* a3 = new Artista(2,"miguelAngelo","tejer");
	artistasRegistrados.registrar(a1);
	artistasRegistrados.registrar(a2);
	artistasRegistrados.registrar(a3);
	cout << "por tecnica" << endl;
	artistasRegistrados.ordenar(Artista::compTecAsc);
	artistasRegistrados.mostrar(Artista::mostrar);
}

void test3()
{
	ArrayGenerico<Persona> clientes(10);
	Persona* p1 = new Persona(3, "pedro");
	Persona* p2 = new Persona(1, "luis");
	Persona* p3 = new Persona(2, "AmiguelAngelo");
	clientes.registrar(p1);
	clientes.registrar(p2);
	clientes.registrar(p3);
	cout << "por ci" << endl;
	clientes.ordenar(Persona::compCiAsc);
	clientes.mostrar(Persona::mostrar);
	cout << "por nombre" << endl;
	clientes.ordenar(Persona::compNomAsc);
	clientes.mostrar(Persona::mostrar);
}

void test4()
{
	GaleriaArte ucb;
	Salon* s1 = new Salon(2,10);
	Salon* s2 = new Salon(1, 10);
	Salon* s3 = new Salon(4, 10);
	Salon* s4 = new Salon(3, 10);
	ucb.getSalones().registrar(s1);
	ucb.getSalones().registrar(s2);
	ucb.getSalones().registrar(s3);
	ucb.getSalones().registrar(s4);
	ucb.getSalones().ordenar(Salon::compCodAsc);
	ucb.getSalones().mostrar(Salon::mostrar);
}

void test5()
{
	Salon* s1 = new Salon(2, 10);
	Exposicion* e1 = new Exposicion(20221010,120,10);
	Exposicion* e2 = new Exposicion(20221014, 120, 10);
	Exposicion* e3 = new Exposicion(20221013, 120, 10);
	s1->registrar(e1);
	s1->registrar(e2);
	s1->registrar(e3);
	s1->ordenar();
	s1->mostrar();
}

void test6()
{
	Salon* s1 = new Salon(2, 10);
	Exposicion* e1 = new Exposicion(20221010, 120, s1->getTamanio());
	Pintura pintura1 ("caidos del cielo","romeo","propia",100,5,5);
	Obra* obra1 = &pintura1;
	Pintura pintura2("hambre", "evo", "propia", 200, 5, 5);
	Obra* obra2 = &pintura2;
	Escultura escultura1("llorar por el examen", "yo", "artista", 100,20);
	Obra* obra3 = &escultura1;
	e1->registrar(obra1);
	e1->registrar(obra2);
	e1->registrar(obra3);
	e1->ordenar();
	e1->mostrar();
}

void test7()
{
	ArrayGenerico<Venta> ventas(10);
	Pintura pintura1("caidos del cielo", "romeo", "propia", 100, 5, 5);
	Persona* p1 = new Persona(3, "pedro");
	Obra* obra1 = &pintura1;
	Venta* v1 = new Venta(p1,obra1,101012,100);
	Venta* v2 = new Venta(p1, obra1, 101015, 1000);
	Venta* v3 = new Venta(p1, obra1, 101013, 1002);
	ventas.registrar(v1);
	ventas.registrar(v2);
	ventas.registrar(v3);
	ventas.ordenar(Venta::compFechaAsc);
	ventas.mostrar(Venta::mostrar);
}

void test8()
{
	Pintura pintura1("caidos del cielo", "romeo", "propia", 100, 5, 5);
	Persona* p1 = new Persona(3, "pedro");
	Obra* obra1 = &pintura1;
	Venta* v1 = new Venta(p1, obra1, 101012, 100);
	Venta* v2 = new Venta(p1, obra1, 101015, 1000);
	Venta* v3 = new Venta(p1, obra1, 101013, 12116);
	Salon* s1 = new Salon(2, 10);
	Exposicion* e1 = new Exposicion(20221010, 120, s1->getTamanio());
	e1->aumentarTotalVendido(v1);
	e1->aumentarTotalVendido(v2);
	e1->aumentarTotalVendido(v3);
	e1->mostrar();
}

void defensa()
{
	Artista* a1 = new Artista(1, "MiguelAngelo", "semiexpresivo");

	Pintura* pintura1 = new Pintura("caidos del cielo", "MiguelAngelo", "artista", 100, 5, 5);
	Obra* obra1 = pintura1;
	Pintura* pintura2 = new Pintura("hambre", "MiguelAngelo", "artista", 200, 5, 5);
	Obra* obra2 = pintura2;
	Escultura* escultura1 = new Escultura("llorar por el examen", "MiguelAngelo", "artista", 100, 20);
	Obra* obra3 = escultura1;
	Obra* obra4 = new Obra("abc men","MiguelAngelo","artista",10);
	Obra* obra5 = new Obra("why", "MiguelAngelo", "artista", 10);
	a1->registrarObra(obra1);
	a1->registrarObra(obra2);
	a1->registrarObra(obra3);
	a1->registrarObra(obra4);
	a1->registrarObra(obra5);
	a1->mostrar();
	//si se quiere ver caracteristicas de cada obra
	//pintura2->mostrar();
}


int main()
{
	//test1();
	//test2(); 
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	defensa();
	return 0;
}
