#include "ClubTenis.h"

ClubTenis::ClubTenis(int cantMaxComp, int cantMaxPart)
{
	modCompetencias = new ModCompetencias(cantMaxComp);
	modParticipantes = new ModParticipantes(cantMaxPart);
}

ClubTenis::~ClubTenis()
{
}


ModCompetencias* ClubTenis::getModCompetencias()
{
	return modCompetencias;
}

ModParticipantes* ClubTenis::getModParticipantes()
{
	return modParticipantes;
}
