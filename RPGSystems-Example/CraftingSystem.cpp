#include "CraftingSystem.h"
#include <vector>
//#include "InventorySystem.h"
#include "PlayerStatsSystem.h"




void CraftingSystem::CraftItem(std::string item)
{
			if (item == "armoredGloves")
			{
				if (iron >= 1 && leather >= 1)
				{
					armoredGloves++;
					leather--;
					iron--;

					printf("You have crafted 1 set of Armored Gloves.\n");
					printf("You have %d Iron left.\n", iron);
					printf("You have %d Leather left.\n\n", leather);
				}
				else
				{
					printf("insufficient items to craft.\n");
				}
			}
			else if (item == "ironChestplate" && PlayerStatsSystemReference.lvl == 2)
			{
				if (iron >= 2)
				{
					ironChestplate++;
					iron--;
					iron--;

					printf("You have crafted 1 Iron ChestPlate.\n");
					printf("You have %d Iron left.\n\n", iron);
				}

				else
				{
					printf("insufficient items to craft.\n");
				}

			}
		
	
}


CraftingSystem::CraftingSystem(PlayerStatsSystem& PlayerStatsSystemReferenceInput) :
	PlayerStatsSystemReference(PlayerStatsSystemReferenceInput), 
	leather(1), iron(4), ironChestplate(0), armoredGloves(0)
{
}

void CraftingSystem::CheckInventory()
{
		printf("You have %d Iron.\n", iron);
		printf("You have %d Leather.\n", leather);
		printf("You have %d Iron Chestplate.\n", ironChestplate);
		printf("You have %d Armored Gloves.\n\n", armoredGloves);

}

void CraftingSystem::CheckRecipes()
{
	printf("The Iron Chestplate needs two Iron to craft it.\n");
	printf("The Armored Gloves need one Iron and one Leather to craft it.\n\n");

}

void TestCraftingSystem() {


	PlayerStatsSystem examplePlayerStatsSystem = PlayerStatsSystem();
	CraftingSystem someCraftingInstance = CraftingSystem(examplePlayerStatsSystem);
	someCraftingInstance.CheckInventory();
	someCraftingInstance.CheckRecipes();
	someCraftingInstance.CraftItem("armoredGloves");
	someCraftingInstance.CraftItem("ironChestplate");






}