#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile("alphabet.txt");
	ifstream outFile("finial.txt");
	char alp[26];
	if (inFile.is_open())
	{
		for (int i = 0; i < 26; i++)
		{
			inFile >> alp[i];
		}
		inFile.close();
	}
	else
	{
		cout << "Error \n";
	}
	if (outFile.is_open())
	{
		for (int i = 0; i < 26; i++)
		{
			outFile << inFile;
		}
		outFile.close();
	}
	else
	{
		cout << "Error \n";
	}

}
