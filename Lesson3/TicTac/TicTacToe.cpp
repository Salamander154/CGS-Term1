#include <iostream>
using namespace std;

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

bool takeTurn(int row, int column)
{
	switch (row)
	{
	case 1:
	{
		switch (column)
		{
		case 1:
		{
			if (row11 == 0)
			{
				row11 = turn;
				return true;
			}
			else
			{
				return false;
			}
		}
		case 2:
		{
			if (row12 == 0)
			{
				row12 = turn;
				return true;
			}
			else
			{
				return false;
			}
		}
		case 3:
		{
			if (row13 == 0)
			{
				row13 = turn;
				return true;
			}
			else
			{
				return false;
			}
		}
		default:
		{
			return false;
		}
		}
		break;
	}
	case 2:
	{
		switch (column)
		{
		case 1:
		{
			if (row21 == 0)
			{
				row21 = turn;
				return true;
			}
			else
			{
				return false;
			}
		}
		case 2:
		{
			if (row22 == 0)
			{
				row22 = turn;
				return true;
			}
			else
			{
				return false;
			}
		}
		case 3:
		{
			if (row23 == 0)
			{
				row23 = turn;
				return true;
			}
			else
			{
				return false;
			}
		}
		default:
		{
			return false;
		}
		}
		break;
	}
	case 3:
	{
		switch (column)
		{
		case 1:
		{
			if (row31 == 0)
			{
				row31 = turn;
				return true;
			}
			else
			{
				return false;
			}
		}
		case 2:
		{
			if (row32 == 0)
			{
				row32 = turn;
				return true;
			}
			else
			{
				return false;
			}
		}
		case 3:
		{
			if (row33 == 0)
			{
				row33 = turn;
				return true;
			}
			else
			{
				return false;
			}
		}
		default:
		{
			return false;
		}
		}
		break;
	}
	default:
	{
		return false;
	}
	}



}

void show()
{
	cout << row11 << "|" << row12 << "|" << row13 << " \n";
	cout << "----- \n";
	cout << row21 << "|" << row22 << "|" << row23 << " \n";
	cout << "----- \n";
	cout << row31 << "|" << row32 << "|" << row33 << " \n";
}

void switchTurns()
{
	if (turn == 1)
	{
		turn = 2;
	}
	else if (turn == 2)
	{
		turn = 1;
	}
}

bool checkWin()
{
	if (row11 == turn && row12 == turn && row13 == turn) return true;
	if (row21 == turn && row22 == turn && row23 == turn) return true;
	if (row31 == turn && row32 == turn && row33 == turn) return true;
	if (row11 == turn && row21 == turn && row31 == turn) return true;
	if (row12 == turn && row22 == turn && row23 == turn) return true;
	if (row13 == turn && row23 == turn && row33 == turn) return true;
	if (row11 == turn && row22 == turn && row33 == turn) return true;
	if (row13 == turn && row22 == turn && row31 == turn) return true;
	return false;
}

void TicTakToe()
{
	int rowC;
	int col;
	bool isRunning = true;
	while (isRunning)
	{
		cout << "Which row do you want to go to? \n";
		cin >> rowC;
		cout << "Which column do you want to go to? \n";
		cin >> col;
		if (takeTurn(rowC, col))
		{
			show();
			if (checkWin())
			{
				cout << "You win player " << turn << ". \n";
				isRunning = false;
			}
			else
			{
				switchTurns();
			}
		}
		else
		{
			cout << "Invalid option. \n";
		}
	}
}

int main()
{
	TicTakToe();
}