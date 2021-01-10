#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


Race chooseRace();

int main() {
	vector<int> professions;
	vector<string> names;
	vector<Race> races;

	cout << "         Welcome to my RPG Project!" << endl;
	cout << "--------------------------------------------" << endl;
	
	int profession = 1;  //just intialize to warrior...why not?

	while (profession != 0) {
		cout << "Which of the following do you choose?" << endl;
		cout << "\t1 - Create a warrior" << endl;
		cout << "\t2 - Create a Priest" << endl;
		cout << "\t3 - Create a Mage" << endl;
		cout << "\t0 - finish creating player characters" << endl;
		cin >> profession;
		//cout << profession << endl;
		if (profession < 0 || profession > 3) {
			cout << "Oops! Please enter an integer from 0 to 3" << endl;
			continue;
		}
		else if (profession > 0 && profession < 4) {
			professions.push_back(profession);

			string name;
			cout << endl;
			cout << "What will you name your character?" << endl;
			cin >> name;
			cin.get(); //consumes new line but doesn't seem to be necessary here
			cout << endl;
			cout << "Aaahhh... " << name << " is a strong name.  May your enemies fear it!" << endl;
			
			races.push_back(chooseRace());
			
			cout << "Will you create another character?" << endl;
			names.push_back(name);
		}
		

	}
	cout << "Generating characters..." << endl;
	/*for (int i = 0; i < professions.size(); i++) {
		cout << names[i] << " " << professions[i] << " " << races[i] << endl;
	}*/

	for (int i = 0; i < professions.size(); i++) {
		if (professions[i] == 1) {
			Player* warriorPtr = new Warrior(names[i], races[i]);
			cout << "I'm a warrior!!!!!" << endl;
			cout << "I'm a " << (reinterpret_cast<Warrior*>(warriorPtr))->whatRace()     //this notation would only be necessary if Player didn't have a whatRace method
				<< " and my attack is: " << warriorPtr->attack() << endl;
			delete warriorPtr;
			warriorPtr = nullptr;
		}
		if (professions[i] == 2) {
			Player* priestPtr = new Priest(names[i], races[i]);
			cout << "I'm a priest!!!!!" << endl;
			cout << "I'm a " << priestPtr->whatRace()     
				<< " and my attack is: " << priestPtr->attack() << endl;
			delete priestPtr;
			priestPtr = nullptr;
		}
		if (professions[i] == 3) {
			Player* magePtr = new Mage(names[i], races[i]);
			cout << "I'm a priest!!!!!" << endl;
			cout << "I'm a " << magePtr->whatRace()
				<< " and my attack is: " << magePtr->attack() << endl;
			delete magePtr;
			magePtr = nullptr;
		}
	}

	names.clear();
	professions.clear();
	races.clear();

	//TODO make a vector of pointers to all the polymorphed Player classes

	return 0;
}

Race chooseRace() {
	vector<Race> races;
	int race = 1;
	while (race != 0) {
		cout << "Which race do you choose for your character?" << endl;
		cout << "\t1 - Human" << endl;
		cout << "\t2 - Elf" << endl;
		cout << "\t3 - Dwarf" << endl;
		cout << "\t4 - Orc" << endl;
		cout << "\t5 - Troll" << endl;
		cin >> race;

		if (race < 0 || race > 5) {
			cout << "Oops! Please enter an integer from 0 to 5" << endl;
			continue;
		}
		else if (race == 1) {
			return HUMAN;
		}

		else if (race == 2) {
			return ELF;
		}

		else if (race == 3) {
			return DWARF;
		}

		else if (race == 4) {
			return ORC;
		}

		else if (race == 5) {
			return TROLL;
		}

	}
}
