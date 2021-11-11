#include "CraftingSystem.h"

void InitializeGame(PlayerState& playerState)
{
	int iron = 2;
	int ironChestplate = 0;
	int armoredGloves = 0;
	int leather = 1;
	PlayerState.wantsToCraft = false;
	PlayerState.displayInv = false;
}

CraftingSystem::CraftingSystem()
{
	someInt = 1;
}

void CraftingSystem::CheckSystem() {
	printf("SomeSystem has been checked with an int of %d!\n", someInt);

	if (wantsToCraft = true)
	{
		diaplayInv = true;
	{
		if(ironChestplate)
		{
			if (iron >= 1 && leather >= 1)
			{
				armoredGloves++;
				leather--;
				iron--;
			}
		}
		if (armoredGloves)
		{
			if (iron >= 2)
			{
				ironChestplate++;
				iron - 2;

			}
			else
			{
				printf("insufficient items to craft.");
			}
		}
	}
	//if (someCraftingInstance.CheckSystem(Inventory))
}

void CraftingSystem::AddToInt() {
	someInt = someInt + 1;
}

void TestCraftingSystem() {
	CraftingSystem someCraftingInstance = CraftingSystem();
	someCraftingInstance.CheckSystem();
	someCraftingInstance.AddToInt();
	someCraftingInstance.CheckSystem();
}