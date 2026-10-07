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

	App::ConsolePrintF("PlayersCreatureImmunitySystem toggled!");

	PlayerCreaturesImmunitySystemA.ToggleSystemRun(true);
}

const char* MakePlayerCreaturesImmuneCheat::GetDescription(ArgScript::DescriptionMode mode) const
{
	if (mode == ArgScript::DescriptionMode::Basic) {
		return "This cheat does something.";
	}
	else {
		return "MakePlayerCreaturesImmuneCheat: Elaborate description of what this cheat does.";
	}
}
