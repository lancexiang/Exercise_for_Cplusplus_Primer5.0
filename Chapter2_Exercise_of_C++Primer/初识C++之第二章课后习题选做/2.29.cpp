#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i = 0;
	cout << "intrger	" << "square	" << "cube	\n";
	while (i <= 10)
	{
		cout << i << "\t" << i*i << "\t" << i*i*i << "\n";
		i++;
	}
	system("pause");
	return 0;
}