#pragma once
#include <string>
using namespace std;
class character;
class item
{
	string m_name;

public:
	item();
	item(string m_name);

	virtual ~item();

	virtual void use(character* Character) = 0;
	string getName();
};