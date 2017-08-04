#include<iostream>
#include<stdlib.h>
using namespace std;
int main3()
{
	char a;
	cout << "请输入一个字符:";
	cin >> a;
	cout << "ASCII字符集对应的值为:" << static_cast< int > (a) << "\n";
	system("pause");
	return 0;
}