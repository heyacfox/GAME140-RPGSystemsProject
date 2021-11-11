#include "InventorySystem.h"

InventorySystem::InventorySystem()
{
	InventorySize = 5;
	InventoryItems = 1;
	Sword = "SWORD";
	Apple = "APPLE";
}

void InventorySystem::CheckInventory() 
{
	printf("The amount of items in the inventory is: %d\n", InventoryItems);
	printf("The size of the inventory is: %d\n", InventorySize);
}

void InventorySystem::AddToInventory() 
{
	InventoryItems = InventoryItems + 1;
	printf("%s has been picked up\n", Sword.c_str());
	InventorySize = InventorySize - 1;
	printf("Inventory size has decreased\n");
}

void InventorySystem::UseInventory()
{
	printf("The %s has been used\n", Sword.c_str());
	InventorySystem::DropInventory();
	printf("The %s was dropped\n", Sword.c_str());
}

void InventorySystem::DestroyInventory() 
{
	InventoryItems = InventoryItems - 1;
	InventorySize = InventorySize + 1;
}

void InventorySystem::DropInventory()
{
	InventoryItems = InventoryItems - 1;
	InventorySize = InventorySize + 1;
}

void TestInventorySystem() 
{
	InventorySystem inventoryInstance = InventorySystem();
	inventoryInstance.CheckInventory();
	inventoryInstance.AddToInventory();
	inventoryInstance.CheckInventory();
	inventoryInstance.UseInventory();
	inventoryInstance.CheckInventory();
}

//void TestInventorySystem() {
	//printf("The inventory system doesn't do anything yet...\n");
//}