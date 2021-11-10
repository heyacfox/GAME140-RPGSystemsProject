#pragma once
#include "SomeSystem.h"

class Player {

public:
	Player(SomeSystem &newSomeSystem);
	virtual void SayHello();

public:
	SomeSystem& someSystem;
};