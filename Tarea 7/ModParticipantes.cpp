#include "ModParticipantes.h"

ModParticipantes::ModParticipantes(int cantMaxPart)
{
	Participantes = new Participante * [cantMaxPart];
	this->cantMaxPart = cantMaxPart;
	ind = 0;
}

ModParticipantes::~ModParticipantes()
{
	for (int i = 0; i < ind; i++)
	{
		delete Participantes[i];
	}
	delete[] Participantes;
}

void ModParticipantes::registrar(string codReg)
{
	if (ind < cantMaxPart)
	{
		Participantes[ind] = new Participante(codReg);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModParticipantes::aumentar(Participante* Participante)
{
	if (ind < cantMaxPart)
	{
		Participantes[ind] = Participante;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModParticipantes::mostrar()
{
	cout << "------Participantes-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "Participante: " << endl;
		Participantes[i]->mostrar();
	}
}

Participante* ModParticipantes::buscar(string codReg)
{
	//cout << "Participantes" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (Participantes[i]->getcodReg() == codReg)
		{
			return Participantes[i];
		}
	}
}


void ModParticipantes::ordenarParticipanteAsignado()
{
	string codReg1, codReg2;
	Participante* ParticipantePasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			codReg1 = Participantes[i]->getcodReg();
			codReg2 = Participantes[j]->getcodReg();
			if (codReg1 > codReg2)
			{
				ParticipantePasar = Participantes[i];
				Participantes[i] = Participantes[j];
				Participantes[j] = ParticipantePasar;
			}
		}
	}
}
