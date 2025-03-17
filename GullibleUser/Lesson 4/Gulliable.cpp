#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int check = 0;

	while (number != 5)
	{
		cout << "Put in a number thats not 5. \n";
		cin >> number;
		if (number == 5)
		{
			cout << "You fail. \n";
			return 0;
		}
		else 
		{
			check++;
			if (check == 10)
			{
				cout << "Your patient. \n";
				return 0;
			}
		}
	}
}