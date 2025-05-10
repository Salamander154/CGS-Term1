#pragma once
#include <vector>
#include "Item.h"
using namespace std;

class character
{
	int m_health;
	vector <item*> m_inventory;
public:
	character();
	character(int health);

	~character();
	void giveItem(item*);
	void heal(int health);
	void damage(int damages);
	int openInventory();
	void useItem(int itemIndex);
	void print();
};