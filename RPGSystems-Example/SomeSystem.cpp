#include "SomeSystem.h"
#include <stdio.h>
#include <string>

SomeSystem::SomeSystem()
{
	someInt = 1;
}

void SomeSystem::CheckSystem() {
	printf("SomeSystem has been checked with an int of %d!\n", someInt);
}

void SomeSystem::AddToInt() {
	someInt = someInt + 1;
}

void TestSomeSystem() {
	SomeSystem someSystemInstance = SomeSystem();
	someSystemInstance.CheckSystem();
	someSystemInstance.AddToInt();
	someSystemInstance.CheckSystem();
}