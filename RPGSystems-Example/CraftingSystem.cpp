#include "CraftingSystem.h"




CraftingSystem::CraftingSystem()
{
	someInt = 1;
	iron = 4;
	ironChestplate = 0;
	armoredGloves = 0;
	leather = 1;
	bool wantsToCraft = false;
	bool displayInv = false;
}

void CraftingSystem::CheckSystem() {
	printf("SomeSystem has been checked with an int of %d!\n", someInt);

}

void CraftingSystem::AddToInt()
{
	someInt = someInt + 1;
}

void CraftingSystem::CheckInventory()
{
	bool displayInv = true;

	if (bool displayInv = true)
	{
		printf("You have %d Iron.\n", iron);


	}


	if (bool wantsToCraft = true)
	{
		bool displayInv = true;
		{
			if (armoredGloves)
			{
				if (iron >= 1 && leather >= 1)
				{
					armoredGloves++;
					leather--;
					iron--;

					printf("You have crafted 1 set of Armored Gloves.\n");
					printf("You have %d Iron left.\n", iron);
					printf("You have %d Iron left.\n", leather);
				}
				else
				{
					printf("insufficient items to craft.\n");
				}
			}
			else if (ironChestplate)
			{
				if (iron >= 2)
				{
					ironChestplate++;
					iron - 2;

					printf("You have crafted 1 Iron ChestPlate.\n");
					printf("You have %d Iron left.\n", iron);
				}
				else
				{
					printf("insufficient items to craft.\n");
				}

			}
		}
		//if (someCraftingInstance.CheckSystem(Inventory))

	}
}

void TestCraftingSystem() {



	CraftingSystem someCraftingInstance = CraftingSystem();
	someCraftingInstance.CheckSystem();
	someCraftingInstance.CheckInventory();
	someCraftingInstance.AddToInt();
	someCraftingInstance.CheckSystem();






}