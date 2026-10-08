#pragma once

#include <Spore\BasicIncludes.h>

#define PlayerCreaturesImmunitySystemPtr intrusive_ptr<PlayersCreatureImmunitySystem>
#define PlayerCreaturesImmunitySystemA (PlayerCreaturesImmunitySystem::Get())[0]

///
/// In your dllmain Initialize method, add the system like this:
/// ModAPI::AddSimulatorStrategy(new PlayersCreatureImmunitySystem(), PlayersCreatureImmunitySystem::NOUN_ID);
///

class PlayerCreaturesImmunitySystem
	: public Simulator::cStrategy
{
public:
	static const uint32_t TYPE = id("Make_Player_Creatures_Immune::PlayersCreatureImmunitySystem");
	static const uint32_t NOUN_ID = TYPE;

	int AddRef() override;
	int Release() override;
	void Initialize() override;
	void Dispose() override;
	const char* GetName() const override;
	bool Write(Simulator::ISerializerStream* stream) override;
	bool Read(Simulator::ISerializerStream* stream) override;
	bool WriteToXML(Simulator::XmlSerializer* writexml) override;
	void Update(int deltaTime, int deltaGameTime) override;

	static PlayerCreaturesImmunitySystem* Get();

	//
	// You can add more methods here
	//

	void ToggleSystemRun(bool RunningToggle);
	bool GetSystemRun();

	static Simulator::Attribute ATTRIBUTES[];

private:
	static PlayerCreaturesImmunitySystem* sInstance;

	//
	// You can add members here
	//

	bool isSystemRunning;
};