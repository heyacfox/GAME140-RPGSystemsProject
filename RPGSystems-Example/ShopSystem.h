#pragma once
#include <stdio.h>
#include <string>

class ShopItem
{
	std::string shopItemName;
	int shopItemCost;
	int shopItemQuantity;
	//method
	void ShowItemShop();
	//constructor
	ShopItem(std::string ItemName, int ItemCost, int ItemQuantity)
};

class ShopSystem
{
public:
	int playerGold;
	void BuyItem();
};

void TestShopSystem();