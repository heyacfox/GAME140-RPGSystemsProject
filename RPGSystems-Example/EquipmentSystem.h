#pragma once
#include <stdio.h>

class EquipmentSystem {

public:
	EquipmentSystem();
	virtual void CheckSystem1();
	virtual void CheckSystem2();
	virtual void AddToInt();
private:
	int defenseInt;
};

void TestEquipmentSystem();