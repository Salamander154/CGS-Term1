#pragma once
#include <string>
using namespace std;

class Person
{
	int m_age;
	string m_name;
public:
	Person();
	Person(int age, string name);

	~Person();

	void Display();
	void SetName(string name);
	void SetAge(int age);
	void AddToAge(int age);

};