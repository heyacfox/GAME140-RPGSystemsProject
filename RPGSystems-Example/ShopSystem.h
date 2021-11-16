#pragma once
#include <stdio.h>
#include <string>
#include <vector>

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
	void BuyItem();
	std::vector <ShopItem> itemList;
};

void TestShopSystem();