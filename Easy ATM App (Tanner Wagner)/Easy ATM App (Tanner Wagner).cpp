#include <iostream>
using namespace std;

// Simple ATM program utilizing many CS1 functions
// Might be helpful for CS1 class

void showMenu()
{
	cout << "**********MENU**********" << endl;
	cout << "1. Check balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "************************" << endl;
}

int main()
{
	int userOption = 0;
	double userBalance = 500; // Starting balance.

	do
	{
		showMenu();
		cout << "Option: ";
		cin >> userOption;
		system("cls");

		if (userOption < 1 || userOption > 4)
		{
			cout << "Invalid input." << endl;
			continue;
		}
		else
		{
			switch (userOption)
			{
			case 1:cout << "Balance is: " << userBalance << " $" << endl;
				break;
			case 2:cout << "Deposit amount:";
				double userDeposit;
				cin >> userDeposit;
				userBalance += userDeposit;
				break;
			case 3:cout << "Withdraw amount:";
				double userWithdraw;
				cin >> userWithdraw;
				if (userWithdraw <= userBalance)
				{

					userBalance -= userWithdraw;
				}
				else
				{
					cout << "Not enough funds." << endl;
				}
				break;
			}
		}

	} while (userOption != 4);

	return 0;
}