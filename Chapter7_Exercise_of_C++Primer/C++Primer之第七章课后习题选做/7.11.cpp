#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int bubble(int a[]);
int main1()
{
	int array[10];
	for (int i = 0; i <= 9; i++)
		cin >> array[i];
	cout << "Before bubble sort:\n";
	for (int j = 0; j <= 9; j++)
		cout << array[j] << "   ";
	cout << "\nAfter bubble sort:\n";
	bubble(array);
	system("pause");
	return 0;
}
int bubble(int a[])
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				a[j + 1] = a[j] - a[j + 1];
				a[j] = a[j] - a[j + 1];
				a[j + 1] = a[j] + a[j + 1];
			}
		}
	}
	for (int k = 0; k <= 9; k++)
		cout << a[k] << "   ";
	cout << endl;
	return 0;
}