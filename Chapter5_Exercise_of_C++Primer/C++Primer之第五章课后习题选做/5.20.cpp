#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main2() //�ϴ����˹
{
	int side1, side2;
	int hypotenuse;
	cout << "ֱ�Ǳ�\t" << "ֱ�Ǳ�\t" << "б��\t\n";
	for (side1 = 1; side1 <= 500; side1++)
	{
		for (side2 = 1; side2 <= 500; side2++)
		{
			for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
			{
				if (side1*side1 + side2*side2 == hypotenuse*hypotenuse&&side1<side2)
				{

					cout << side1 << "\t" << side2 << "\t" << hypotenuse << "\t\n";
					continue;
				}
			}
		}
	}
	system("pause");
	return 0;
}