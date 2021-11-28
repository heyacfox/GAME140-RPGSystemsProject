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

	
}

void PlayerStatsSystem::CheckPlayerLvl() {
	if (currentXP >= 10 && lvl == 1)
	{
		PlayerStatsSystem::lvlUp = lvlUp + 1;
		PlayerStatsSystem::HP = HP + 10;
		PlayerStatsSystem::MP = MP + 5;
		PlayerStatsSystem::Atk = Atk + 3;
		PlayerStatsSystem::Def = Def + 3;
		PlayerStatsSystem::Intel = Intel + 3;
		PlayerStatsSystem::Spd = Spd + 3;
		PlayerStatsSystem::lvl = lvl + 1;
	}

	 if (currentXP >= 30 && lvl == 2)
	{

		 PlayerStatsSystem::lvlUp = lvlUp + 1;
		 PlayerStatsSystem::HP = HP + 10;
		 PlayerStatsSystem::MP = MP + 5;
		 PlayerStatsSystem::Atk = Atk + 3;
		 PlayerStatsSystem::Def = Def + 3;
		 PlayerStatsSystem::Intel = Intel + 3;
		 PlayerStatsSystem::Spd = Spd + 3;
		 PlayerStatsSystem::lvl = lvl + 1;
	}

	 if (currentXP >= 70 && lvl == 3)
	{
		
		 PlayerStatsSystem::lvlUp = lvlUp + 1;
		 PlayerStatsSystem::HP = HP + 10;
		 PlayerStatsSystem::MP = MP + 5;
		 PlayerStatsSystem::Atk = Atk + 3;
		 PlayerStatsSystem::Def = Def + 3;
		 PlayerStatsSystem::Intel = Intel + 3;
		 PlayerStatsSystem::Spd = Spd + 3;
		 PlayerStatsSystem::lvl = lvl + 1;
	}

	 if (currentXP >= 150 && lvl == 4)
	{
		
		 PlayerStatsSystem::lvlUp = lvlUp + 1;
		 PlayerStatsSystem::HP = HP + 10;
		 PlayerStatsSystem::MP = MP + 5;
		 PlayerStatsSystem::Atk = Atk + 3;
		 PlayerStatsSystem::Def = Def + 3;
		 PlayerStatsSystem::Intel = Intel + 3;
		 PlayerStatsSystem::Spd = Spd + 3;
		 PlayerStatsSystem::lvl = lvl + 1;
	}

	 if (currentXP >= 310 && lvl == 5)
	{
		 PlayerStatsSystem::lvlUp = lvlUp + 1;
		 PlayerStatsSystem::HP = HP + 10;
		 PlayerStatsSystem::MP = MP + 5;
		 PlayerStatsSystem::Atk = Atk + 3;
		 PlayerStatsSystem::Def = Def + 3;
		 PlayerStatsSystem::Intel = Intel + 3;
		 PlayerStatsSystem::Spd = Spd + 3;
		 PlayerStatsSystem::lvl = lvl + 1;
	}

	 if (currentXP >= 630 && lvl == 6)
	{
		 PlayerStatsSystem::lvlUp = lvlUp + 1;
		 PlayerStatsSystem::HP = HP + 10;
		 PlayerStatsSystem::MP = MP + 5;
		 PlayerStatsSystem::Atk = Atk + 3;
		 PlayerStatsSystem::Def = Def + 3;
		 PlayerStatsSystem::Intel = Intel + 3;
		 PlayerStatsSystem::Spd = Spd + 3;
		 PlayerStatsSystem::lvl = lvl + 1;
	}

	 if (currentXP >= 1270 && lvl == 7)
	{
		
		 PlayerStatsSystem::lvlUp = lvlUp + 1;
		 PlayerStatsSystem::HP = HP + 10;
		 PlayerStatsSystem::MP = MP + 5;
		 PlayerStatsSystem::Atk = Atk + 3;
		 PlayerStatsSystem::Def = Def + 3;
		 PlayerStatsSystem::Intel = Intel + 3;
		 PlayerStatsSystem::Spd = Spd + 3;
		 PlayerStatsSystem::lvl = lvl + 1;
	}

	 if (currentXP >= 1280 && lvl == 8)
	{
	
		 PlayerStatsSystem::lvlUp = lvlUp + 1;
		 PlayerStatsSystem::HP = HP + 10;
		 PlayerStatsSystem::MP = MP + 5;
		 PlayerStatsSystem::Atk = Atk + 3;
		 PlayerStatsSystem::Def = Def + 3;
		 PlayerStatsSystem::Intel = Intel + 3;
		 PlayerStatsSystem::Spd = Spd + 3;
		 PlayerStatsSystem::lvl = lvl + 1;
	}

	 if (currentXP >= 5110 && lvl == 9)
	{
	
		 PlayerStatsSystem::lvlUp = lvlUp + 1;
		 PlayerStatsSystem::HP = HP + 10;
		 PlayerStatsSystem::MP = MP + 5;
		 PlayerStatsSystem::Atk = Atk + 3;
		 PlayerStatsSystem::Def = Def + 3;
		 PlayerStatsSystem::Intel = Intel + 3;
		 PlayerStatsSystem::Spd = Spd + 3;
		 PlayerStatsSystem::lvl = lvl + 1;
	}
}

void PlayerStatsSystem::GainXP(int exp)
{
	currentXP = currentXP + exp;
}

void PlayerStatsSystem::AddDef(int def)
{
	Def = Def + 9;
}




void TestPlayerStatsSystem() {
	PlayerStatsSystem playerStatsSystemInstance = PlayerStatsSystem();
	playerStatsSystemInstance.CheckSystem();
	playerStatsSystemInstance.AddToInt();
	playerStatsSystemInstance.CheckPlayerLvl();
	playerStatsSystemInstance.GainXP(5110);
	playerStatsSystemInstance.CheckPlayerLvl();
	playerStatsSystemInstance.CheckSystem();
	printf("The player stats system doesn't do anything yet...\n");
}