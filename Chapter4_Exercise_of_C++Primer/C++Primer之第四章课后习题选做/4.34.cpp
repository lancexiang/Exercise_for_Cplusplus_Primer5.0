#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int encode(int number);		//加密
int decode(int number);		//解密
int main()
{
	int number, encode_number, decode_number;
	while (1)
	{
		cout << "Enter a four-bit integer(位数不足前面补0,-1退出):";
		cin >> number;
		if (number > 9999 || number == -1)
			break;
		encode_number = encode(number);
		decode_number = decode(encode_number);
	}
	system("pause");
	return 0;
}
int encode(int number)
{
	int encode_number;
	int first, second, third, fourth;
	first = (number / 1000 + 7) % 10;
	second =(number % 1000 / 100 + 7) % 10;
	third = (number % 1000 % 100 / 10 + 7) % 10;
	fourth = (number % 1000 % 100 % 10 + 7) % 10;
	first = third - first;
	third = third - first;
	first = first + third;
	second = fourth - second;
	fourth = fourth - second;
	second = fourth + second;
	encode_number = first * 1000 + second * 100 + third * 10 + fourth;
	cout << setfill('0') << setw(4) << encode_number << "\n";
	return encode_number;
}
int decode(int number)
{
	int decode_number;
	int first, second, third, fourth;
	first = number / 1000;
	second = number % 1000 / 100;
	third = number % 1000 % 100 / 10;
	fourth = number % 1000 % 100 % 10;
	first = third - first;
	third = third - first;
	first = first + third;
	second = fourth - second;
	fourth = fourth - second;
	second = fourth + second;
	if (first < 7)
		first += 3;
	else
		first -= 7;
	if (second < 7)
		second += 3;
	else
		second -= 7;
	if (third < 7)
		third += 3;
	else
		third -= 7;
	if (fourth < 7)
		fourth += 3;
	else
		fourth -= 7;
	decode_number = first * 1000 + second * 100 + third * 10 + fourth;
	cout << setfill('0') << setw(4) << decode_number << "\n";
	return decode_number;
}