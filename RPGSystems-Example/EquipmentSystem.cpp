#include "SomeSystem.h"
#include <stdio.h>
#include <string>
#include "EquipmentSystem.h"

EquipmentSystem::EquipmentSystem()
{
	defenseInt = 1;
}

void EquipmentSystem::CheckSystem1() {
	printf("EquipmentSystem has been checked! No gear equiped! Your defense is % d!\n", defenseInt);
}

void EquipmentSystem::CheckSystem2() {
	printf("EquipmentSystem has been checked! Equiping the Steel Chestplate increased defense by % d!\n", defenseInt);
}

void EquipmentSystem::AddToInt() {
	defenseInt = defenseInt + 9;
}

void TestEquipmentSystem() {
	EquipmentSystem someSystemInstance = EquipmentSystem();
	someSystemInstance.CheckSystem1();
	someSystemInstance.AddToInt();
	someSystemInstance.CheckSystem2();
}

	
	