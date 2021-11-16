
#include "ShopSystem.h"
#include <stdio.h>
#include <string>

//constructor
void ShopItem::ShowItemShop()
{
	printf("Item Name: %s | Cost: %d gold | Quantity: %d \n", shopItemName.c_str(), shopItemCost, shopItemQuantity);
	
}

ShopItem::ShopItem(std::string ItemName, int ItemCost, int ItemQuantity)
{
	shopItemName = ItemName;
	shopItemCost = ItemCost;
	shopItemQuantity = ItemQuantity;
}




void TestShopSystem() {
	ShopSystem shopSystem1 = ShopSystem();
	ShopItem item1 = ShopItem("Potion", 20, 5);
	shopSystem1.itemList.push_back(item1);
}

void ShopSystem::BuyItem()
{

}
