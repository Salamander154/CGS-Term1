#pragma once
#include "Item.h"

class potion:public item
{

public:
	potion():item("Potion") {};

	~potion() {};
	virtual void use(character* Character) override;
};

