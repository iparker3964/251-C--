// This program displays a menu and calculates a customer's monthly bill
// Author: Isaiah Parker
#include <iostream> 
#include <iomanip>
#include <cctype>
using namespace std;
int main()
{
	char choice; 
	int hours;
	double charges;
	double additional;

	const double pakage_A = 9.95, package_B = 14.95, package_C = 19.95;
	
	cout << "\t\tInternet Service Provider Menu\n\n"
		 << " Whats your total amount of hours of internet access: ";
	cin >> hours;
	cout << "A. Package A for $9.95 per month fot 10 hours" << endl;
	cout << "B. Package B for $14.95 per month for 20 hours" << endl;
	cout << "C. Package C for $19.95 for unlimted access" << endl;
	cout << "Enter your choice: "<< endl;
	cin >> choice;
	choice=toupper(choice);
	cout << fixed << showpoint << setprecision(2);

	if (choice == 'A' && hours > 10)
	{ 
		cout << "You have a fee of $2.00 per every additional hour";
		charges = 9.95 + (hours - 10) * 2.00;
		cout << "Your bill is $" << charges << endl;
	}
	else
	{
		if (choice == 'A')
		{
			charges =  9.95;
			cout << "Your bill is $" << charges << endl;
		}
		else
		{
			if ( choice == 'B' && hours > 20)
			{
				cout << "You have a fee of $1.00 per additional hour";
				charges = 14.95 + (hours - 20) * 1.00;
				cout << "Your bill is $" << charges << endl;
			}
			else
			{
				if (choice == 'B')
				{
					charges = 14.95;
					cout << "Your bill is $" << charges << endl;
				}
				else
				{
					if(choice == 'C')
					{
						charges = 19.95;
						cout << "Your bill is $" << charges << endl;
					}
					else
					{
						if(hours > 744)
						{
							cout << "Hours can not exceed 744"<< endl;
						}
					}
				}
			}
		}
	}
	return 0;
}