
#include "ShopSystem.h"
#include <stdio.h>
#include <string>

//constructor
void ShopItem::ShowItemShop()
{
	printf("%s\n %d\n %d\n", shopItemName.c_str(), shopItemCost, shopItemQuantity);
}

ShopItem::ShopItem(std::string ItemName, int ItemCost, int ItemQuantity)
{
	shopItemName = ItemName;
	shopItemCost = ItemCost;
	shopItemQuantity = ItemQuantity;
}

ShopItem InstanceofShopItem = ShopItem("Potion", 20, 20)
{
	InstanceofShopItem.ShowShopItem();
}







void TestShopSystem() {
	printf("The shop system doesn't do anything yet...\n");
}