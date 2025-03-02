// V 1.1.5
// Intergrated all currents characters stadic stats
// next update is more characters directional characters helth for better fights and "safe spaces"/villages
//  Main updates. Small updates/bug fixes. Stuff that can't be accessed or not finished but there
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    //Ask and declare stuff
    int direction;
    int attack;
    int stat;
    stat = 10;
    //for stats
    int choice;
    int strong;
    int smart; //changed to defence
    int charm;
    int luck; //changed to speed
    int health;
    int Ehealth;
    int damage;
    int Edamage;
    health = 25;
    strong = 0;
    smart = 0;
    charm = 0;
    luck = 0;
    //random for fights
    srand(time(0));
    int fighters;
    //stat ask start and info
    cout << "Where would you like to put your stat points? \n";
    cout << "1.Strength 2.Defence 3.Charisma 4.Speed \n";
    cout << "Strength is how much damage you do in a fight. \n";
    cout << "Defence is how much health you have and how much damage you take. \n";
    cout << "Charisma is how well you can talk to people to see if you can get out of fighting or bargain for cheaper prices. \n";
    cout << "Speed is how fast you are at running away to see if you can run away from the problem. \n";
    //start choosing your stats
points:
    if (stat == 0)
    {
        cout << "Strength " << strong << ". Defence " << smart << ". Charisma " << charm << ". Speed " << luck<< ". \n";
        goto start;
    }
    cout << "You have " << stat << " points left. \n";
    cout << "Strength " << strong << ". Defence " << smart << ". Charisma " << charm << ". Speed " << luck << ". \n";
    cin >> choice;
    //stat if choices
    switch (choice)
    {
        case 1:
        {
         stat = stat - 1;
         strong = strong + 1;
         goto points;
         break;
        }
        case 2:
        {
         stat = stat - 1;
         smart = smart + 1;
         goto points;
         break;
        }
        case 3:
        {
         stat = stat - 1;
         charm = charm + 1;
         goto points;
         break;
        }
        case 4:
        {
         stat = stat - 1;
         luck = luck + 1;
         goto points;
         break;
        }
        default:
        {
         cout << "Invalid option \n";
         goto points;
        }
    };
    //game start area
start:
    health = (smart * 10) + 50;
    cout << "Where would you like to go: \n";
    cout << "1.North 2.South 3.East 4.West \n";
    cin >> direction;
    fighters = rand() % 6;
    //all the possible people to fight
    switch (fighters)
    {
        case 1:
        {
         cout << "You encouner a Hugo what do you do: \n";
         Ehealth = rand() % 125;
         goto Hfight;
         break;
        }
        case 2:
        {
         cout << "You encouner a Lar what do you do: \n";
         Ehealth = rand() % 125;
         goto Lfight;
         break;
        }
        case 3:
        {
         cout << "You encouner Furry Heaith what do you do: \n";
         Ehealth = rand() % 125;
         goto FHfight;
         break;
        }
        case 4:
        {
         cout << "You encouner David what do you do. \n";
         Ehealth = rand() % 125;
         goto Dfight;
         break;
        }
        default:
        {
         cout << "Nothing happens.";
         goto start;
        }


    };
    //hugo fight FINISHED
