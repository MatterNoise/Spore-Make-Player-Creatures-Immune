#include "stdafx.h"
#include "MakePlayerCreaturesImmuneCheat.h"
#include "PlayerCreaturesImmunitySystem.h"

MakePlayerCreaturesImmuneCheat::MakePlayerCreaturesImmuneCheat()
{
}


MakePlayerCreaturesImmuneCheat::~MakePlayerCreaturesImmuneCheat()
{
}


void MakePlayerCreaturesImmuneCheat::ParseLine(const ArgScript::Line& line)
{
	// This method is called when your cheat is invoked.
	// Put your cheat code here.

	if (PlayerCreaturesImmunitySystemA.GetSystemRun() == false) {
		App::ConsolePrintF("PlayersCreatureImmunitySystem toggled On!");

		PlayerCreaturesImmunitySystemA.ToggleSystemRun(true);
	}
	else {
		App::ConsolePrintF("PlayersCreatureImmunitySystem toggled Off!");

		PlayerCreaturesImmunitySystemA.ToggleSystemRun(false);
	}
}

const char* MakePlayerCreaturesImmuneCheat::GetDescription(ArgScript::DescriptionMode mode) const
{
	if (mode == ArgScript::DescriptionMode::Basic) {
		return "This cheat makes your creatures immune to the damage.";
	}
	else {
		return "MakePlayerCreaturesImmuneCheat: This cheat makes your creatures immune to any type of damage.";
	}
}
