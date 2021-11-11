#include "SkillsSystem.h"



SkillSystem::SkillList()
{

}


Skill::Skill(std::string Name)
{
	name = Name;
	lvl = 1;
	uses = 0;
}

void AddSkill(std::vector <Skill> SkillList, std::string name)
{
	Skill MySkill = Skill(name);
	for (unsigned int i = 0; i < SkillList.size(); ++i)
	{
		if (SkillList[i].name == name)
		{
			printf("You already have this skill\n");
			return;
		}
	}
	SkillList.push_back(MySkill);
}

void  UseSkill(std::vector <Skill> SkillList, Skill& skill)
{
	bool found = false;

	for (unsigned int i = 0; i < SkillList.size(); ++i)
	{
		if (SkillList[i].name == skill.name)
		{
			found = true;
		}
	}
	
	if (found)
	{
		skill.uses += 1;

		//Upgrade to lvl 2
		if (skill.uses == 10 || skill.uses == 40 || skill.uses == 100 || skill.uses == 250)
		{
			skill.lvl += 1;
			printf("\n%s skill has upgraded its level to level %d\n\n", skill.name.c_str(), skill.lvl);
		}
	}
}





void TestSkillsSystem() {

	SkillSystem MySkills;

	MySkills.AddSkill("Heal");

	for (unsigned int i = 0; i < 260; ++i)
	{
		UseSkill(MySkill);
		printf("%s: lvl:%d | uses:%d\n",MySkill.name.c_str(), MySkill.lvl, MySkill.uses);
	}

}