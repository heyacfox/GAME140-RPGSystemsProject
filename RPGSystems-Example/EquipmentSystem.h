#pragma once
#include <stdio.h>

class EquipmentSystem {

public:
	//test equip function
	EquipmentSystem();
	virtual void CheckSystem1();
	virtual void CheckSystem2();
	virtual void AddToInt();

private:
	int defenseInt;
};



class EquipmentSystem2 {

public:
	//test unequip function
	EquipmentSystem2();
			
	void CheckSystem3();
	void CheckSystem4();
	virtual void SubtractToInt();

private:
	int defenseInt2;

};

void TestEquipmentSystem();
void TestEquipmentSystem2();