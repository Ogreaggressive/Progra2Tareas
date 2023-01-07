#pragma once

#include "ModCompetencias.h"
#include "ModParticipantes.h"

class ClubTenis
{
private:
	ModCompetencias* modCompetencias;
	ModParticipantes* modParticipantes;

public:
	ClubTenis(int cantMaxComp, int cantMaxPart);
	~ClubTenis();
	ModCompetencias* getModCompetencias();
	ModParticipantes* getModParticipantes();
};



