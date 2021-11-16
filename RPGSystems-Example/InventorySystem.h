#pragma once
#include <stdio.h>
#include <string>
#include <vector>

class InventorySystem {

public:
	InventorySystem();
	virtual void CheckInventory();
	virtual void AddToInventory();
	virtual void DropInventory();
	virtual void UseInventory();
	virtual void DestroyInventory();
	virtual void QuestInventory();
private:
	int InventorySize;
	int InventoryItems;
	int PlayerPosition;
	int SwordPosition;
	int SwordAmount;
	std::string Sword;
	int ApplePosition;
	int AppleAmount;
	std::string Apple;
	int QuestAmount;
	std::string Sprite;
	struct AppleState
	{
	};
};

void TestInventorySystem();