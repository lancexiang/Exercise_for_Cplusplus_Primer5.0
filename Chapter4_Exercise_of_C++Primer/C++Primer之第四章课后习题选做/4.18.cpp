#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main5()
{
	int i=0;
	cout << "N	" << "10*N	" << "100*N	" << "1000*N	" << "\n\n";
	while (++i <= 5)
	{
		cout << i << "\t" << 10 * i << "\t" << 100 * i << "\t" << 1000 * i << "\t" << "\n";
	}
	system("pause");
	return 0;
}