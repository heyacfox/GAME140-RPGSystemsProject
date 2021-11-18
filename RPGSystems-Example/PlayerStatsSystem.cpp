#include "PlayerStatsSystem.h"
#include <stdio.h>
#include <string>

 PlayerStatsSystem::PlayerStatsSystem()
{
	lvlUp = 1;
}

void PlayerStatsSystem::CheckSystem() {
	printf(" HP | %d\n MP | %d\n Attack | %d\n Defence | %d\n Intelligence | %d\n Speed | %d\n ==========\n Level | %d\n Current XP | %d\n\n", HP, MP, Atk, Def, Intel, Spd, lvl, currentXP);
}

void PlayerStatsSystem::AddToInt(){

	PlayerStatsSystem::lvlUp = lvlUp + 1;
	PlayerStatsSystem::HP = HP + 10;
	PlayerStatsSystem::MP = MP + 5;
	PlayerStatsSystem::Atk = Atk + 3;
	PlayerStatsSystem::Def = Def + 3;
	PlayerStatsSystem::Intel = Intel + 3;
	PlayerStatsSystem::Spd = Spd + 3;
	PlayerStatsSystem::lvl = lvl + 1;
}

void PlayerStatsSystem::CheckPlayerLvl() {
	if (currentXP >= 10)
	{
		lvl = 2;
	}
}




void TestPlayerStatsSystem() {
	PlayerStatsSystem playerStatsSystemInstance = PlayerStatsSystem();
	playerStatsSystemInstance.CheckSystem();
	playerStatsSystemInstance.AddToInt();
	playerStatsSystemInstance.CheckSystem();
	printf("The player stats system doesn't do anything yet...\n");
}