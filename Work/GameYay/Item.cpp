#include "Item.h"
using namespace std;


item::item()
	:m_name("Undefined")
{

};
item::item(string m_name) 
	:m_name(m_name)
{

};

item::~item() {};

string item::getName()
{
	return m_name;
}
