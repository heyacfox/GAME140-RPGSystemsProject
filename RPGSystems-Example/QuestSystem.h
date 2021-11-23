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
	virtual void CompleteQuest();
private:
	bool Quest1;
	int numberOfQuests;
	std::string activeQuest;
	const char* questDescription;
	bool Quest1Complete;

};

class SkillSystem {

public:
	SkillSystem(QuestSystem& QuestSystemReferenceInput);
	virtual void CheckSystem();
	virtual void AddThreeTimes();
private:
	QuestSystem& QuestSystemReference;
};

void TestSkillSystem();

void TestQuestSystem();