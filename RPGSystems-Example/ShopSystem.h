#pragma once
#include <stdio.h>
#include <string>
#include <vector>

enum Item
{
	Item_Potion,
	Item_Sword,
	Item_Horse
};

class ShopItem
{
public:
	std::string shopItemName;
	int shopItemCost;
	int shopItemQuantity;
	
	//method
	void ShowItemShop();
	//constructor
	ShopItem(std::string ItemName, int ItemCost, int ItemQuantity);
};

class ShopSystem
{
public:
	int playerGold;
	void BuyItem(Item Item);
	std::vector <ShopItem> itemList;
};



void TestShopSystem();