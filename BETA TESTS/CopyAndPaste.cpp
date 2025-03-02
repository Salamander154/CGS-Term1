//BETA CODE TESTS TO SEE IF WORKING AND DONE CORRECTLY
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
    int blank;
    strong = 0;
    smart = 0;
    charm = 0;
    blank = 0;
    //stat ask start
    /*
    cout << "Where would you like to put your stat points? \n";
    cout << "1.Strength 2.Intelligence 3.Charisma 4.??? \n";
points:

    switch (stat)
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
            blank = blank + 1;
            goto points;
            break;
        }
        default:
        {
            cout << "Invalid option \n";
            goto points;
        }


    };

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

    //game start area
start:
    cout << "Where would you like to go: \n";
    cout << "1.North 2.South 3.East 4.West \n";
    cin >> direction;
    //all the possible people to fight
    if (direction == 1)
    {
        cout << "You encouner a Hugo what do you do: \n";
        goto Hfight;
    }
    else if (direction == 2)
    {
        cout << "You encouner a Lar what do you do: \n";
        goto Lfight;
    }
    else if (direction == 3)
    {
        cout << "You encouner Furry Heaith what do you do: \n";
        goto FHfight;
    }
    else if (direction == 4)
    {
        cout << "You encouner David there is nothing you can do... \n";
        goto Dfight;
    }
    else
    {
        cout << "Invalid direction try again \n";
        goto start;
    }
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




    
    switch (attack)
    {
        case 1:
        {
            if (strong >= 5)
            {
                cout << "You fight back and win! \n";
                goto start;
            }
            else
            {
                cout << "You unsuccessful and he wins \n";
                cout << "Game over \n";
                return 0;
            }
            break;
        }
        case 2:
        {
            if (smart >= 8)
            {
                cout << "You try and defend and successfully do leading to a counter attack and winning. \n";
                goto start;
            }
            else
            {
                cout << "You try to defend but fail. \n";
                cout << "Game over \n";
                return 0;
            }
        }
        case 3:
        {
            if (charm >= 2)
            {
                cout << "You talk and well ummmmm things end up better than expected and you leave. \n";
                goto start;
            }
            else
            {
                cout << "You try and talk it out but you die. \n";
                cout << "Game over \n";
                return 0;
            }
        }
        case 4:
            if (luck >= 3)
            {
                cout << "You try and run away and can because his legs are to short and can't catch up. \n";
                goto start;
            }
            else
            {
                cout << "He somehow catches up dispite his short legs. \n";
                cout << "Game over. \n";
                return 0;
            }
    }











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
} */