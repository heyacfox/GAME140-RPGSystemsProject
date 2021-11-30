#pragma once
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
#include <Windows.h>

void runTests() {
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
}

void runGameplay() {

	printf("SETUP: The Game (Ultimate RPG Adventure) is now being set up...\n");
	InventorySystem inventorySystemInstance = InventorySystem();
	PlayerStatsSystem playerStatsSystemInstance = PlayerStatsSystem();
	QuestSystem questSystemInstance = QuestSystem();
	CraftingSystem craftingSystemInstance = CraftingSystem(playerStatsSystemInstance);
	EquipmentSystem equipmentSystemInstance = EquipmentSystem(playerStatsSystemInstance);

	//---Shop System Setup Start ---//	
	ShopSystem shopSystemInstance = ShopSystem();
	//potion
	ShopItem item1 = ShopItem("Potion", 20, 5);
	shopSystemInstance.itemList.push_back(item1);
	//Sword
	ShopItem item2 = ShopItem("Sword", 50, 1);
	shopSystemInstance.itemList.push_back(item2);
	//Horse
	ShopItem item3 = ShopItem("Horse", 100, 1);
	shopSystemInstance.itemList.push_back(item3);
	//---Shop System Setup End ---//

	SkillSystem skillSystemInstance = SkillSystem();
	printf("SETUP: COMPLETE\n\n");
	printf("NARRATOR: Ultimate RPG Adventure having been set up, you awaken in a town...\n");
	printf("NARRATOR: You are approached by a farmer, who gives you a quest!\n");
	printf("NARRATOR: The farmer says \"There is an evil Dragolich in a nearby mountain that is terrorizing the land!\n The Dragolich says they want to rule the whole land! Only you can stop them!\n");
	questSystemInstance.AddToInt();
	questSystemInstance.ActivateQuest();
	printf("NARRATOR: You check the status of your quests...\n");
	questSystemInstance.CheckSystem();
	printf("NARRATOR: You walk out of town, and encounter a goblin!\n");
	printf("NARRATOR: After a fierce battle, you defeat it and gain 5 EXP!\n");
	playerStatsSystemInstance.GainXP(5);
	playerStatsSystemInstance.CheckPlayerLvl();
	printf("NARRATOR: You check your stats to see how strong you are.\n");
	playerStatsSystemInstance.CheckSystem();
	printf("NARRATOR: That was a fierce battle. You need to get stronger to complete your quest.\n");
	printf("NARRATOR: You check your inventory to see what you have...\n");
	inventorySystemInstance.CheckInventory();
	printf("NARRATOR: You had better pick up some supplies before you continue on your quest. Fortunately, there is a town nearby!\n");
	printf("NARRATOR: You walk into town, and there is a shop. Maybe you can pick up some better gear there!\n");
	printf("NARRATOR: You check what the shop has...\n");
	shopSystemInstance.ShowShop();
	printf("NARRATOR: A passing traveler takes pity on your empty coin purse and gives you some gold...\n");
	shopSystemInstance.playerGold = 150;
	shopSystemInstance.ShowShop();
	printf("NARRATOR: You try to buy a potion, a horse, and a sword.\n");
	shopSystemInstance.BuyItem(Item_Potion);
	printf("NARRATOR: The shopkeeper says you are the LUCKY WINNER OF THE DAY and for some reason gives you 400 gold.\n");
	shopSystemInstance.BuyItem(Item_Horse);
	printf("NARRATOR: On thinking it over, the shopkeeper was too attached to the horse to part with it.\n");
	printf("NARRATOR: Feeling bad about the horse thing, the shopkeeper gives you a 20 gold discount on the sword.");
	shopSystemInstance.BuyItem(Item_Sword);
	shopSystemInstance.ShowShop();
	printf("NARRATOR: The shopkeeper was unwilling to part with the horse, but you still get a potion and a sword.\n");
	printf("NARRATOR: You add the items to your inventory.\n");
	inventorySystemInstance.ShopPotion();
	inventorySystemInstance.ShopSword();
	inventorySystemInstance.CheckInventory();
	printf("NARRATOR: While you're in town, you check if there's anything else you can do.\n");
	printf("NARRATOR: After visiting a Hamwig's Academy of Witchery and Wizardcraft, you learned the Fireball and Healing skills!\n");
	skillSystemInstance.AddSkill("Fireball");
	skillSystemInstance.AddSkill("Heal");
	skillSystemInstance.CheckSkillSystem();
	SkillEffect playerEffect = SkillEffect(playerStatsSystemInstance);
	printf("NARRATOR: You try out your new heal spell and fireball spell...\n");
	skillSystemInstance.UseSkill(playerStatsSystemInstance, "Heal");
	skillSystemInstance.UseSkill(playerStatsSystemInstance, "Fireball");
	skillSystemInstance.CheckSkillSystem();
	printf("NARRATOR: Those skills may come in handy later.\n");
	printf("NARRATOR: There is a nearby armorer, you stop by and they ask you to help them with their work.\n");
	craftingSystemInstance.CheckRecipes();
	printf("NARRATOR: You check to see if you have the items you need to make the item.\n");
	craftingSystemInstance.CheckInventory();
	printf("NARRATOR: Seeing that you have the ingredients, you try to craft those items.\n");
	craftingSystemInstance.CraftItem("armoredGloves");
	craftingSystemInstance.CraftItem("ironChestplate");
	craftingSystemInstance.CheckInventory();
	printf("NARRATOR: You couldn't craft the iron chestplate because you weren't high enough level.\n");
	printf("NARRATOR: After doing slaying a vile rat, you gained exp and gained a level.\n");
	playerStatsSystemInstance.GainXP(10);
	playerStatsSystemInstance.CheckPlayerLvl();
	playerStatsSystemInstance.CheckSystem();
	printf("NARRATOR: You try to craft the chestplate again\n");
	craftingSystemInstance.CraftItem("ironChestplate");
	craftingSystemInstance.CheckInventory();
	printf("NARRATOR: Maybe you should equip that chestplate. You check what you currently have equipped and your current stats\n");
	playerStatsSystemInstance.CheckSystem();
	equipmentSystemInstance.NoGearCheck();
	printf("NARRATOR: You equip the chestplate.\n");
	equipmentSystemInstance.AddToInt();
	equipmentSystemInstance.DefenseIncreaseCheck();
	printf("NARRATOR: Equipping the chestplate also helped you gain EXP...for some reason.\n");
	playerStatsSystemInstance.CheckPlayerLvl();
	playerStatsSystemInstance.CheckSystem();
	printf("NARRATOR: Equipped with magic and items, you set out to complete your quest.\n");
	printf("NARRATOR: The mountain of terror looms ahead. You encounter the Dragolich's minions and throw 30 fireballs at them until they flee in terror.\n");
	for (int i = 0; i < 30; i++) {
		skillSystemInstance.UseSkill(playerStatsSystemInstance, "Fireball");
	}
	skillSystemInstance.CheckSkillSystem();
	playerStatsSystemInstance.GainXP(500);
	playerStatsSystemInstance.CheckPlayerLvl();
	playerStatsSystemInstance.CheckSystem();
	printf("NARRATOR: The minions defeated, you use a potion before your final fight.\n");
	inventorySystemInstance.CheckInventory();
	inventorySystemInstance.UsePotion();
	inventorySystemInstance.CheckInventory();
	printf("NARRATOR: You walk up the final staircase.\n");
	printf("NARRATOR: \"You cannot stop me!\" the Dragolich says.\n\"I will rule this broken land and make it glorious!\"\n");
	printf("NARRATOR: Instead of attacking the Dragolich, you drop your sword.\n");
	inventorySystemInstance.DropSword();
	inventorySystemInstance.CheckInventory();
	printf("NARRATOR: \"Huh? What's that about? Aren't you going to fight me?\"\n");
	printf("NARRATOR: Then, you cast heal on yourself.\n");
	skillSystemInstance.UseSkill(playerStatsSystemInstance, "Heal");
	skillSystemInstance.CheckSkillSystem();
	printf("NARRATOR: The Dragolich stops trying to fight you, surprised at your action.\n");
	printf("NARRATOR: \"Strange. I saw how broken the land was,\" the Dragolich says, \"and I thought that if I could control it, I could fix it.\"\n"
		"I thought I was trying to help others by telling them what they should do, but everyone else just thought I was being overly controlling.\n"
		"I couldn't see the negative impact I was causing because I wasn't taking time to take care of myself.\n"
		"I need to remember to take care of myself before trying to solve everyone else's problems.\"\n");
	printf("NARRATOR: The Dragolich agrees to live in peace with the people.\n");
	printf("NARRATOR: ...and make sure to ask if others need help before trying to provide it.\n");
	questSystemInstance.CompleteQuest();
	printf("NARRATOR: THE END!\n\n");




}

int main() {
	
	//runTests();
	runGameplay();

	system("pause");
	return 0;
}


