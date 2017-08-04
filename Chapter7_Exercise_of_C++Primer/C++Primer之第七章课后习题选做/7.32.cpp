#include<iostream>
#include<iomanip>
#include<cstdlib>
#define N 80
using namespace std;
bool testPalindrome(char palindrome[N],int n);
int stringLength(char palindrome[N]);
int main10()   //╩ьнд
{
	bool result;
	int i = 0;
	char palindrome[N];
	cout << "Please input a string:";
	cin.getline(palindrome,80);
	result = testPalindrome(palindrome,i);
	result ? cout << "It's palindrome" << endl : cout << "It isn't palindrome" << endl;
	system("pause");
	return 0;
}
int stringLength(char palindrome[N])
{
	int n = 0;
	for (int i = 0; i < 80; i++)
	{
		if (('a' <= palindrome[i] && palindrome[i] <= 'z') || ('A' <= palindrome[i] && palindrome[i] <= 'Z'))
		{
			palindrome[n] = palindrome[i];
			n += 1;
		}
	}
	for (int i = n; i < 80; i++)
		palindrome[i] = 0;
	return n;
}
bool testPalindrome(char palindrome[N],int n = 0)
{
	int length = stringLength(palindrome);
	static int count = 0;
	if (palindrome[length - n - 1] == palindrome[n] && n < length)
	{
		n += 1;
		count += 1;
		testPalindrome(palindrome, n);
	}
	if (count == length)
		return true;
	else
		return false;
}