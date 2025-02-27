#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
	//the variables
	float startX;
	float startY;
	float endX;
	float endY;
	float final;
	//finding start X
	cout << "Please enter your whole number starting X coordinate. \n";
	cin >> startX;
	//finding start Y
	cout << "Now enter your whole number starting Y coordinate. \n";
	cin >> startY;
	//finding end X
	cout << "Now enter your whole number final X coordinate. \n";
	cin >> endX;
	//finding end Y
	cout << "Now enter your whole number final Y coordinate. \n";
	cin >> endY;
	//the math - ?((x2 - x1)² + (y2 - y1)²)
	final = sqrt(((endX - startX) * (endX - startX)) + ((endY - startY) * (endY - startY)));
	cout << "The distance between the two points is " << final << ". \n";
}