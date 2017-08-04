#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main6()//Eratosthenes…∏—°∑®
{
	int array[1000];
	for (int i = 0; i < 1000; i++)
		array[i] = 1;
	for (int i = 2; i <= 999; i++)
	{
		if (array[i] == 1)
		{
			for (int j = i + 1; j <= 999; j++)
			{
				if (j % i == 0)
					array[j] = 0;
			}
		}
		if (array[i] == 1)
		{
			cout << left <<setw(6) << i ;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}