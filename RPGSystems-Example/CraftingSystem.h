#pragma once
#include <stdio.h>
#include <string>



class CraftingSystem {

public:
	CraftingSystem();
	virtual void CheckInventory();
	virtual void CheckRecipes();
	virtual void CraftItem(std::string item);

private:
	int someInt;
	int iron;
	int ironChestplate;
	int armoredGloves;
	int leather;
};


void TestCraftingSystem();

