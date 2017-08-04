#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main2()
{
	int account_number;
	float beginning_balance;
	float total_charges, total_credits, credit_limits;
	while (1)
	{
		cout << "Enter account number (-1 to end):";
		cin >> account_number;
		if (account_number == -1)
			break;
		cout << "Enter beginning balance:  ";
		cin >> beginning_balance;
		cout << "Enter total charges:  ";
		cin >> total_charges;
		cout << "Enter total credits:  ";
		cin >> total_credits;
		cout << "Enter credit limit:  ";
		cin >> credit_limits;
		if ((beginning_balance + total_charges - total_credits) > credit_limits)
		{
			cout << "New balance is	" << beginning_balance + total_charges - total_credits;
			cout << "\nAccount:\t" << account_number;
			cout << "\nCredit limit:\t" << setprecision(2) << fixed << credit_limits;
			cout << "\nBalance:\t" << beginning_balance + total_charges - total_credits;
			cout << "\nCredit Limit Exceeded\n\n";
		}
		else
			cout << "New balance is " << beginning_balance + total_charges - total_credits << "\n\n";
	}
	return 0;
}