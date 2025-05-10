#include <iostream>
#include <string>
using namespace std;

struct person
{
	string name;
	int age;
	float height;
};

int main ()
{
	person human1;
	human1.name = "James";
	human1.age = 17;
	human1.height = 6.2;
	cout << "Name:" << human1.name << " Age:" << human1.age << " Height:" << human1.height << ". \n";

	person human2;
	human2.name = "Tim";
	human2.age = 28;
	human2.height = 3.2;
	cout << "Name:" << human2.name << " Age:" << human2.age << " Height:" << human2.height << ". \n";
}