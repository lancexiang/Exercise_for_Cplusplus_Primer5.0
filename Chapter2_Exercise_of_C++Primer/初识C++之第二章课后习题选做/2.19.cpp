#include<iostream>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::endl;
int max(int a, int b, int c)
{
	if (a > b)
	{
		if (c > a)
			return c;
		else
			return a;
	}
	else if (c > b)
		return c;
	else
		return b;
}
int min(int a, int b, int c)
{
	if (a < b)
	{
		if (c < a)
			return c;
		else
			return a;
	}
	else if (c < b)
		return c;
	else
		return b;
}
int main1()
{
	int number1, number2, number3;
	cout << "Input three different intergers:";
	cin  >> number1 >> number2 >> number3;
	cout << "Sum is " << number1 + number2 + number3 <<"\n";
	cout << "Average is " << (number1 + number2 + number3) / 3 << "\n";
	cout << "Product is	" << number1 * number2 * number3 << "\n";
	cout << "Smallest is " << min(number1, number2, number3) << "\n";
	cout << "Largest is " << max(number1, number2, number3) << "\n" << endl;
	system("pause");
	return 0;
}