Hfight:
    cout << "Enemy health is at " << Ehealth << "\n";
    cout << "1.Fight 2.Defend 3.Talk 4.Run \n";
    cin >> attack;
    switch (attack)
    {
    case 1:
    {
        //if u fight damage is basted off of strong stat
        damage = (5 * strong) + rand() % 10;
        Ehealth = Ehealth - damage;
        cout << "You deal " << damage << "damage. \n";
        if (Ehealth <= 0)
        {
            cout << "You win! \n";
            goto start;
        }
        //enemy fights back
        Edamage = rand() % 50 - (smart * 2);
        cout << "The enemy fights back and deals " << Edamage << " damage to you. \n";
        health = health - Edamage; 
        cout << "You have " << health << "left. \n";
        if (health <= 0)
        {
            cout << "You take to much damage and die.";
            cout << "Game over.";
            return 0;
        }
        goto Hfight;
        break;
    }
    case 2:
    {
        if (smart >= 80)
        {
            //defending with bonus of damges and not taking any if sucessful
            cout << "You try and defend and successfully do leading to a counter attack. \n";
            damage = (5 * strong) + rand() % 13;
            Ehealth = Ehealth - damage;
            cout << "You deal " << damage << " damage. \n";
            if (Ehealth <= 0)
            {
                cout << "You win! \n";
                goto start;
            }
            goto Hfight;
        }
        else
            //a unsucessful fight
        {
            Edamage = rand() % 50 - (smart * 2);
            cout << "Defending fails and they attack you dealing " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << " left. \n";
            goto Hfight;
        }
        break;
    }
    case 3:
    {
        //try to talk
        cout << "You try to talk your way out of this. \n";
        if (charm >= 5)
        {
            cout << "They like the way you talked to them and agree to let you go. \n";
            goto start;
        }
        else
        {
            cout << "You try and talk it but you do it poorly. \n";
            Edamage = rand() % 50 - (smart * 2);
            cout << "The enemy fights back and deals " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << " left. \n";
            goto Hfight;

        }
        break;
    }
    case 4:
        //try to run
        if (luck >= 3)
        {
            cout << "You try and run away and can because his legs are to short and can't catch up. \n";
            goto start;
        }
        else
        {
            cout << "You try and run but he somehow catches up dispite his short legs. \n";
            Edamage = rand() % 50 - (smart * 2);
            cout << "They catch up and deal " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << " left. \n";
            goto Hfight;
        }
        break;
    default:
        cout << "Invalid option try again.";
        goto Hfight;
    }
    //lar fight for each and every stat u have FINISHED
Lfight:
    cout << "Enemy health is at " << Ehealth << "\n";
    cout << "1.Fight 2.Defend 3.Talk 4.Run \n";
    cin >> attack;
    switch (attack)
    {
    case 1:
    {
        damage = (5 * strong) + rand() % 10;
        Ehealth = Ehealth - damage;
        cout << "You deal " << damage << " damage. \n";
        if (Ehealth <= 0)
        {
            cout << "You win! \n";
            goto start;
        }
        Edamage = rand() % 40 - (smart * 2);
        cout << "The enemy fights back and deals " << Edamage << " damage to you. \n";
        health = health - Edamage;
        cout << "You have " << health << " left. \n";
        if (health <= 0)
        {
            cout << "You take to much damage and die.";
            cout << "Game over.";
            return 0;
        }
        goto Lfight;
        break;
    }
    case 2:
    {
        if (smart >= 5)
        {
            cout << "You try and defend and successfully do leading to a counter attack. \n";
            damage = (5 * strong) + rand() % 10;
            Ehealth = Ehealth - damage;
            cout << "You deal " << damage << " damage. \n";
            if (Ehealth <= 0)
            {
                cout << "You win! \n";
                goto start;
            }
            goto Lfight;
        }
        else
        {
            Edamage = rand() % 45 - (smart * 2);
            cout << "Defending fails and they attack you dealing " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << "left. \n";
            goto Lfight;
        }
        break;
    }
    case 3:
    {
        cout << "You try to talk your way out of this. \n";
        if (charm >= 6)
        {
            cout << "They like the way you talked to them and agree to let you go. \n";
            goto start;
        }
        else
        {
            cout << "You try and talk it but you do it poorly. \n";
            Edamage = rand() % 45 - (smart * 2);
            cout << "The enemy fights back and deals " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << "left. \n";
            goto Lfight;

        }
        break;
    }
    case 4:
        if (luck >= 3)
        {
            cout << "You try and run away and can because his legs are to short and can't catch up. \n";
            goto start;
        }
        else
        {
            cout << "You try and run but he somehow catches up dispite his short legs. \n";
            Edamage = rand() % 45 - (smart * 2);
            cout << "They catch up and deal " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << " left. \n";
            goto Lfight;
        }
        break;
    default:
        cout << "Invalid option try again.";
        goto Lfight;
    }
    //furry Heaith fight FINISHED
