#include <iostream>
using namespace std;

void topHalf(int i)
{
	int space = i;
	int number = 1;
	int check = 0;
	int number1 = (space / 2) + 0.5;
	int number2 = -(number1 - 1);
	while (number != space)
	{
		while (number1 != check)
		{
			cout << " ";
			check = check + 1;
		}
		check = 0;
		while (number != check)
		{
			cout << "*";
			check = check + 1;
		}
		check = 0;
		number = number + 2;
		number1 = number1 - 1;
		cout << "\n";
	}
	if (number == space)
	{
		while (number != check)
		{
			cout << "*";
			check = check + 1;
		}
	}
	space = 1;
	while (number != space)
	{
		while (number2 != check)
		{
			cout << " ";
			check = check - 1;
		}
		check = 0;
		while (number != check)
		{
			cout << "*";
			check = check + 1;
		}
		check = 0;
		number = number - 2;
		cout << "\n";
	}
	if (number == space)
	{
		while (number != check)
		{
			cout << "*";
			check = check + 1;
		}
		check = 0;
		number = number - 2;
	} 
}



int main()
{
	int number;
	cout << "Please put in a odd whole number. \n";
	cin >> number; 
	topHalf(number);
}