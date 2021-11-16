#pragma once
#include <stdio.h>
#include <string>
#include <vector>


class QuestSystem {

public:
	QuestSystem();
	virtual void CheckSystem();
	virtual void AddToInt();
	virtual void ActivateQuest();
private:
	bool Quest1;
	int numberOfQuests;
};

void TestQuestSystem();