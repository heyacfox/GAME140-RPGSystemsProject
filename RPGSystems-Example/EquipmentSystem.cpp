#include "SomeSystem.h"
#include <stdio.h>
#include <string>
#include "EquipmentSystem.h"

//test equip function 
EquipmentSystem::EquipmentSystem()
{
	defenseInt = 1;
	defenseInt2 = 10;
	SteelChestplate = 9;
}

void EquipmentSystem::NoGearCheck() {
	printf("EquipmentSystem has been checked! No gear equiped! Your defense has risen by %d !\n", defenseInt);
}

void EquipmentSystem::DefenseIncreaseCheck() {
	printf("EquipmentSystem has been checked! Equiping the Steel Chestplate increased defense by % d!\n\n", defenseInt);
}

void EquipmentSystem::AddToInt() {
	defenseInt = defenseInt + 9;
}

void TestEquipmentSystem() {
	EquipmentSystem someSystemInstance = EquipmentSystem();
	someSystemInstance.NoGearCheck();
	someSystemInstance.AddToInt();
	someSystemInstance.DefenseIncreaseCheck();
	someSystemInstance.CheckSystem3();
	someSystemInstance.SubtractToInt();
	someSystemInstance.CheckSystem4();
}

	//Test unequip function


void EquipmentSystem::CheckSystem3() {
	printf("EquipmentSystem has been checked! The Steel Chestplate has increased your defense by % d\n", defenseInt2);
}

void EquipmentSystem::SubtractToInt()
{
	defenseInt2 = defenseInt2 - 9;
}

void EquipmentSystem::CheckSystem4() {
	printf("EquipmentSystem has been checked! You unequied The Steel Chestplate and your defense has fallen to % d!\n", defenseInt2);
}
