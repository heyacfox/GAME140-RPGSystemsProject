#include "SomeSystem.h"
#include <stdio.h>
#include <string>

SomeSystem::SomeSystem() :
	someInt(1)
{
}

void SomeSystem::SystemCheck() {
	printf("System has been checked with an int of %d!\n", someInt);
}
