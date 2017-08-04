#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Date
{
public:
	Date(int nian, int yue, int ri)
	{
		setYears(nian);
		setMounts(yue);
		setDays(ri);
	}
	void setYears(int nian)
	{
		years = nian;
	}
	void setMounts(int yue)
	{
		if (1<=yue<=12)
			mounts = yue;
		else 
			mounts = 1;
	}
	void setDays(int ri)
	{
		days = ri;
	}
	int getYears()
	{
		return years;
	}
	int getMounts()
	{
		return mounts;
	}
	int getDays()
	{
		return days;
	}
	void displayDate()
	{
		cout << years << "/" << mounts << "/" << days << "/" << endl;
	}
private:
	int years, mounts, days;
};
int main()			//仅作测试程序使用，无实际意义
{
	Date date(2016, 8, 8);
	date.displayDate();
	system("pause");
	return 0;
}