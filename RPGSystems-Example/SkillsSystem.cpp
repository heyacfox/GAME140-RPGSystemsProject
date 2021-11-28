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

SkillEffect::SkillEffect(PlayerStatsSystem& SkillEffectRefIn) :
	playerStatSystem(SkillEffectRefIn)
{}

void SkillSystem::CheckSkillSystem() {
	printf("Your current skills:\n");
	for (int i = 0; i < SkillList.size(); i++) {
		Skill selectedSkill = SkillList[i];
		printf("%s, Level:%d, Times Used:%d\n", selectedSkill.name.c_str(), selectedSkill.lvl, selectedSkill.uses);
	}
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

// hp mp atk def intel spd

void SkillSystem::UseSkill(PlayerStatsSystem& skillEffectRefIn, std::string name)
{
	Skill MySkill = Skill(name);
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

	// Stats: hp, mp, atk, intel, spd

	if (found)
	{
		SkillList[p].Use();
		if (SkillList[p].name == "Heal")
		{
			//skillEffectRefIn.gainHP needs to be implemented
		}
		else if (SkillList[p].name == "Fireball")
		{
			//skillEffectRefIn.loseMP needs to be implemented
		}
		else if (SkillList[p].name == "Speed")
		{
			//skillEffectRefIn.gainspd needs to be implemented
		}
		else if (SkillList[p].name == "Protect")
		{
			//skillEffectRefIn.gainDef needs to be implemented
		}
		else if (SkillList[p].name == "ATKpot")
		{
			//skillEffectRefIn.gainATK needs to be implemented
		}
		else if (SkillList[p].name == "Think")
		{
			//skillEffectRefIn.gainIntel needs to be implemented
		}
		//Upgrade to lvl 2
		if (SkillList[p].uses == 10 || SkillList[p].uses == 40 || SkillList[p].uses == 100 || SkillList[p].uses == 250)
		{
			SkillList[p].lvl += 1;
			printf("%s: lvl:%d | uses:%d\n", SkillList[p].name.c_str(), SkillList[p].lvl, SkillList[p].uses);
			printf("\n%s skill has upgraded its level to level %d\n\n", SkillList[p].name.c_str(), SkillList[p].lvl);
		}
	}
	return;
}






void TestSkillsSystem() {

	SkillSystem MySkills;
	PlayerStatsSystem player = PlayerStatsSystem();
	SkillEffect playerEffect = SkillEffect(player);

	MySkills.AddSkill("Heal");

	for (unsigned int i = 0; i < 260; ++i)
	{
		MySkills.UseSkill(player,"Heal");
	}

}
