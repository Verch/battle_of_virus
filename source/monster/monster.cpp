#include "monster.h"

Monster::Monster(std::string name, int x, int y)
{
	_id = 0;
	_name = name;
	_x = x;
	_y = y;
}

void Monster::kill()
{
}

void Monster::move(int x, int y)
{
	_x = x;
	_y = y;
}

void Monster::status()
{
	//std::string _name;
	//int         _x, _y;
	//int         _id;
	std::cout << "id:" << _id << " x:" << _x << " y:" << _y << std::endl;
}
