#pragma once
#include <stdio.h>



class CraftingSystem {

public:
	CraftingSystem();
	virtual void CheckSystem();
	virtual void AddToInt();
	virtual void CheckInventory();

private:
	int someInt;
	int iron;
	int ironChestplate;
	int armoredGloves;
	int leather;

	struct PlayerState
	{
		bool wantsToCraft;
		bool displayInv;
	};

};


void TestCraftingSystem();

