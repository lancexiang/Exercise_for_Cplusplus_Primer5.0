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
int main2()  //�������Գ���ʹ�ã���ʵ������
{
	int xiang, yu;
	Account LuoXiang(10000);
	Account LuoYu(5000);
	cout << "LuoXiang�ĳ�ʼ���Ϊ:" << LuoXiang.getBalance() << "\n";
	cout << "LuoYu�ĳ�ʶ���Ϊ:" << LuoYu.getBalance() << "\n";
	while (1)
	{
		cout << "������Ҫ����LuoXiang�˻��Ľ��:";
		cin >> xiang;
		cout << "������Ҫȡ��LuoYu�˻��Ľ��:";
		cin >> yu;
		LuoXiang.credit(xiang);
		LuoYu.debit(yu);
		cout << "LuoXiang�����Ϊ:" << LuoXiang.getBalance() << "\n";
		cout << "LuoYu�����Ϊ:" << LuoYu.getBalance() << "\n";
	}
	system("pause");
	return 0;
}