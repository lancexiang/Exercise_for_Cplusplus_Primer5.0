#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main1()
{
	int miles=0, gallons;
	int MPG_total=0, gallons_total=0;
	while (miles != -1)
	{
		cout << "Enter the miles used(-1 to quit):";
		cin >> miles;
		if (miles == -1)
			break;
		cout << "Enter gallons:";
		cin >> gallons;
		cout << "MPG this thankful:" << setprecision(8)<< static_cast<double>(miles)/ gallons ;
		MPG_total += miles;
		gallons_total += gallons;
		cout << "\nTotal MPG:" << setprecision(8) << static_cast<double>(MPG_total) / gallons_total << "\n\n";
	}

	return 0;
}