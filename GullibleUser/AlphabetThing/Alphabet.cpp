#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile("alphabet.txt");
	ofstream outFile;
	char alp[26];
	if (inFile.is_open())
	{
		for (int i = 0; i < 26; i++)
		{
			inFile >> alp[i];
			alp[i] = toupper(alp[i]);
			//cout << toupper(alp[i]);
			cout << alp[i] << "\n";
		}
		inFile.close();
	}
	else
	{
		cout << "Error \n";
	}
	outFile.open("finial.txt", ios_base::app);
	if (outFile.is_open())
	{
		for (int i = 0; i < 26; i++)
		{			
			outFile << alp[i];
		}
		outFile.close();
	}
	else
	{
		cout << "Error \n";
	}
	
}

