#include <iostream>
using namespace std;

void TicTakToe()
{
	int rowC;
	int col;
	int turn = 1;
	int  row11 = 0;
	int  row12 = 0;
	int  row13 = 0;
	int  row21 = 0;
	int  row22 = 0;
	int  row23 = 0;
	int  row31 = 0;
	int  row32 = 0;
	int  row33 = 0;
	start:
	cout << "Which row do you want to go to? \n";
	cin >> rowC;
	switch (rowC)
	{
	case 1:
	{
		cout << "Which column do you want to go to? \n";
		cin >> col;
		switch (col)
		{
		case 1:
		{
			if (turn == 1)
			{
				row11 = 1;
				goto show;
			}
			else if (turn == 2)
			{
				row11 = 2;
				goto show;
			}
		}
		case 2:
		{
			if (turn == 1)
			{
				row12 = 1;
				goto show;
			}
			else if (turn == 2)
			{
				row12 = 2;
				goto show;
			}
		}
		case 3:
		{
			if (turn == 1)
			{
				row13 = 1;
				goto show;
			}
			else if (turn == 2)
			{
				row13 = 2;
				goto show;
			}
		}
		default:
		{
			cout << "Invalid option \n";
			goto start;
		}
		}
	}
	case 2:
	{
		cout << "Which column do you want to go to \n";
		cin >> col;
		switch (col)
		{
		case 1:
		{
			if (turn == 1)
			{
				row21 = 1;
				goto show;
			}
			else if (turn == 2)
			{
				row21 = 2;
				goto show;
			}
		}
		case 2:
		{
			if (turn == 1)
			{
				row22 = 1;
				goto show;
			}
			else if (turn == 2)
			{
				row22 = 2;
				goto show;
			}
		}
		case 3:
		{
			if (turn == 1)
			{
				row23 = 1;
				goto show;
			}
			else if (turn == 2)
			{
				row23 = 2;
				goto show;
			}
		}
		default:
		{
			cout << "Invalid option \n";
			goto start;
		}
		}
	}
	case 3:
	{
		cout << "Which column do you want to go to \n";
		cin >> col;
		switch (col)
		{
		case 1:
		{
			if (turn == 1)
			{
				row31 = 1;
				goto show;
			}
			else if (turn == 2)
			{
				row31 = 2;
				goto show;
			}
		}
		case 2:
		{
			if (turn == 1)
			{
				row32 = 1;
				goto show;
			}
			else if (turn == 2)
			{
				row32 = 2;
				goto show;
			}
		}
		case 3:
		{
			if (turn == 1)
			{
				row33 = 1;
				goto show;
			}
			else if (turn == 2)
			{
				row33 = 2;
				goto show;
			}
		}
		default:
		{
			cout << "Invalid option \n";
			goto start;
		}
		}
	}
	default:
	{
		cout << "Invalid option \n";
		goto start;
	}
	}
	show:
	cout << row11 << "|" << row12 << "|" << row13 << " \n";
	cout << "----- \n";
	cout << row21 << "|" << row22 << "|" << row23 << " \n";
	cout << "----- \n";
	cout << row31 << "|" << row32 << "|" << row33 << " \n";
	if (turn == 1)
	{
		turn = 2;
	}
	else if (turn == 2)
	{
		turn = 1;
	}
	goto start;
}



int main()
{
	TicTakToe();
}