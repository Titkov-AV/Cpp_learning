#include <iostream>

enum class MonsterType {
	OGRE,
	GOBLIN,
	SKELETON,
	ORC,
	TROLL
};
struct Monster {
	MonsterType	type;
	std::string	name;
	uint16_t 	health;
};

std::string getMonsterTypeString (MonsterType monstr){

	std::string monsterString;
	switch(monstr){
		case MonsterType::OGRE:{
			monsterString = "Ogre";
		} break;
		case MonsterType::SKELETON:{
			monsterString = "Skeleton";
		} break;
		case MonsterType::TROLL:{
			monsterString = "Troll";
		} break;
		case MonsterType::GOBLIN: {
			monsterString = "Goblin";
		} break;
		case MonsterType::ORC: {
			monsterString = "Orc";
		} break;
		default: monsterString = "Unknown";
	}

	return monsterString;
}

void printMonster(Monster printedMonster)
{
	std::string typeOut = getMonsterTypeString(printedMonster.type);
	std::cout << "This " << typeOut << " is named " << printedMonster.name << " end has " << printedMonster.health << " health" << std::endl;
}

int main ()
{
	Monster goblin = { MonsterType::GOBLIN, "Vasya", 54};
	Monster orc = { MonsterType::ORC, "Sasha", 78};

	printMonster(goblin);
	printMonster(orc);
	
	return 0;
}			