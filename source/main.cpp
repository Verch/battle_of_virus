#include <iostream>
#include "monster\monster.h"

int main()
{
	Monster monster_1("vanya", 30, 20);
	monster_1.status();
	monster_1.move(100, 100);
	monster_1.status();
	monster_1.kill();
	monster_1.status();

	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}