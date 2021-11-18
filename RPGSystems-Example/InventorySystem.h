#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

class InventorySystem {

public:
	InventorySystem();
	virtual void CheckInventory();
	virtual void AddToInventory();
	virtual void DropInventory();
	virtual void UseInventory();
	virtual void DestroyInventory();
	virtual void QuestInventory();
	virtual void CraftingInventory();
	virtual void ShopInventory();
	virtual void EquipInventory();
	//virtual std::to_string GetSword();
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
	int ChestplatePosition;
	std::string Chestplate;
	int ChestplateAmount;
};

void TestInventorySystem();