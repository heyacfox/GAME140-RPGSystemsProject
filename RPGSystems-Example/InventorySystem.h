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
	virtual void QuestInventory();

	virtual void UseApple();
	virtual void UsePotion();

	virtual void DropSword();

	virtual void ShopPotion();
	virtual void ShopSword();
	virtual void ShopHorse();

	virtual void SellPotion();
	virtual void SellSword();
	virtual void SellHorse();



	virtual void CraftingInventory();
	virtual void ShopInventory();
	virtual void EquipInventory();
	virtual void DestroyInventory();
	//virtual std::to_string GetSword();
private:
	int InventorySize;
	int InventoryItems;
	int PlayerPosition;
	int QuestAmount;

	std::string Sword;
	int SwordPosition;
	int SwordAmount;

	std::string Potion;
	int PotionPosition;
	int PotionAmount;

	std::string Apple;
	int ApplePosition;
	int AppleAmount;

	std::string Chestplate;
	int ChestplatePosition;
	int ChestplateAmount;

	std::string Horse;
	int HorsePosition;
	int HorseAmount;



	std::string Sprite;
	struct AppleState
	{
	};
};

void TestInventorySystem();