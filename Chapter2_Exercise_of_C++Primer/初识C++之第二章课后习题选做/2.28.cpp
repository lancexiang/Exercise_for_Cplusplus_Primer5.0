#include<iostream>
#include<stdlib.h>
using namespace std;
int main4()
{
	int number;
	cout << "����һ����λ��:";
	cin >> number;
	cout << number / 10000 << "   ";
	cout << number % 10000 / 1000 << "   ";
	cout << number % 10000 % 1000 /100 << "   ";
	cout << number % 10000 % 1000 % 100 /10<< "   ";
	cout << number % 10000 % 1000 % 100 % 10 << "   ";
	system("pause");
	return 0;
}