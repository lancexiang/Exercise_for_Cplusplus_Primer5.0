#include <iostream>  
#include <cstdio>  
#include <ctime>  
using namespace std;
const int X = 8, Y = 8;
int chess[X][Y];
bool nextxy(int &x, int &y, int count); //̽����һ��
void outputChess();//��ӡ����
bool knightTour(int x, int y, int tag);//�ݹ���ʿ�������
int main()
{
	int x, y,tag=1;
	clock_t start, finsh;
	cout << "��������ʿ��ʼλ��(�Զ��Ÿ�����������):";
	cin >> x;
	cin.ignore();
	cin >> y;
	start = clock();
	if (!knightTour(x, y,tag))
		cout << "ERROR\n";
	finsh = clock();
	cout << "�����������ʱ��Ϊ��" << (double)(finsh - start) / CLOCKS_PER_SEC << "s\n";
	system("pause");
	return 0;
}
bool nextxy(int &x, int &y, int count)
{
	switch (count)
	{
	case 0:
		if (x + 1 < X && y - 2 >= 0 && !chess[x + 1][y - 2])
		{
			x = x + 1, y = y - 2;
			return true;
		}
		break;
	case 1:
		if (x + 2 < X && y - 1 >= 0 && !chess[x + 2][y - 1])
		{
			x = x + 2, y = y - 1;
			return true;
		}
		break;
	case 2:
		if (x + 2 < X && y + 1 < Y  && !chess[x + 2][y + 1])
		{
			x = x + 2, y = y + 1;
			return true;
		}
		break;
	case 3:
		if (x + 1 < X && y + 2 < Y && !chess[x + 1][y + 2])
		{
			x = x + 1, y = y + 2;
			return true;
		}
		break;
	case 4:
		if (x - 1 >= 0 && y + 2 < Y && !chess[x - 1][y + 2])
		{
			x = x - 1, y = y + 2;
			return true;
		}
		break;
	case 5:
		if (x - 2 >= 0 && y + 1 < Y && !chess[x - 2][y + 1])
		{
			x = x - 2, y = y + 1;
			return true;
		}
		break;
	case 6:
		if (x - 2 >= 0 && y - 1 >= 0 && !chess[x - 2][y - 1])
		{
			x = x - 2, y = y - 1;
			return true;
		}
		break;
	case 7:
		if (x - 1 >= 0 && y - 2 >= 0 && !chess[x - 1][y - 2])
		{
			x = x - 1, y = y - 2;
			return true;
		}
		break;
	}
	return false;
}
void outputChess()
{
	int i, j;
	for (i = 0; i < X; i++)
	{
		for (j = 0; j < Y; j++)
			printf("%-4d", chess[i][j]);
		cout << endl;
	}
	cout << endl;
}
bool knightTour(int x, int y, int tag = 1)
{
	chess[x][y] = tag;
	int count = 0, x1 = x, y1 = y;
	bool flag = false;
	if (X*Y == tag)
	{
		outputChess();
		return true;
	}
	while (count < 8)
	{
		flag = false;
		x1 = x, y1 = y;
		while (!flag && count < 8)
			flag = nextxy(x1, y1, count++);
		if (flag && knightTour(x1, y1, tag + 1))
			return true;
	} //�˴��л����㷨
	if (8 == count)
	{
		chess[x][y] = 0;
		return false;
	}
}