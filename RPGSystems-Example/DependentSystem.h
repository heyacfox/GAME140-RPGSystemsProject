#pragma once
#include <stdio.h>
#include "SomeSystem.h"

class DependentSystem {

public:
	DependentSystem(SomeSystem& someSystemReferenceInput);
	virtual void CheckSystem();
	virtual void AddThreeTimes();
private:
	SomeSystem& someSystemReference;
};

void TestDependentSystem();