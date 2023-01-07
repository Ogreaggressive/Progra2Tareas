#pragma once

#include "Participante.h"

class ModParticipantes
{
private:
	Participante** Participantes;
	int cantMaxPart;
	int ind;
public:
	ModParticipantes(int cantMaxPart);
	~ModParticipantes();
	void registrar(string codReg);
	void aumentar(Participante* Participante);
	void mostrar();
	Participante* buscar(string codReg);
	void ordenarParticipanteAsignado();
};











