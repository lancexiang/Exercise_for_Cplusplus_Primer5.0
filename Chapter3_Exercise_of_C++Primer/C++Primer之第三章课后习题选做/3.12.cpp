#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Account
{
public:
	Account(int initial_money)
	{
		if (initial_money < 0)
		{
			balance = 0;
			cout << "The initial money is invalid";
		}
		balance = initial_money;
	}
	void credit(int save_money)
	{
		balance += save_money;
	}
	void debit(int get_money)
	{
		if (get_money > balance)
			cout << "Debit amount exceeded account balance";
		balance -= get_money;
	}
	int getBalance()
	{
		return balance;
	}
private:
	int balance;
};
int main2()  //仅作测试程序使用，无实际意义
{
	int xiang, yu;
	Account LuoXiang(10000);
	Account LuoYu(5000);
	cout << "LuoXiang的初始余额为:" << LuoXiang.getBalance() << "\n";
	cout << "LuoYu的初识余额为:" << LuoYu.getBalance() << "\n";
	while (1)
	{
		cout << "请输入要存入LuoXiang账户的金额:";
		cin >> xiang;
		cout << "请输入要取出LuoYu账户的金额:";
		cin >> yu;
		LuoXiang.credit(xiang);
		LuoYu.debit(yu);
		cout << "LuoXiang的余额为:" << LuoXiang.getBalance() << "\n";
		cout << "LuoYu的余额为:" << LuoYu.getBalance() << "\n";
	}
	system("pause");
	return 0;
}