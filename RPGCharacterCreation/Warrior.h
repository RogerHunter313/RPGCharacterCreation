#ifndef	WARRIOR_H
#define WARRIOR_H
#include "Player.h"
using namespace std;

class Warrior : public Player {
public:
	Warrior(string name, Race race);
	string attack() const;
};

#endif