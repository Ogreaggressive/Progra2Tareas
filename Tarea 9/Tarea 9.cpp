
#include "Aerolinea.h"
#include "VueloPasajeros.h"
#include "VueloCarga.h"
#include "ListaGenerica.h"

void test1()
{
	SingletonClientes::getInstancia().getClientes().registrar(new Persona(1, "juan", 12345));
	SingletonClientes::getInstancia().getClientes().registrar(new Persona(2, "jose", 12345));

	Vuelo* v = new VueloPasajeros(1,"cb","lp",111);
	v->registrar();
	v->mostrar();
}

void test2()
{
	SingletonClientes::getInstancia().getClientes().registrar(new Persona(3, "juan", 12345));
	SingletonClientes::getInstancia().getClientes().registrar(new Persona(2, "jose", 12345));
	SingletonClientes::getInstancia().getClientes().registrar(new Persona(5, "pedro", 12345));
	SingletonClientes::getInstancia().getClientes().registrar(new Persona(125, "nicolas", 12345));
	SingletonClientes::getInstancia().getClientes().ordenar(Persona::cmpCiAsc);
	SingletonClientes::getInstancia().getClientes().mostrar(Persona::mostrar);
}

void test3()
{
	Persona* p1 = new Persona(1, "juan", 12345);
	Persona* p2 = new Persona(2, "alan", 12345);
	Persona* p3 = new Persona(3, "pedro", 12345);
	Persona* p4 = new Persona(4, "jose", 12345);
	SingletonPaquetes::getInstancia().getPaquetes().registrar(new Paquete(10,p1,p4));
	SingletonPaquetes::getInstancia().getPaquetes().registrar(new Paquete(1,p1,p2));
	SingletonPaquetes::getInstancia().getPaquetes().registrar(new Paquete(1654,p3,p4));
	SingletonPaquetes::getInstancia().getPaquetes().registrar(new Paquete(15120,p2,p4));

	Vuelo* v1 = new VueloCarga(1, "cb", "lp", 111);
	v1->registrar();
	v1->mostrar();
}

void test4()
{
	Persona* p1 = new Persona(1, "juan", 12345);
	Persona* p2 = new Persona(2, "alan", 12345);
	Persona* p3 = new Persona(3, "pedro", 12345);
	Persona* p4 = new Persona(4, "jose", 12345);
	SingletonPaquetes::getInstancia().getPaquetes().registrar(new Paquete(10, p1, p4));
	SingletonPaquetes::getInstancia().getPaquetes().registrar(new Paquete(1, p1, p2));
	SingletonPaquetes::getInstancia().getPaquetes().registrar(new Paquete(1654, p3, p4));
	SingletonPaquetes::getInstancia().getPaquetes().registrar(new Paquete(15120, p2, p4));
	SingletonPaquetes::getInstancia().getPaquetes().ordenar(Paquete::cmpPesoAsc);
	SingletonPaquetes::getInstancia().getPaquetes().mostrar(Paquete::mostrar);
}

void test5()
{
	Aerolinea boa;
	Vuelo* v1 = new VueloCarga(1, "cb", "lp", 5235123);
	Vuelo* v2 = new VueloPasajeros(2, "cb", "lp", 151);
	Vuelo* v3 = new VueloPasajeros(3, "cb", "lp", 666666);
	boa.getVuelos().registrar(v1);
	boa.getVuelos().registrar(v2);
	boa.getVuelos().registrar(v3);
	boa.getVuelos().ordenar(Vuelo::cmpFechaAsc);
	boa.getVuelos().mostrar(Vuelo::mostrar);
}

void test1Nodo()
{
	ListaGenerica<Persona> clientes;
	clientes.registrar(new Persona(3, "b", 12345));
	clientes.registrar(new Persona(1, "a", 12345));
	clientes.registrar(new Persona(513, "c", 12345));
	clientes.registrar(new Persona(5, "d", 12345));
	clientes.registrar(new Persona(4, "e", 12345));
	clientes.registrar(new Persona(11, "f", 12345));
	clientes.registrar(new Persona(9, "g", 12345));
	clientes.registrar(new Persona(7, "h", 12345));
	clientes.registrar(new Persona(8, "i", 12345));
	Persona* p1 = new Persona(11, "f", 12345);
	//clientes.buscar(p1)->getDato()->mostrar();
	//clientes.ordenar(Persona::cmpCiAsc);
	//clientes.eliminar(p1);
	clientes.eliminar(p1);
	clientes.mostrar(Persona::mostrar);
}

int pregunta1()
{
	Persona* cliente = new Persona(12345, "Juan", 5555);
	if (cliente->toString() == "{ci:12345,nombre:Juan,fono:5555}")
	{
		cout << "resultado: correcto" << endl;
		return 20;
	}
	cout << "resultado incorrecto" << endl;
	return 0;
}

int pregunta2()
{
	SingletonClientes::getInstancia().getClientes().registrar(new Persona(12345, "Juan", 5555));
	SingletonClientes::getInstancia().getClientes().registrar(new Persona(12346, "Pedro", 5555));
	if (SingletonClientes::getInstancia().toString() == "{clientes:[{ci:12345,nombre:Juan,fono:5555},{ci:12346,nombre:Pedro,fono:5555}]}")
	{
		cout << "resultado: correcto" << endl;
		return 20;
	}
	cout << "resultado incorrecto" << endl;
	return 0;
}


int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test1Nodo();
	/*int nota = pregunta1()+pregunta2();
	cout << endl;
	cout << "===========" << endl;
	cout << "nota: " << nota << "/100" << endl;
	cout << "===========" << endl;
	system("pause");*/
	return 0;
}
