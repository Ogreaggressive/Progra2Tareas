
#include "Cliente.h"
#include "Funcion.h"
#include "Obra.h"
#include "Pelicula.h"
#include "Sala.h"
#include "ArrayGenerico.h"

void registrarSalas()
{
	ArrayGenerico<Sala> salaCine(10);
	//Cliente* c1 = new Cliente(1, "nicolas");
	Sala* sala1 = new Sala(52,10,10);
	Sala* sala2 = new Sala(23, 5, 8);
	Sala* sala3 = new Sala(15, 3, 6);
	Sala* sala4 = new Sala(41, 9, 9);
	salaCine.registrar(sala1);
	salaCine.registrar(sala2);
	salaCine.registrar(sala3);
	salaCine.registrar(sala4);
	salaCine.ordenar(Sala::cmpNumAsc);
	salaCine.mostrar(Sala::mostrar);
}

void registrarClientes()
{
	ArrayGenerico<Cliente> salaCine(10);
	Cliente* c1 = new Cliente(1, "nicolas");
	Cliente* c2 = new Cliente(4, "pablo");
	Cliente* c3 = new Cliente(3, "pepe");
	Cliente* c4 = new Cliente(2, "pedro");
	Cliente* c5 = new Cliente(5, "juan");
	salaCine.registrar(c1);
	salaCine.registrar(c2);
	salaCine.registrar(c3);
	salaCine.registrar(c4);
	salaCine.registrar(c5);
	salaCine.ordenar(Cliente::cmpCiAsc);
	salaCine.mostrar(Cliente::mostrar);
}

void registrarFunciones()
{
	ArrayGenerico<Funcion> funciones(10);
	Pelicula* p1 = new Pelicula(11042021,845,"resumen1","muerte de bolivia","pepe","horror");
	Pelicula* p2 = new Pelicula(12042021, 945, "resumen2", "los abiengers", "marbel", "comedia");
	Obra* o1 = new Obra(10042021, 645, "resumen3", "progra en el futuro", "la wendo", "la cato");
	funciones.registrar(p1);
	funciones.registrar(p2);
	funciones.registrar(o1);
	cout << "por fecha-----------------------------------------" << endl;
	funciones.ordenar(Funcion::cmpFechaAsc);
	funciones.mostrar(Funcion::mostrar);
	cout << "por titulo-----------------------------------------" << endl;
	funciones.ordenar(Funcion::cmpTituloAsc);
	funciones.mostrar(Funcion::mostrar);
	cout << "por director-----------------------------------------" << endl;
	funciones.ordenar(Funcion::cmpDirectorAsc);
	funciones.mostrar(Funcion::mostrar);
}

void comprarBoleto()
{
	Sala* sala1 = new Sala(52, 10, 10);
	Cliente* c1 = new Cliente(1, "nicolas");
	Cliente* c2 = new Cliente(4, "pablo");
	Cliente* c3 = new Cliente(3, "pepe");
	sala1->venderBoletos(c1,1,3);
	sala1->venderBoletos(c2, 4, 3);
	sala1->venderBoletos(c3, 5, 3);
	sala1->mostrarBoletosVendidos();
	//no da
}

int main()
{
	//registrarSalas();
	//registrarClientes();
	//registrarFunciones();
	return 0;
}
