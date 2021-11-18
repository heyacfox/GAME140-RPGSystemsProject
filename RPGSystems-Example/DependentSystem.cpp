#include "DependentSystem.h"
#include "SomeSystem.h"
#include <stdio.h>
#include <string>

DependentSystem::DependentSystem(SomeSystem& someSystemReferenceInput) :
	someSystemReference(someSystemReferenceInput)
{}

void DependentSystem::CheckSystem() {
	printf("The dependent system exists.");
}

void DependentSystem::AddThreeTimes() {
	someSystemReference.AddToInt();
	someSystemReference.AddToInt();
	someSystemReference.AddToInt();
}

void TestDependentSystem() {
	printf("Creating a new SomeSystem...\n");
	SomeSystem exampleSomeSystem = SomeSystem();
	printf("Creating a new DependentSystem...\n");
	DependentSystem exampleDependentSystem = DependentSystem(exampleSomeSystem);
	printf("Check directly on SomeSystem:");
	exampleSomeSystem.CheckSystem();
	exampleDependentSystem.AddThreeTimes();
	printf("Check after adding three times:");
	exampleSomeSystem.CheckSystem();
	
}