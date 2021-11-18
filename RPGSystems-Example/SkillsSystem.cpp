#include "SkillsSystem.h"


Skill::Skill(std::string Name)
{
	name = Name;
	lvl = 1;
	uses = 0;
}

void Skill::Use()
{
	uses += 1;
	return;
}

SkillSystem::SkillSystem()
{
}

void SkillSystem::AddSkill(std::string name)
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

void SkillSystem::UseSkill(std::string name)
{
	Skill MySkill = Skill("Heal");
	int p = 0;
	bool found = false;

	for (unsigned int i = 0; i < SkillList.size(); ++i)
	{
		if (SkillList[i].name == name)
		{
			p = i;
			found = true;
		}
	}

	if (found)
	{
		SkillList[p].Use();
		printf("%s: lvl:%d | uses:%d\n", SkillList[p].name.c_str(), SkillList[p].lvl, SkillList[p].uses);

		//Upgrade to lvl 2
		if (SkillList[p].uses == 10 || SkillList[p].uses == 40 || SkillList[p].uses == 100 || SkillList[p].uses == 250)
		{
			SkillList[p].lvl += 1;
			printf("\n%s skill has upgraded its level to level %d\n\n", SkillList[p].name.c_str(), SkillList[p].lvl);
		}
	}
	return;
}






void TestSkillsSystem() {

	SkillSystem MySkills;

	MySkills.AddSkill("Heal");

	for (unsigned int i = 0; i < 260; ++i)
	{
		MySkills.UseSkill("Heal");
	}

}
