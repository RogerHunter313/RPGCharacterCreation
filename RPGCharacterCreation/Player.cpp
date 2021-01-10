#include "Player.h"

Player::Player(string name, Race race, int hitPoints, int MagicPoints) {
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}

string Player::getName() const {
	return name;
}

Race Player::getRace() const {
	return race;
}

string Player::whatRace() const {
	if (race == 0) {
		return "Human";
	}
	else if (race == 1) {
		return "Elf";
	}
	else if (race == 2) {
		return "Dwarf";
	}
	else if (race == 3) {
		return "Orc";
	}
	else if (race == 4) {
		return "Troll";
	}
}

int Player::getHitPoints() const {
	return hitPoints;
}

int Player::getMagicPoints() const {
	return magicPoints;
}

void Player::setName(string name) {
	this->name = name;
}

void Player::setRace(Race race) {
	this->race = race;
}

void Player::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}

void Player::setMagicPoints(int magicPoints) {
	this->magicPoints = magicPoints;
}
