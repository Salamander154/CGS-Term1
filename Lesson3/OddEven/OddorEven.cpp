#include <iostream>
#include <ctime>
using namespace std;

int random()
{
	int random;
	srand(time(0));
	random = rand() % 101;
	return random;
}

int oddEvenCheck(int i)
{
	int check = i;
	bool ans;
	if (check % 2 == 0)
	{
		ans = true;
	}
	else
	{
		ans = false;
	}
	return ans;
}
int main()
{
	int result;
	result = random();
	cout << result << "\n";
	result = oddEvenCheck(result);
	if (result == 1)
	{
		cout << "EVEN \n";
	}
	else
	{
		cout << "ODD \n";
	}
}