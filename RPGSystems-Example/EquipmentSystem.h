#pragma once
#include <stdio.h>

class EquipmentSystem {

public:
	//test equip function
	EquipmentSystem();
	virtual void CheckSystem1();
	virtual void CheckSystem2();
	virtual void AddToInt();

	
			
	virtual void CheckSystem3();
	virtual void CheckSystem4();
	virtual void SubtractToInt();



private:
	int defenseInt;
	int defenseInt2;
};



class EquipmentSystem2 {

public:
	//test unequip function
	

private:
	

};

void TestEquipmentSystem();