FHfight:
    cout << "Enemy health is at " << Ehealth << "\n";
    cout << "1.Fight 2.Defend 3.Talk 4.Run \n";
    cin >> attack;
    switch (attack)
    {
    case 1:
    {
        damage = (5 * strong) + rand() % 10;
        Ehealth = Ehealth - damage;
        cout << "You deal " << damage << " damage. \n";
        if (Ehealth <= 0)
        {
            cout << "You win! \n";
            goto start;
        }
        Edamage = rand() % 55 - (smart * 2);
        cout << "The enemy fights back and deals " << Edamage << " damage to you. \n";
        health = health - Edamage;
        cout << "You have " << health << "left. \n";
        if (health <= 0)
        {
            cout << "You take to much damage and die.";
            cout << "Game over.";
            return 0;
        }
        goto FHfight;
        break;
    }
    case 2:
    {
        if (smart >= 4)
        {
            cout << "You try and defend and successfully do leading to a counter attack. \n";
            damage = (5 * strong) + rand() % 10;
            Ehealth = Ehealth - damage;
            cout << "You deal " << damage << " damage. \n";
            if (Ehealth <= 0)
            {
                cout << "You win! \n";
                goto start;
            }
            goto FHfight;
        }
        else
        {
            Edamage = rand() % 55 - (smart * 2);
            cout << "Defending fails and they attack you dealing " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << " left. \n";
            goto FHfight;
        }
        break;
    }
    case 3:
    {
        cout << "You try to talk your way out of this. \n";
        if (charm >= 3)
        {
            cout << "They like the way you talked to them and agree to let you go. \n";
            goto start;
        }
        else
        {
            cout << "You try and talk it but you do it poorly. \n";
            Edamage = rand() % 55 - (smart * 2);
            cout << "The enemy fights back and deals " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << " left. \n";
            goto FHfight;

        }
        break;
    }
    case 4:
        if (luck >= 5)
        {
            cout << "You try and run away and can. \n";
            goto start;
        }
        else
        {
            cout << "You try and run but he catches up. \n";
            Edamage = rand() % 50 - (smart * 2);
            cout << "They catch up and deal " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << " left. \n";
            goto FHfight;
        }
        break;
    default:
        cout << "Invalid option try again.";
        goto FHfight;
    }
    //david fight FINISHED
Dfight:
    cout << "Enemy health is at " << Ehealth << "\n";
    cout << "1.Fight 2.Defend 3.Talk 4.Run \n";
    cin >> attack;
    switch (attack)
    {
    case 1:
    {
        damage = (5 * strong) + rand() % 10;
        Ehealth = Ehealth - damage;
        cout << "You deal " << damage << " damage. \n";
        if (Ehealth <= 0)
        {
            cout << "You win! \n";
            goto start;
        }
        Edamage = rand() % 55 - (smart * 2);
        cout << "The enemy fights back and deals " << Edamage << " damage to you. \n";
        health = health - Edamage;
        cout << "You have " << health << "left. \n";
        if (health <= 0)
        {
            cout << "You take to much damage and die.";
            cout << "Game over.";
            return 0;
        }
        goto Dfight;
        break;
    }
    case 2:
    {
        if (smart >= 5)
        {
            cout << "You try and defend and successfully do leading to a counter attack. \n";
            damage = (5 * strong) + rand() % 10;
            Ehealth = Ehealth - damage;
            cout << "You deal " << damage << " damage. \n";
            if (Ehealth <= 0)
            {
                cout << "You win! \n";
                goto start;
            }
            goto Dfight;
        }
        else
        {
            Edamage = rand() % 55 - (smart * 2);
            cout << "Defending fails and they attack you dealing " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << " left. \n";
            goto Dfight;
        }
        break;
    }
    case 3:
    {
        cout << "You try to talk your way out of this. \n";
        if (charm >= 2)
        {
            cout << "They like the way you talked to them and agree to let you go. \n";
            goto start;
        }
        else
        {
            cout << "You try and talk it but you do it poorly. \n";
            Edamage = rand() % 55 - (smart * 2);
            cout << "The enemy fights back and deals " << Edamage << " damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << " left. \n";
            goto Dfight;

        }
        break;
    }
    case 4:
        if (luck >= 5)
        {
            cout << "You try and run away and can. \n";
            goto start;
        }
        else
        {
            cout << "You try and run but he catches up. \n";
            Edamage = rand() % 50 - (smart * 2);
            cout << "They catch up and deal " << Edamage << "damage to you. \n";
            health = health - Edamage;
            if (health <= 0)
            {
                cout << "You take to much damage and die.";
                cout << "Game over.";
                return 0;
            }
            cout << "You have " << health << " left. \n";
            goto Dfight;
        }
        break;
    default:
        cout << "Invalid option try again.";
        goto Dfight;
    }
}