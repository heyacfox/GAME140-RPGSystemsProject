#pragma once
#include <stdio.h>
#include <string>

class InventorySystem {

public:
	InventorySystem();
	virtual void CheckInventory();
	virtual void AddToInventory();
	virtual void DropInventory();
	virtual void UseInventory();
	virtual void DestroyInventory();
private:
	int InventorySize;
	int InventoryItems;
	std::string(Sword)
	{

	};
	std::string(Apple)
	{
		
	};
};

void TestInventorySystem();