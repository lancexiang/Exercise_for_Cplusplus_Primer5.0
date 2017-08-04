//桶排序
#include<iostream>
#include<iomanip>
#include<cstdlib>
#define N 10 //待排数个数
int array[N];
int bucket[10][N];
using namespace std;
int bucketsort(int array[],int n);//一维数组和它的大小n
int ge(int array[], int n);//最大数为一位数在桶排序中调用这个
int shi(int array[], int n);//最大数为十位数在桶排序中调用这个
int bai(int array[], int n);//最大数为百位数在桶排序中调用这个
int main7()
{
	int integer, n=0;
	cout << "请输入10个待排序的正整数:" << endl;
	while (n < N)
	{
		cin >> integer;
		array[n] = integer;
		n++;
	}
	bucketsort(array, N);
	for (int i = 0; i < n; i++)
		cout << array[i] << "  ";
	system("pause");
	return 0;
}
int bucketsort(int array[], int n)
{
	bai(array, n);
	return 0;
}
int ge(int array[], int n)
{
	int x = 0;
	for (int i = 0; i < n; i++) //分布过程
	{
		bucket[array[i] % 10][i] = array[i];
	}
	for (int j = 0; j < 10; j++) //收集过程
	{
		for (int k = 0; k < n; k++)
		{
			if (bucket[j][k] != 0)
			{
				array[x] = bucket[j][k];
				x++;
			}
		}
	}
	for (int i = 0; i < 10; i++)//收集完毕后清零
	{
		for (int j = 0; j < n; j++)
			bucket[i][j] = 0;
	}
	return 0;
}
int shi(int array[], int n)
{
	ge(array, n);
	int x = 0;
	for (int i = 0; i < n; i++) //分布过程
	{
		bucket[array[i] / 10 % 10][i] = array[i];
	}
	for (int j = 0; j < 10; j++) //收集过程
	{
		for (int k = 0; k < n; k++)
		{
			if (bucket[j][k] != 0)
			{
				array[x] = bucket[j][k];
				x++;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < n; j++)
			bucket[i][j] = 0;
	}
	return 0;
}
int bai(int array[], int n)//最大数为百位数在桶排序中调用这个
{
	shi(array, n);
	int x = 0;
	for (int i = 0; i < n; i++) //分布过程
	{
		bucket[array[i] / 10 /10 % 10][i] = array[i];
	}
	for (int j = 0; j < 10; j++) //收集过程
	{
		for (int k = 0; k < n; k++)
		{
			if (bucket[j][k] != 0)
			{
				array[x] = bucket[j][k];
				x++;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < n; j++)
			bucket[i][j] = 0;
	}
	return 0;
}