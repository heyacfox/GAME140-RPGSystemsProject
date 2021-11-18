#include "InventorySystem.h"
#include "EquipmentSystem.h"
#include "CraftingSystem.h"

InventorySystem::InventorySystem()
{
	InventorySize = 15;
	InventoryItems = 0;
	PlayerPosition = 1;
	SwordPosition = 1;
	ApplePosition = 1;
	ChestplatePosition = 1;
	SwordAmount = 0;
	AppleAmount = 0;
	Sword = "SWORD";
	Apple = "APPLE(%d)", AppleAmount;
	Chestplate = "CHESTPLATE";
	Sprite = "SPRITE";
	QuestAmount = 0;


	std::string Sword = "Sword" + std::to_string(SwordAmount);

	std::cout << Sword << std::endl;
}

void InventorySystem::CheckInventory() 
{
	printf("The amount of items in the inventory is: %d\n", InventoryItems);
	printf("The size of the inventory is: %d\n", InventorySize);
	if (QuestAmount >= 1)
	{
		printf("QUEST INVENTORY: %s\n", Sprite.c_str());
	}
}

void InventorySystem::AddToInventory() 
{
	if (InventorySize >= 0)
	{
		if (SwordPosition == PlayerPosition)
		{
			InventoryItems = InventoryItems + 1;
			printf("%s has been picked up\n", Sword.c_str());
			InventorySize = InventorySize - 1;
			SwordAmount = SwordAmount + 1;
			printf("Inventory size has decreased\n");
		}

		if (ApplePosition == PlayerPosition)
		{
			InventoryItems = InventoryItems + 1;
			printf("%s has been picked up\n", Apple.c_str());
			AppleAmount = AppleAmount + 1;
			InventorySize = InventorySize - 1;
			printf("Inventory size has decreased\n");
		}

		if (ChestplatePosition == PlayerPosition)
		{
			InventoryItems = InventoryItems + 1;
			printf("%s has been picked up\n", Chestplate.c_str());
			ChestplateAmount = ChestplateAmount + 1;
			InventorySize = InventorySize - 1;
			printf("Inventory size has decreased\n");
		}
	}
}

void InventorySystem::UseInventory()
{
	printf("The %s has been used\n", Apple.c_str());
	InventorySystem::DestroyInventory();
}

void InventorySystem::DestroyInventory() 
{
	InventoryItems = InventoryItems - 1;
	InventorySize = InventorySize + 1;
	if (AppleAmount >= 1)
	{
		AppleAmount = AppleAmount - 1;
	}
	else if (AppleAmount == 1)
	{
		AppleAmount = AppleAmount - 1;
		ApplePosition = 0;
	}
}

void InventorySystem::DropInventory()
{
	InventoryItems = InventoryItems - 1;
	InventorySize = InventorySize + 1;
	printf("The %s was dropped\n", Sword.c_str());
	SwordPosition = PlayerPosition;
	SwordAmount = SwordAmount - 1;
}

void InventorySystem::QuestInventory()
{
	printf("You have accepted the hobo's request\n");
	printf("You received a %s\n", Sprite.c_str());
	QuestAmount = QuestAmount + 1;
}

void InventorySystem::CraftingInventory()
{
	TestCraftingSystem();
}

void InventorySystem::ShopInventory()
{

}

void InventorySystem::EquipInventory()
{
	TestEquipmentSystem();
}

/*std::string InventorySystem::GetSword()
{
	return std::string();
}*/

void TestInventorySystem() 
{
	InventorySystem inventoryInstance = InventorySystem();
	inventoryInstance.CheckInventory();
	inventoryInstance.AddToInventory();
	inventoryInstance.CheckInventory();
	inventoryInstance.UseInventory();
	inventoryInstance.CheckInventory();
	inventoryInstance.DropInventory();
	inventoryInstance.CheckInventory();
	inventoryInstance.AddToInventory();
	inventoryInstance.CheckInventory();
	inventoryInstance.QuestInventory();
	inventoryInstance.CheckInventory();
	inventoryInstance.EquipInventory();
	inventoryInstance.CraftingInventory();
}

//void TestInventorySystem() {
	//printf("The inventory system doesn't do anything yet...\n");
//}