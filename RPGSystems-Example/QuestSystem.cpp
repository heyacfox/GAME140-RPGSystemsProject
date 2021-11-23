#include "QuestSystem.h"
#include "DependentSystem.h"
#include <stdio.h>
#include <string>

QuestSystem::QuestSystem() //
{
	 numberOfQuests = { 0 }; //int
    activeQuest = "Quest1Act"; //std::string
	 questDescription = "Quest1 Activated"; //const char*
	 Quest1 = false; //bool
	 Quest1Complete = false; //bool
}

SkillSystem::SkillSystem(QuestSystem& QuestSystemReferenceInput) :
	QuestSystemReference(QuestSystemReferenceInput)
{}

void QuestSystem::CheckSystem() //once the player wants to activate the quest, the code will check if it has done what is needed to have the quest available
{
	printf("You have %d quests activated!\n", numberOfQuests);
}

void QuestSystem::AddToInt() {
	numberOfQuests = numberOfQuests + 1;
}

void QuestSystem::ActivateQuest() 
// To proceed, check system for SkillList vector (1st), level int, (content set in .h file)
{
	if (numberOfQuests == 1)
	{
		printf("%s. Now go!\n", questDescription);

		Quest1Complete = true;
	}
}

void QuestSystem::CompleteQuest()
{
	if (Quest1Complete = true)
	{
		numberOfQuests = numberOfQuests - 1;
		printf("You have %d quests activated!\n", numberOfQuests);
		printf("Quest Complete. GO HOME!\n");
	}
}

void SkillSystem::CheckSystem() {
	printf("The Skill system exists.");
}

void SkillSystem::AddThreeTimes() {
	someSystemReference.AddToInt();
	someSystemReference.AddToInt();
	someSystemReference.AddToInt();
}

void TestQuestSystem() {
	QuestSystem someSystemInstance = QuestSystem();
	someSystemInstance.CheckSystem();
	someSystemInstance.AddToInt();
	someSystemInstance.CheckSystem();	
	someSystemInstance.ActivateQuest();
	//someSystemInstance.CheckSystem();
	someSystemInstance.CompleteQuest();

}

//void TestQuestSystem() {}
	//printf("The quest system doesn't do anything yet...\n");

void TestSkillSystem() {
	printf("Creating a new QuestSystem...\n");
	QuestSystem exampleQuestSystem = QuestSystem();
	printf("Creating a new SkillSystem...\n");
	SkillSystem exampleSkillSystem = SkillSystem(exampleQuestSystem);
	printf("Check directly on QuestSystem:");
	exampleQuestSystem.CheckSystem();
	exampleSkillSystem.AddThreeTimes();
	printf("Check after adding three times:");
	exampleQuestSystem.CheckSystem();

}