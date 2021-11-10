#pragma once
#include <stdio.h>

class SomeSystem {

public:
	SomeSystem();
	virtual void CheckSystem();
	virtual void AddToInt();
private:
	int someInt;
};

void TestSomeSystem();