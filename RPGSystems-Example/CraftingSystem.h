#pragma once
#include <stdio.h>
#include <string>
#include "PlayerStatsSystem.h"



class CraftingSystem {

public:
	CraftingSystem(PlayerStatsSystem& PlayerStatsSystemReferenceInput);
	virtual void CheckInventory();
	virtual void CheckRecipes();
	virtual void CraftItem(std::string item);

private:
	PlayerStatsSystem& PlayerStatsSystemReference;
	int iron;
	int ironChestplate;
	int armoredGloves;
	int leather;
};


void TestCraftingSystem();

