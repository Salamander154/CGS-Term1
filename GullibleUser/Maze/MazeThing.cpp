#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector <string> lines;
	ifstream inFile("Maze.txt");
	if (inFile.is_open())
	{
		string input;
		while (getline(inFile, input))
		{
			lines.push_back(input);
			//cout << input << "\n";
		}
		inFile.close();
	}
	else
	{
		cout << "Error \n";
	}
	const int nRows = lines.size();
	const int nCols = lines[0].length();
	char** fmaze = new char*[nRows];
	for (int i = 0; i < nRows; i++)
	{
		fmaze[i] = new char[nCols];
	}
	for (int r = 0; r < nRows; r++)
	{
		for (int c = 0; c < nCols; c++)
		{
			fmaze[r][c] = lines[r][c];
			cout << fmaze[r][c];
		}
		cout << "\n";
	}
}