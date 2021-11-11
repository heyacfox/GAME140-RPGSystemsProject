#include "QuestSystem.h"
#include <stdio.h>
#include <string>

QuestSystem::QuestSystem()
{
	std::vector<int> numberOfQuests = { 1 };
	std::string activeQuest = "Quest1";
}

void QuestSystem::CheckSystem() {
	printf("SomeSystem has been checked with an int of %d!\n", numberOfQuests);
}

void QuestSystem::AddToInt() {
	numberOfQuests = numberOfQuests + 1;
}

void QuestSystem::ActivateQuest() {

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