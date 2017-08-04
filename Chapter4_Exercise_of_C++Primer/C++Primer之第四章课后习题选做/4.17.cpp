#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main4()
{
	int number, counter = 1, Largest = 0;
	while (counter <= 10)
	{
		cout << "number: ";
		cin >> number;
		if (number >= Largest)
			Largest = number;
		counter += 1;
	}
	cout << "largest:" << Largest << "\n";
	system("pause");
	return 0;
}