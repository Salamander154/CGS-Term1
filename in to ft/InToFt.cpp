#include <iostream>
#include <string>

using namespace std;

int main()
{
	float in;
	//asking for inches
	cout << "Please put in a whole number unit of inches." "\n";
	cin >> in;
	float ft = in / 12; 
	cout << "Your conversion from you input unit of " << in << " inches is equal to " << ft << " feet" "\n";

}