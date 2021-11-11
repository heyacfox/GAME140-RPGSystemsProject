#pragma once
#include <stdio.h>



class CraftingSystem {

public:
	CraftingSystem();
	virtual void CheckSystem();
	virtual void AddToInt();
	struct PlayerState
	{
		bool wantsToCraft;
		bool displayInv;
	}
private:
	int someInt;

};


void TestCraftingSystem();
void InitializeGame(PlayerState& playerState);

