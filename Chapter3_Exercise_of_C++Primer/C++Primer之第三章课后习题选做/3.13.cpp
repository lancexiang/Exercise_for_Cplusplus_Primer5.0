#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Invoice
{
public:
	Invoice(string number, string describe, int amount, int price)
	{
		setComponent_Number(number);
		setComponent_Describe(describe);
		setSales_Amount(amount);
		setUnivalence(price);
	}
	void setComponent_Number(string number)
	{
		component_number = number;
	}
	void setComponent_Describe(string describe)
	{
		component_describe = describe;
	}
	void setSales_Amount(int amount)
	{
		sales_amount = amount;
	}
	void setUnivalence(int price)
	{
		univalence = price;
	}
	string getComponent_Number()
	{
		return component_number;
	}
	string getComponent_Describe()
	{
		return component_describe;
	}
	int getSales_Amount()
	{
		return sales_amount;
	}
	int getUnivalence()
	{
		return univalence;
	}
	int getInvoiceAmount(int amount, int price)
	{
		int profit;
		if (amount < 0 || price < 0)
			profit = 0;
		profit = amount * price;
		return profit;
	}
private:
	string component_number, component_describe;
	int sales_amount, univalence;
};
int main3()			//�������Գ���ʹ�ã���ʵ������
{
	Invoice invoice("����pro", "�����ֻ�", 1000, 1999);
	cout << "��Ʊ��Ϊ:" << invoice.getInvoiceAmount(invoice.getSales_Amount(), invoice.getUnivalence()) << endl;
	system("pause");
	return 0;
}