#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int gcd(int a, int b);
int main2()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	system("pause");
	return 0;
}
int gcd(int a, int b)
{
	int t;
	if (a < b)
	{
		b = a - b;
		a = a - b;
		b = a + b;
	}
	while (t = a % b) //շת������������е���֣�����t���ս�������
	{
		a = b;
		b = t;
	}
	return b;
}