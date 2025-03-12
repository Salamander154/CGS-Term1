#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void guessNum()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int choice;
    int min = 1;
    int max = 20;
    cout << "Guess the number between 1 and 20. \n";
    cin >> choice;
    int number = min + rand() % (max - min + 1);
    while (choice != number)
    {
        cout << "Try again. \n";
        cin >> choice;
    }
    cout << "You guessed it! Good job. \n";
}

void coinFlip()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int min = 1;
    int max = 2;
    // Generate a random number in the range min, max
    int number = min + rand() % (max - min + 1);
    if (number == 1)
    {
        cout << "HEADS \n";
    }
    else if (number == 2)
    {
        cout << "TAILS \n";
    }
}

void diceRoll()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int choice;
    int min = 2;
    int max = 1;
    while (min >= max)
    {
        cout << "Please pick the minimum number. \n";
        cin >> choice;
        min = choice;
        cout << "Please pick the maximum number. \n";
        cin >> choice;
        max = choice;
        if (min > max)
        {
            cout << "Invalid min and max. \n";
        }
        else if (min < max)
        {
            int number = min + rand() % (max - min + 1);
            cout << "You got " << number << "\n";
        }
    }
}

void rockPS()
{
    int choice = 5;
    int min = 1;
    int max = 3;
    while (choice >= 4 || choice <= 0)
    {
        cout << "What do you pick? \n";
        cout << "1.Rock 2.Paper 3.Scissors \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "You pick rock. \n";
            break;
        }
        case 2:
        {
            cout << "You pick paper. \n";
            break;
        }
        case 3:
        {
            cout << "You pick scissors. \n";
            break;
        }
        default:
        {
            cout << "Invalid option. \n";
        }
        }
    }
    int number = min + rand() % (max - min + 1);
    if (number == choice)
    {
        cout << "You tie. \n";
    }
    else if ((number == 1 && choice == 2) || (number == 2 && choice == 3) || (number == 3 && choice == 1))
    {
        cout << "You WIN! \n";
    }
    else
    {
        cout << "You LOOSE. \n";
    }

}

int main()
{
    int choice;
    do
    {
        cout << "What would you like to do. \n";
        cout << "0.Exit 1.Number guesser game 2.Coin Flip 3.Dice 4.Rock, Paper, Scissors \n";
        cin >> choice;
        switch (choice)
        {
        case 0:
        {
            cout << "Ok bye! \n";
            return 0;
        }
        case 1:
        {
            guessNum();
            break;
        }
        case 2:
        {
            coinFlip();
            break;
        }
        case 3:
        {
            diceRoll();
            break;
        }
        case 4:
        {
            rockPS();
            break;
        }
        default:
        {
            cout << "Invalid answer. \n";
            break;
        }
        }
    } while (choice != 0);

}