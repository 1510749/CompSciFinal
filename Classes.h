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
	void setHealth(int x) { health = x; };
	int  getHealth()      { return health; };
	void addHealth(int x) { health += x; };
	void subHealth(int x) { health -= x; };
};

class Character : public Entities {
protected:
	string weaponEquipped;
	int wepDmg;
	vector<string> inventory = {};
	//ideally we'll probably want item IDs-- thats what we'll do
	//Types:  0 - misc    1 - weapon    2 - consumable
	vector<int> itemType = {};
public:
	void printInventory();
	int selectItem(string x);
	void equipItem(int x);
};



//-----------------------------------------------------------------------------------------------------------
//so we can have item descriptions, can do same for weapons too if we want; we actually should
//I have it all together in case we want consumables that do damage.
class Items {
protected:
	const int TYPE;
	int hpValue;
	int dmgValue;
	string description;
public:
	int getType() { return TYPE; };
	int gethpValue() { return hpValue; };
	int getdmgValue() { return dmgValue; };
	void printDesc(int y);
};

