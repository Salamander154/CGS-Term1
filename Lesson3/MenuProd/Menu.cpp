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

int main()
{
    int choice;
    cout << "What would you like to do. \n";
    cout << "1.Number guesser game 2.Coin Flip \n";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        guessNum();
    }
    case 2:
    {
        coinFlip();
    }
    }

}