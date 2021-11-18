#include <stdlib.h>
#include <stdio.h>
#include "Player.h"
#include "SomeSystem.h"
#include "CraftingSystem.h"
#include "EquipmentSystem.h"
#include "InventorySystem.h"
#include "PlayerStatsSystem.h"
#include "QuestSystem.h"
#include "ShopSystem.h"
#include "SkillsSystem.h"
#include "DependentSystem.h"


int main() {
	printf("-------\n--Some System Test--\n");
	TestSomeSystem();
	printf("-------\n--Dependent System Test--\n");
	TestDependentSystem();
	printf("\n-------\n--Crafting System Test--\n");
	TestCraftingSystem();
	printf("\n-------\n--Equipment System Test--\n");
	TestEquipmentSystem();
	printf("\n-------\n--Inventory System Test--\n");
	TestInventorySystem();
	printf("\n-------\n--Player Stats System Test--\n");
	TestPlayerStatsSystem();
	printf("\n-------\n--Quest System Test--\n");
	TestQuestSystem();
	printf("\n-------\n--Shop System Test--\n");
	TestShopSystem();
	printf("\n-------\n--Skills System Test--\n");
	TestSkillsSystem();
	printf("\n-------\n");
	printf("End of Tests\n");


	system("pause");
}