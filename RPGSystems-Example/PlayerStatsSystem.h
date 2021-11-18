#pragma once
#include <stdio.h>

class PlayerStatsSystem
{
public:
	PlayerStatsSystem();
	virtual void CheckSystem();
	virtual void AddToInt();
	virtual void CheckPlayerLvl();
	virtual void GainXP(int exp);

private:
	int HP = 100;
	int MP = 50;
	int Atk = 20;
	int Def = 10;
	int Intel = 10;
	int Spd = 15;
	int lvl = 1;
	int exp = 0;

	int currentXP = 0;
	int lvlUp = 0;
	int XP = 0;

	
};

void TestPlayerStatsSystem();