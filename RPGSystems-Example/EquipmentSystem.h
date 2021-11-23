#pragma once
#include <stdio.h>
#include <string>
#include "PlayerStatsSystem.h"

class EquipmentSystem {

public:
	//test equip function
	EquipmentSystem(PlayerStatsSystem& SystemInput);
	
	virtual void NoGearCheck();
	virtual void DefenseIncreaseCheck();
	virtual void AddToInt();

	
	virtual void CheckSystem3();
	virtual void CheckSystem4();
	virtual void SubtractToInt();



private:
	PlayerStatsSystem& PlayerStateSystemReference;
	int defenseInt;
	int defenseInt2;
	
	std::string SteelChestplate;
};



class EquipmentSystem2 {

public:
	//test unequip function
	

private:
	

};

void TestEquipmentSystem();