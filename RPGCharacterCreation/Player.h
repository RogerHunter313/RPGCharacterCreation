#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

enum Race {HUMAN, ELF, DWARF, ORC, TROLL}; //outside the class makes this global i believe

class Player {
public:
	Player(string name, Race race, int hitPoints, int MagicPoints);
	string getName() const;
	Race getRace() const;
	string whatRace() const;
	int getHitPoints() const;
	int getMagicPoints() const;
	void setName(string name);
	void setRace(Race race);
	void setHitPoints(int hitPoints);
	void setMagicPoints(int magicPoints);
	virtual string attack() const = 0;  //pure virtual function

private:
	string name;
	Race race;
	int hitPoints;
	int magicPoints;
};


#endif
