#include <iostream>
using namespace std;
float num;

float addOne(float i)
{
	float num1 = i + 1;
	cout << num1 << "\n";
	return num1;
}

float mutiTwo(float i)
{
	float num2 = i * 2;
	cout << num2 << "\n";
	return num2;
}

float addFour(float i)
{
	float num3 = i + 4;
	cout << num3 << "\n";
	return num3;
}

float divTwo(float i)
{
	float num4 = i / 2;
	cout << num4 << "\n";
	return num4;
}

float newMinusSub(float i, float og)
{
	float num5 = i - og;
	cout << num5 << "\n";
	return num5;
}

int main()
{
	float result;
	cout << "Give me a number between 1 and 20. \n";
	cin >> num;
	result = addOne(num);
	result = mutiTwo(result);
	result = addFour(result);
	result = divTwo(result);
	result = newMinusSub(result, num);
	cout << "The number is " << result << ".\n";
}