#include "InventorySystem.h"
#include "EquipmentSystem.h"
#include "CraftingSystem.h"
#include "ShopSystem.h"

InventorySystem::InventorySystem()
{
	InventorySize = 15;
	InventoryItems = 0;
	PlayerPosition = 1;
	
	Sword = "SWORD";
	SwordPosition = 0;
	SwordAmount = 0;

	Apple = "APPLE";
	ApplePosition = 1;
	AppleAmount = 0;
	
	Chestplate = "CHESTPLATE";
	ChestplatePosition = 1;
	
	Potion = "POTION";
	PotionPosition = 0;
	PotionAmount = 0;

	Horse = "HORSE";
	HorsePosition = 0;
	HorseAmount = 0;

	Sprite = "SPRITE";
	QuestAmount = 0;


	std::string Sword = "Sword" + std::to_string(SwordAmount);

	//std::cout << Sword << std::endl;
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
	if (InventorySize > 0)
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

		if (PotionPosition == PlayerPosition)
		{
			InventoryItems = InventoryItems + 1;
			printf("%s has been picked up\n", Potion.c_str());
			PotionAmount = PotionAmount + 1;
			InventorySize = InventorySize - 1;
			printf("Inventory size has decreased\n");
		}

		if (HorsePosition == PlayerPosition)
		{
			InventoryItems = InventoryItems + 1;
			printf("%s has been picked up\n", Horse.c_str());
			HorseAmount = HorseAmount + 1;
			InventorySize = InventorySize - 1;
			printf("Inventory size has decreased\n");
		}
	}
}

void InventorySystem::QuestInventory()
{
	printf("You have accepted the hobo's request\n");
	printf("You received a %s\n", Sprite.c_str());
	QuestAmount = QuestAmount + 1;
}



void InventorySystem::UseApple()
{
	printf("The %s has been used\n", Apple.c_str());
	
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

void InventorySystem::UsePotion()
{
	printf("The %s has been used\n", Potion.c_str());

	InventoryItems = InventoryItems - 1;
	InventorySize = InventorySize + 1;

	if (PotionAmount >= 1)
	{
		PotionAmount = PotionAmount - 1;
	}

	else if (PotionAmount == 1)
	{
		PotionAmount = PotionAmount - 1;
		PotionPosition = 0;
	}
}



void InventorySystem::DropSword()
{
	InventoryItems = InventoryItems - 1;
	InventorySize = InventorySize + 1;
	printf("The %s was dropped\n", Sword.c_str());
	SwordPosition = PlayerPosition;
	SwordAmount = SwordAmount - 1;
}



void InventorySystem::ShopPotion()
{
	if (InventorySize > 0)
	{
		InventoryItems = InventoryItems + 1;
		printf("%s has been bought\n", Potion.c_str());
		PotionAmount = PotionAmount + 1;
		InventorySize = InventorySize - 1;
		printf("Inventory size has decreased\n");
	}
}

void InventorySystem::ShopSword()
{
	if (InventorySize > 0)
	{
		InventoryItems = InventoryItems + 1;
		printf("%s has been bought\n", Sword.c_str());
		InventorySize = InventorySize - 1;
		SwordAmount = SwordAmount + 1;
		printf("Inventory size has decreased\n");
	}
}

void InventorySystem::ShopHorse()
{
	if (InventorySize > 0)
	{
		InventoryItems = InventoryItems + 1;
		printf("%s has been bought\n", Horse.c_str());
		InventorySize = InventorySize - 1;
		HorseAmount = HorseAmount + 1;
		printf("Inventory size has decreased\n");
	}
}



void InventorySystem::SellPotion()
{
	if (PotionAmount > 0)
	{
		InventoryItems = InventoryItems - 1;
		printf("%s has been sold\n", Potion.c_str());
		PotionAmount = PotionAmount - 1;
		InventorySize = InventorySize + 1;
	}
}

void InventorySystem::SellSword()
{
	if (SwordAmount > 0)
	{
		InventoryItems = InventoryItems - 1;
		printf("%s has been sold\n", Sword.c_str());
		SwordAmount = SwordAmount - 1;
		InventorySize = InventorySize + 1;
	}
}

void InventorySystem::SellHorse()
{
	if (HorseAmount > 0)
	{
		InventoryItems = InventoryItems - 1;
		printf("%s has been sold\n", Horse.c_str());
		HorseAmount = HorseAmount - 1;
		InventorySize = InventorySize + 1;
	}
}



void InventorySystem::EquipInventory()
{
	TestEquipmentSystem();
}

/*std::string InventorySystem::GetSword()
{
	return std::string();
}*/

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

void InventorySystem::CraftingInventory()
{
	TestCraftingSystem();
}

void InventorySystem::ShopInventory()
{
	TestShopSystem();
}

void TestInventorySystem() 
{
	InventorySystem inventoryInstance = InventorySystem();
	inventoryInstance.CheckInventory();
	inventoryInstance.AddToInventory();
	inventoryInstance.CheckInventory();
	//inventoryInstance.UseInventory();
	inventoryInstance.CheckInventory();
	//inventoryInstance.DropInventory();
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