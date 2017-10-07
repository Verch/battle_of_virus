#include <string>
#include <iostream>

class Monster
{
public:
	Monster(std::string name, int x, int y);

public:
	void kill();
	void move(int x, int y);
	void status();

private:
	std::string _name;
	int         _x, _y;
	int         _id;
};