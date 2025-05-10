#include "Character.h"
#include <iostream>

character::character() {};
character::character(int health) 
	:m_health(health)
{

};

character::~character() {};

void character::giveItem(item* item)
{
	m_inventory.push_back(item);
}
void character::heal(int health)
{
	m_health += health;
}
void character::damage(int damages)
{
	m_health -= damages;
}
int character::openInventory()
{
	std::cout << "What item do you want to use? \n";
	std::cout << "_____________________________ \n";
	for (int i = 0; i < m_inventory.size(); i++)
	{
		std::cout << i + 1 <<". " << m_inventory[i]->getName() << "\n";
	}
	std::cout << "0.Close Inventory \n";
	int option;
	std::cin >> option;
	return option - 1;

}
void character::useItem(int itemIndex)
{
	item* ptritem = m_inventory[itemIndex];
	m_inventory.erase(m_inventory.begin() + itemIndex);
	ptritem->use(this);
}
void character::print()
{
	std::cout << "Current health is: " << m_health << "\n";
}