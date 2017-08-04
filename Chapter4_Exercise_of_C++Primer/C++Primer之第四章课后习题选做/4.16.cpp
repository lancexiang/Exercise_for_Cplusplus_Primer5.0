#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main3()
{
	int hours;
	float rate, salary;
	while (1)
	{
		cout << "Enter hours worked (-1 to end):  ";
		cin >> hours;
		if (hours == -1)
			break;
		cout << "Enter hourly rate if the worker ($00.00):  ";
		cin >> rate;
		if (hours > 40)
		{
			salary = 40 * rate + (hours - 40) * (1.5 * rate);
			cout << "Salart is $" << salary << "\n\n";
		}
		else
			cout << "Salart is $" << hours * rate << "\n\n";
	}
	return 0;
}