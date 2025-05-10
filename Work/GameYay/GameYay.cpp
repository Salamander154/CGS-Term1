#include <iostream>
#include "Character.h"
#include "Bomb.h"
#include "Potion.h"
using namespace std;


int main()
{
	character James(100);
	bomb bomb;
	potion potion;
	James.giveItem(&bomb);
	James.giveItem(&potion);
	int result = James.openInventory();
	if (result == -1)
	{

	}
	else
	{
		James.useItem(result);
	}
	James.print();
}
