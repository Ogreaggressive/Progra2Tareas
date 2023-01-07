#include "GraficoEnPantalla.h"

GraficoEnPantalla::GraficoEnPantalla(int id) : ElementoGrafico(id)
{
	ind = 0;
}

GraficoEnPantalla::~GraficoEnPantalla()
{

}

void GraficoEnPantalla::dibujar()
{
	for (int i = 0; i < ind; i++)
	{
		elementos[i]->dibujar();
	}
}

void GraficoEnPantalla::borrar()
{
	for (int i = 0; i < ind; i++)
	{
		elementos[i]->borrar();
	}
}

void GraficoEnPantalla::agregarPunto(int id,int x,int y)
{
	if (ind < MAX_ELEMENTOS)
	{
		elementos[ind] = new Punto(id,x,y);
		ind++;
	}
	else
	{
		cout << "Error, limite excedido" << endl;
	}
}

void GraficoEnPantalla::agregarLinea(int id, int x, int y, int tam, string orientacion)
{
	if (ind < MAX_ELEMENTOS)
	{
		elementos[ind] = new Linea(id, x, y, tam, orientacion);
		ind++;
	}
	else
	{
		cout << "Error, limite excedido" << endl;
	}
}

/*
void GraficoEnPantalla::agregarGarabatoPuntos(int id, int cantMaxPuntos)
{
	if (ind < MAX_ELEMENTOS)
	{
		elementos[ind] = new GarabatoPuntos(id,cantMaxPuntos);
		ind++;
	}
	else
	{
		cout << "Error, limite excedido" << endl;
	}
	GarabatoPuntos* p1 = new GarabatoPuntos(id, cantMaxPuntos);
	for (int i = 0; i < cantMaxPuntos; i++)
	{
		elementos[ind]->crearPunto();
	}
}*/

void GraficoEnPantalla::agregarGarabatoPuntos2(int id, int cantMaxPuntos)
{
	GarabatoPuntos* p1 = new GarabatoPuntos(id, cantMaxPuntos);
	if (ind < MAX_ELEMENTOS)
	{
		elementos[ind] = p1;
		ind++;
	}
	else
	{
		cout << "Error, limite excedido" << endl;
	}
	
	/*for (int i = 0; i < cantMaxPuntos; i++)
	{
		p1->crearPunto();
	}*/
}

void GraficoEnPantalla::agregarGarabatoLineas(int id, int cantMaxLineas)
{
	GarabatoLineas* l1 = new GarabatoLineas(id, cantMaxLineas);
	if (ind < MAX_ELEMENTOS)
	{
		elementos[ind] = l1;
		ind++;
	}
	else
	{
		cout << "Error, limite excedido" << endl;
	}
}

void  GraficoEnPantalla::agregarPuntoGarabato(int id, int x, int y, GarabatoPuntos *p1)
{
	p1->crearPunto(id, x, y);
}

void GraficoEnPantalla::menu()
{
	int id, x, y, tam;
	string orientacion;
	int op=5;
	do
	{
		gotoxy(0, 19);
		cout << "------MENU------" << endl;
		cout << "1. agregar punto" << endl;
		//no pude inicializar muchos puntos
		//ni tampoco lineas
		cout << "2. agregar linea" << endl;
		cout << "3. dibujar" << endl;
		cout << "4. borrar" << endl;
		cout << "0. salir" << endl;

		cin >> op;

		switch (op)
		{
		case 1:
			
			cout << "elija el id, posx y posy para el punto"<<endl;
			cin >> id;
			cin >> x;
			cin >> y;
			agregarPunto(id,x,y);
			system("CLS");
			break;
		case 2:
			cout << "elija el id, posx, posy, tam, orientacion para la linea" << endl;
			cin >> id;
			cin >> x;
			cin >> y;
			cin >> tam;
			cin >> orientacion;
			agregarLinea(id, x, y,tam,orientacion);
			system("CLS");
			break;
		case 3:
			dibujar();
			break;
		case 4:
			borrar();
			break;	
		default:
			break;
		}
	} while (op != 0);
}