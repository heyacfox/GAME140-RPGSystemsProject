#pragma once
#include <stdio.h>
#include <string>
#include <vector>

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

	void AddSkill(std::string Name);
	void UseSkill(std::string Name);

};



void TestSkillsSystem();