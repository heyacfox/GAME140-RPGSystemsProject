#include "QuestSystem.h"
#include <stdio.h>
#include <string>

QuestSystem::QuestSystem() //
{
	int numberOfQuests = { 0 };
	std::string activeQuest = "Quest1Act";
	const char* questDescription = "Quest1D";
	bool Quest1 = false;
}

void QuestSystem::CheckSystem() //once the player wants to activate 
{
	printf("You have %d quests activated!\n", numberOfQuests);
}

void QuestSystem::AddToInt() {
	numberOfQuests = numberOfQuests + 1;
}

void QuestSystem::ActivateQuest() 
{
	if (numberOfQuests.size() == 1)
	{
		printf("%s. Now go!\n", questDescription);
	}
}

void TestQuestSystem() {
	QuestSystem someSystemInstance = QuestSystem();
	someSystemInstance.CheckSystem();
	someSystemInstance.AddToInt();
	someSystemInstance.CheckSystem();
}







void TestQuestSystem() {
	printf("The quest system doesn't do anything yet...\n");
}