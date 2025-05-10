#pragma once
#include "Item.h"

class bomb :public item
{

public:
	bomb() :item("Bomb") {};

	~bomb() {};
	virtual void use(character* Character) override;
};