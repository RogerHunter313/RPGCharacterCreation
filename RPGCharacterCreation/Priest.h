#ifndef PRIEST_H
#define PREIST_H
#include "Player.h"

class Priest : public Player {  //careful to make inheret this public class as public...
public:    //careful it defaults to private
	Priest(string name, Race race);
	string attack() const;
};

#endif
