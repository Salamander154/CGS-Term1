#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main ()
{
	string name;
	int age;
	cout << "What is your name? \n";
	cin >> name;
	cout << "What is your age? \n";
	cin >> age;
	Person player(age, name);
	player.Display();
}