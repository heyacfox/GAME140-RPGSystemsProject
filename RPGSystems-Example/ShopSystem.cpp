
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
	//Potion
	ShopItem item1 = ShopItem("Potion", 20, 5);
	shopSystem1.itemList.push_back(item1);
	//Sword
	ShopItem item2 = ShopItem("Sword", 50, 1);
	shopSystem1.itemList.push_back(item2);
	//Horse
	ShopItem item3 = ShopItem("Horse", 100, 1);
	shopSystem1.itemList.push_back(item3);
	//Show Shop
	printf("======Item Shop======\n");
	for (int i = 0; i < shopSystem1.itemList.size(); i++)
	{
		printf("%s | ", shopSystem1.itemList[i].shopItemName.c_str());
		printf("Cost: %d gold | ", shopSystem1.itemList[i].shopItemCost);
		printf("Quantity %d\n", shopSystem1.itemList[i].shopItemQuantity);
	}
	shopSystem1.BuyItem(Item_Potion);
}

void ShopSystem::BuyItem(Item Item)
{
	playerGold = 500;
	switch (Item)
	{
	case Item_Potion:
		if (playerGold >= itemList[0].shopItemCost) {
			if (itemList[0].shopItemQuantity == 0)
			{
				printf("There are no potions left to buy.");
			}
			else
			{
				itemList[0].shopItemQuantity--;
				playerGold = playerGold - itemList[0].shopItemCost;
				printf("You received 1 Potion\n");
				printf("You Have %d Gold\n", playerGold);
			}
		}
		else {
			printf("You do not have enough gold to buy this item!\n");
		}
		
		break;
	case Item_Sword:
		if (itemList[1].shopItemQuantity == 0)
		{
			printf("There are no swords left to buy.\n");
		}
		else
		{
			itemList[1].shopItemQuantity--;
			playerGold = playerGold - itemList[1].shopItemCost;
			printf("You received 1 Sword");
		}
		break;
	case Item_Horse:
		if (itemList[2].shopItemQuantity)
		{
			printf("There are no horses left to buy.");
		}
		else
		{
			itemList[2].shopItemQuantity--;
			playerGold = playerGold - itemList[2].shopItemCost;
			printf("You received 1 Horse");
		}
		break;
	}
}
