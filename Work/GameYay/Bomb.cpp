#include "Bomb.h"
#include "Character.h"

void bomb::use(character* Character)
{
	Character->damage(25);
}