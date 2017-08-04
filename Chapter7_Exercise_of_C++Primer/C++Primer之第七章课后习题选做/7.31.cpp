#include<iostream>
#include<iomanip>
#include<cstdlib>
#define N 10
using namespace std;
int selectionSort(int array[], int n)
{
	int min;
	int temp;
	if (n == 0)
	{
		return 0;
	}
	else
	{
		min = array[N-1-n];
		for (int i = N-1-n; i <=N-1; i++)
		{
			if (array[i] < min)
			{
				temp = min;
				min = array[i];
				array[i] = temp;
			}
		}
		array[N-1-n] = min;
		selectionSort(array, n - 1);
	}
	return 0;
}
int main8()
{
	int array[N];
	int integer, n = 0;
	cout << "请输入10个待排序的正整数:" << endl;
	while (n < N)
	{
		cin >> integer;
		array[n] = integer;
		n++;
	}
	selectionSort(array, n-1);
	for (int i = 0; i < n; i++)
		cout << array[i] << "  ";
	system("pause");
	return 0;
}
