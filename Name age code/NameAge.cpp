#include <iostream>
#include <string>

using namespace std;

int main()
{
	//create the variables 
	int age;
	string name;
	int height;
	string color;
	//ask the questions
	cout << "Hi! What is your name?" "\n";
	cin >> name;
	cout << "Hi, " << name << " my name is Aiden. ""\n";
	cout << "Now how old are you?""\n";
	cin >> age;
	cout << "Wow you don't look " << age << ". You look younger than that!""\n";
	cout << "Final question...""\n";
	cout << "How tall are you in inches?""\n";
	cin >> height;
	//final output
	cout << "So your name is " << name << ". You are " << age << " years old and you are " << height << " inches tall. Thats wild.""\n";
}