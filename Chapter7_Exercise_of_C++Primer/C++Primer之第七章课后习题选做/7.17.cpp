#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
int main2()
{
	srand(time(NULL));
	int rand1, rand2;
	int array[11] = { 0 };
	cout << "value\t" << "times\t" << "probability\t\n";
	for (int roll = 1; roll <= 36000; roll++)
	{
		rand1 = rand() % 6 + 1;
		rand2 = rand() % 6 + 1;
		array[(rand1 + rand2) - 2]++;
	}
	for (int i = 2; i <= 12; i++)
		cout << i << "\t" << array[i-2] << "\t" << static_cast<double>(array[i-2])/36000 << "\t" << endl;
	system("pause");
	return 0;
}