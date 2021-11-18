#include "QuestSystem.h"
#include <stdio.h>
#include <string>

QuestSystem::QuestSystem() //
{
	 numberOfQuests = { 0 }; //int
    activeQuest = "Quest1Act"; //std::string
	 questDescription = "Quest1 Activated"; //const char*
	 Quest1 = false; //bool
}

void QuestSystem::CheckSystem() //once the player wants to activate the quest, the code will check if it has done what is needed to have the quest available
{
	printf("You have %d quests activated!\n", numberOfQuests);
}

void QuestSystem::AddToInt() {
	numberOfQuests = numberOfQuests + 1;
}

void QuestSystem::ActivateQuest() 
{
	if (numberOfQuests == 1)
	{
		printf("%s. Now go!\n", questDescription);
	}
}

void TestQuestSystem() {
	QuestSystem someSystemInstance = QuestSystem();
	someSystemInstance.CheckSystem();
	someSystemInstance.AddToInt();
	someSystemInstance.CheckSystem();	
	someSystemInstance.ActivateQuest();

}







//void TestQuestSystem() {}
	//printf("The quest system doesn't do anything yet...\n");
