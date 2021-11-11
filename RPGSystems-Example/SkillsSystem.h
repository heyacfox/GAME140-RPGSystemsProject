#pragma once
#include <stdio.h>
#include <string>
#include <vector>

class SkillSystem {

public:
	std::vector <Skill> SkillList;

	SkillSystem();

	void AddSkill(std::vector <Skill>* SkillList, std::string Name);
	Skill UseSkill(std::vector <Skill>* SkillList, Skill* skill);
};

class Skill{

public:
	std::string name;
	int lvl;
	int uses;

	Skill(std::string Name);
};

void TestSkillsSystem();