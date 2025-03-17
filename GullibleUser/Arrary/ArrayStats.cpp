#include <iostream>
using namespace std;

int main()
{
	int array [10];
	int check = 0;
	int result = 0;
	int odd = 0;
	int even = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Put in a number for the array. \n";
		cin >> array[check];
		check++;
	}
	
	for (int i = 0; i < 10; i++)
	{
		result = result + array[i];
	}
	cout << "The sum of them is " << result << ". \n";

	result = result / 10;
	cout << "The average of them is " << result << ". \n";

	for (int i = 0; i < 10; i++)
	{
		if (array[i] >= result)
		{
			result = array[i];
		}
	}
	cout << "The largest of them is " << result << ". \n";

	for (int i = 0; i < 10; i++)
	{
		if (array[i] <= result)
		{
			result = array[i];
		}
	}
	cout << "The smallest of them is " << result << ". \n";

	for (int i = 0; i < 10; i++)
	{
		if (array[i] % 2 == 0) even++;
		else odd++;
	}
	cout << "There are " << odd << " odds and " << even << " evens. \n";
}