
#include <string>
#include <vector>

using namespace std;

class Entities {
protected:
	string name;
	int health;
	//can add other stats later once we actually finish the game or the project is over lol
public:
	//basic methods for the health
	void setHealth(int x) { health = x; }
	int getHealth() { return health; }
	void addHealth(int x) { health += x; }
	void subHealth(int x) { health -= x; }
};

class Character : public Entities {
protected:
	string weaponEquipped;
	int wepDmg;
	vector<string> inventory = {};
	//values for either item damage or -999 if it is a consumable(like a code to know if it is a consumable)
	vector<int> values = {};
public:
	void printInventory();
	void equipItem(int x);
};

//so we can have item descriptions, can do same for weapons too if we want
class Consumables {
protected:
	int hpValue;
	string description;
public:
	int gethpValue() { return hpValue; }
	void printDesc();
};

