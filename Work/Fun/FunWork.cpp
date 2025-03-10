#include <iostream>
#include <ctime>
using namespace std;

int getInput()
{
	int number = 0;
	cin >> number;
	return number;
}


int main()
{
	srand(time(0));
	int random = rand() % 21;
	cout << "Pick a number between 1 and 20. \n";
	while (getInput() != random)
	{
		cout << "Try again. \n";
	}
	cout << "You win! \n";

}