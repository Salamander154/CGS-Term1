// V 1.0.5
// /  Main updates. Small updates/bug fixes. Stuff that can't be accessed or not finished but there
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Ask and declare stuff
    int direction;
    int attack;
    int stat;
    stat = 8;
    //for stats
    int choice;
    int strong;
    int smart;
    int charm;
    int luck;
    strong = 0;
    smart = 0;
    charm = 0;
    luck = 0;
    int fighters = rand() % 101;

    //stat ask start
    cout << "Where would you like to put your stat points? \n";
    cout << "1.Strength 2.Intelligence 3.Charisma 4.??? \n";
points:
    if (stat == 0)
    {
        cout << "Strength " << strong << ". Intelligence " << smart << ". Charisma " << charm << ". Luck " << luck << ". \n";
        goto start;
    }
    cout << "You have " << stat << " points left. \n";
    cout << "Strength " << strong << ". Intelligence " << smart << ". Charisma " << charm << ". Luck " << luck << ". \n";
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
    cout << "Where would you like to go: \n";
    cout << "1.North 2.South 3.East 4.West \n";
    cin >> direction;
    //all the possible people to fight
    switch (direction)
    {
    case 1:
    {
        cout << "You encouner a Hugo what do you do: \n";
        goto Hfight;
        break;
    }
    case 2:
    {
        cout << "You encouner a Lar what do you do: \n";
        goto Lfight;
        break;
    }
    case 3:
    {
        cout << "You encouner Furry Heaith what do you do: \n";
        goto FHfight;
        break;
    }
    case 4:
    {
        cout << "You encouner David there is nothing you can do... \n";
        goto Dfight;
    }
    default:
    {
        cout << "Invalid option \n";
        goto points;
    }


    };
    //hugo fight
Hfight:
    cout << "1.Fight 2.Defend 3.Run \n";
    cin >> attack;
    if (attack == 1)
    {
        cout << "You try and fight back but die. \n";
        cout << "Game Over \n";
        return 0;
    }
    else if (attack == 2)
    {
        cout << "You try and defend but they are to stong. \n";
        cout << "Game Over \n";
        return 0;
    }
    else if (attack == 3)
    {
        cout << "You try to run and successfully escape. \n";
        goto start;
    }
    else
    {
        cout << "Invalid option try again \n";
        goto Hfight;
    }
    //lar fight
Lfight:
    cout << "1.Fight 2.Defend 3.Run \n";
    cin >> attack;
    if (attack == 1)
    {
        cout << "You try and fight back but die. \n";
        cout << "Game Over \n";
    }
    else if (attack == 2)
    {
        cout << "You try and defend and successfully do leading to a counter attack and winning. \n";
        goto start;
    }
    else if (attack == 3)
    {
        cout << "You try to run but get caught. \n";
        cout << "Game Over \n";
        return 0;
    }
    else
    {
        cout << "Invalid option try again \n";
        goto Lfight;
    }
    //furry Heaith fight
FHfight:
    cout << "1.Fight 2.Defend 3.Run \n";
    cin >> attack;
    if (attack == 1)
    {
        cout << "You try and fight any they unsuccessfully defend so you win. \n";
        goto start;
    }
    else if (attack == 2)
    {
        cout << "You try and defend but they are to stong. \n";
        cout << "Game Over \n";
        return 0;
    }
    else if (attack == 3)
    {
        cout << "You try to run but get caught. \n";
        cout << "Game Over \n";
        return 0;
    }
    else
    {
        cout << "Invalid option try again \n";
        goto FHfight;
    }
    //david fight
Dfight:
    cout << "You look at his eyes and know there is nothing you can do win... \n";
    cout << "The amount of power and knowledge he has is to much... \n";
    cout << "Game over \n";
    return 0;
}