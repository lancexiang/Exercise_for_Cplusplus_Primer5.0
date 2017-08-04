#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int perfect(int integer);
int main1()
{
	cout << "perfect\t\t" << "factors\t\t\n";
	for (int i = 1; i <= 10000; i++)
	{
		perfect(i);
	}
	system("pause");
	return 0;
}
int perfect(int integer)
{
	int number = 0;
	for (int i = 1; i < integer; i++)
	{
		if(integer % i == 0)
		{
			number += i;
			continue;
		}
	}
	if (number == integer)
	{
		cout << number << "\t\t";
		cout << "1";
		for (int j = 2; j < number; j++)
		{
			if (number % j == 0)
			{
				cout << "+" << j;
			}
		}
		cout << endl;
	}
	return 0;
}