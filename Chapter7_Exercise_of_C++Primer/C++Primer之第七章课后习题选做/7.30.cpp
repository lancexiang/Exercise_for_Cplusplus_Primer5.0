//Ͱ����
#include<iostream>
#include<iomanip>
#include<cstdlib>
#define N 10 //����������
int array[N];
int bucket[10][N];
using namespace std;
int bucketsort(int array[],int n);//һά��������Ĵ�Сn
int ge(int array[], int n);//�����Ϊһλ����Ͱ�����е������
int shi(int array[], int n);//�����Ϊʮλ����Ͱ�����е������
int bai(int array[], int n);//�����Ϊ��λ����Ͱ�����е������
int main7()
{
	int integer, n=0;
	cout << "������10���������������:" << endl;
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
	for (int i = 0; i < n; i++) //�ֲ�����
	{
		bucket[array[i] % 10][i] = array[i];
	}
	for (int j = 0; j < 10; j++) //�ռ�����
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
	for (int i = 0; i < 10; i++)//�ռ���Ϻ�����
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
	for (int i = 0; i < n; i++) //�ֲ�����
	{
		bucket[array[i] / 10 % 10][i] = array[i];
	}
	for (int j = 0; j < 10; j++) //�ռ�����
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
int bai(int array[], int n)//�����Ϊ��λ����Ͱ�����е������
{
	shi(array, n);
	int x = 0;
	for (int i = 0; i < n; i++) //�ֲ�����
	{
		bucket[array[i] / 10 /10 % 10][i] = array[i];
	}
	for (int j = 0; j < 10; j++) //�ռ�����
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