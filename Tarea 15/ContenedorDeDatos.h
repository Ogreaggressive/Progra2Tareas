#pragma once

#include <mutex>

using namespace std;


class ContenedorDeDatos
{
private:
	int cont;
	mutex m;
public:
	static ContenedorDeDatos& getInst();
	~ContenedorDeDatos();
	void cambiarContador(int valor);
	void insertarElemento(int valor);
	int quitarElemento();
private:
	ContenedorDeDatos();
};

