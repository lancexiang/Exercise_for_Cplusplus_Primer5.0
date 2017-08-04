//--------------------------------------  
//���ú����ݹ飬����˻ʺ�����  
//  
//  zssure  2014-03-12  
//--------------------------------------  

#include <stdio.h>  
#include<cstdlib>
#include <cmath>  

int count = 0;//ȫ�ּ�������  

/*--------------------�ĸ��ʺ�----------------------*/
//#define QUEEN_NUM 4  
//int label[QUEEN_NUM][QUEEN_NUM]={ 0,0,0,0,      
//                                  0,0,0,0,  
//                                  0,0,0,0,  
//                                  0,0,0,0 };  

/*--------------------����ʺ�----------------------*/
//#define QUEEN_NUM 5  
//int label[QUEEN_NUM][QUEEN_NUM]={ 0,0,0,0,0,  
//                                  0,0,0,0,0,  
//                                  0,0,0,0,0,  
//                                  0,0,0,0,0,  
//                                  0,0,0,0,0       };  

/*--------------------�����ʺ�----------------------*/
//#define QUEEN_NUM 6  
//int label[QUEEN_NUM][QUEEN_NUM]={ 0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,  
//                                  0,0,0,0,0,0  
//                                                  };  

/*--------------------�߸��ʺ�----------------------*/
//#define QUEEN_NUM 7  
//int label[QUEEN_NUM][QUEEN_NUM]={ 0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0  
//                                                  };  

/*--------------------�˸��ʺ�----------------------*/
#define QUEEN_NUM 8  
int label[QUEEN_NUM][QUEEN_NUM] = { 0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0 };


void FillChessbox(int m, int n, int num)
{
	for (int i = 0; i<QUEEN_NUM; ++i)
	for (int j = 0; j<QUEEN_NUM; ++j)
	if (abs(i - m) == abs(j - n))//�Խ��������  
	{
		if (label[i][j] == 0)
			label[i][j] = num;
	}

	int i = 0, j = 0;
	while (i<QUEEN_NUM)//�����  
	{
		if (label[i][n] == 0)
			label[i][n] = num;
		++i;
	}
	while (j<QUEEN_NUM)//�����  
	{
		if (label[m][j] == 0)
			label[m][j] = num;
		++j;
	}

}
void ClearChessBox(int m, int n, int num)
{
	for (int i = 0; i<QUEEN_NUM; ++i)
	for (int j = 0; j<QUEEN_NUM; ++j)
	if (abs(i - m) == abs(j - n) && label[i][j] == num)
		label[i][j] = 0;
	int i = 0, j = 0;
	while (i<QUEEN_NUM)
	{
		if (label[i][n] == num)
			label[i][n] = 0;
		++i;
	}
	while (j<QUEEN_NUM)
	{
		if (label[m][j] == num)
			label[m][j] = 0;
		++j;
	}
}
void AllClear()
{
	for (int i = 0; i<QUEEN_NUM; ++i)
	for (int j = 0; j<QUEEN_NUM; ++j)
		label[i][j] = 0;

}
void PrintResult()
{
	for (int i = 0; i<QUEEN_NUM; ++i)
	{
		for (int j = 0; j<QUEEN_NUM; ++j)
			printf("%d ", label[i][j]);
		printf("\n");

	}
}
bool EightQueen(int n/*�ʺ����*/, int c/*�Ѿ����õĻʺ����*/)
{
	//static int count=0;  
	//С��3x3���������޽��  
	if (n<4)
		return false;

	for (int i = 0; i<n; ++i)
	{
		if (label[c - 1][i] == 0)//���ڿ��Է��õ�c���ʺ��λ��  
		{
			label[c - 1][i] = c + 1;
			if (c == n)/*�Ѿ�����������еĻʺ�*/
			{
				++count;
				PrintResult();
				printf("**************************\n");
				ClearChessBox(c - 1, i, c + 1);
				//AllClear();  
				return true;
			}
			FillChessbox(c - 1, i, c + 1);
			EightQueen(n, c + 1);
			ClearChessBox(c - 1, i, c + 1);
			/*-------------------------------------------------------------------------------------------------------------------------
			//  �ֳ��ָ���������һ���ʺ��Ƿ�˳�����ã���Ӧ�ûָ��ֳ���ԭ����
			//
			//  �����һ���ʺ����ʧ�ܣ���ô��ȻӦ�ý����η��õĻʺ�ȥ�������·��ã�������Ҫ�����ֳ��ָ��������ݣ���
			//  �����һ���ʺ���óɹ�����ζ�ű��η����Ѿ�������������һ���⣬��ʱ��Ҫ�ָ��ֳ���������һ�ε����·��ã�Ѱ����һ���⡣
			//
			//------------------------------------------------------------------------------------------------------------------------*/
			//if(!EightQueen(n,c+1))  
			//  ClearChessBox(c-1,i,c+1);  

		}
	}
	return false;
}

int main5()
{
	EightQueen(QUEEN_NUM, 1);
	printf("%d\n", count);
	system("pause");
	return 0;
}