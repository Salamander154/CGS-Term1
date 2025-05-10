#include <iostream>
#include "Person.h"
using namespace std;

Person::Person()
	: m_age(0)
	, m_name("IDK")
{

}
Person::Person(int age, string name)
	: m_age(age)
	, m_name(name)
{

}

Person::~Person()
{

}

void Person::Display() 
{
	cout << "Name: " << m_name << "\n";
	cout << "Age: " << m_age << "\n";
}
void Person::SetName(string name)
{
	m_name = name;
}
void Person::SetAge(int age)
{
	m_age = age;
}
void Person::AddToAge(int age)
{
	m_age = m_age + age;
}
