#pragma once

#include <Hero.hpp>
#include <Monster.hpp>
#include <Map.hpp>
#include <vector>

class CharacterManager{
public:
	std::vector<Monster> monsters;
	Hero heroine;

	CharacterManager();

	bool monsterForward();
	bool monsterBackward();

	void monstersAttack();
	int heroAttack();
	void moveAllMonsters();

	~CharacterManager();
};