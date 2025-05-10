#include "Potion.h"
#include "Character.h"

void potion::use(character* Character)
{
	Character->heal(25);
}