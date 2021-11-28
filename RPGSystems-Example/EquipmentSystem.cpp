#include "SomeSystem.h"
#include <stdio.h>
#include <string>
#include "EquipmentSystem.h"

//test equip function 
EquipmentSystem::EquipmentSystem(PlayerStatsSystem& SystemInput): 
	PlayerStateSystemReference(SystemInput) 
{
	defenseInt = 1;
	defenseInt2 = 10;
	SteelChestplate = "Steel Chestplate";
}

void EquipmentSystem::NoGearCheck() {
	printf("EquipmentSystem has been checked! No gear equiped! Your defense has risen by %d !\n", defenseInt);
}

void EquipmentSystem::DefenseIncreaseCheck() {
	printf("EquipmentSystem has been checked! Equiping %s increased defense by % d!\n\n", SteelChestplate.c_str(), defenseInt);
}

void EquipmentSystem::AddToInt() {
	defenseInt = defenseInt + 9;
	PlayerStateSystemReference.GainXP(5);
	PlayerStateSystemReference.AddDef(9); 
}

void TestEquipmentSystem() {
	PlayerStatsSystem StateSytemInstance = PlayerStatsSystem();
	EquipmentSystem someSystemInstance = EquipmentSystem(StateSytemInstance); 
	someSystemInstance.NoGearCheck();
	someSystemInstance.AddToInt();
	someSystemInstance.DefenseIncreaseCheck();
	someSystemInstance.CheckSystem3();
	someSystemInstance.SubtractToInt();
	someSystemInstance.CheckSystem4();
}

	//Test unequip function


void EquipmentSystem::CheckSystem3() {
	printf("EquipmentSystem has been checked! %s has increased your defense by % d\n", SteelChestplate.c_str(), defenseInt2); 
}

void EquipmentSystem::SubtractToInt()
{
	defenseInt2 = defenseInt2 -9;
}

void EquipmentSystem::CheckSystem4() {
	printf("EquipmentSystem has been checked! You unequied %s and your defense has fallen to % d!\n",SteelChestplate.c_str(), defenseInt2);
}
