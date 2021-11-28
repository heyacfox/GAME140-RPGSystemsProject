#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include "PlayerStatsSystem.h"

class Skill {

public:
	std::string name;
	int lvl;
	int uses;

	Skill(std::string Name);
	void Use();
};



class SkillSystem {

public:
	std::vector <Skill> SkillList;

	SkillSystem();

	void CheckSkillSystem();

	void AddSkill(std::string Name);
	void UseSkill(PlayerStatsSystem& SkillEffectRefIn, std::string Name);

};


class SkillEffect {
public:
	SkillEffect(PlayerStatsSystem& skillEffectRefIn);
	
	void Heal();

private:
	PlayerStatsSystem& playerStatSystem;
};

void TestSkillsSystem();