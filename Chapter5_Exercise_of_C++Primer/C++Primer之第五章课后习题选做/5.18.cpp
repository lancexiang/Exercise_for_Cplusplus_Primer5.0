#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
using namespace std;
string B(int number);
string O(int number);
string H(int number);
int main1()
{
	cout << "D\t" << "B\t\t" << "O\t" << "H\t\n";
	for (int i = 1; i <= 256; i++)
	{
		cout << i << "\t";
		cout <<B(i)<< "\t\t";
		cout <<O(i) << "\t";
		cout << H(i) << "\t\n";
	}
	cout << endl;
	system("pause");
	return 0;
}
string B(int number)
{
	int i;
	string sec;
	if (number != 0)
	{
		i = number % 2;
		B(number / 2);
		cout << i;
	}
	return sec;
}
string O(int number)
{
	int i;
	string oct;
	if (number != 0)
	{
		i = number % 8;
		O(number / 8);
		cout << i;
	}
	return oct;
}
string H(int number)
{
	int i;
	string hex;
	if (number != 0)
	{
		i = number % 2;
		H(number / 2);
		cout << i;
	}
	return hex;
}