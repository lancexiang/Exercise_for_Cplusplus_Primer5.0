//--------------------------------------  
//利用函数递归，解决八皇后问题  
//  
//  zssure  2014-03-12  
//--------------------------------------  

#include <stdio.h>  
#include<cstdlib>
#include <cmath>  

int count = 0;//全局计数变量  

/*--------------------四个皇后----------------------*/
//#define QUEEN_NUM 4  
//int label[QUEEN_NUM][QUEEN_NUM]={ 0,0,0,0,      
//                                  0,0,0,0,  
//                                  0,0,0,0,  
//                                  0,0,0,0 };  

/*--------------------五个皇后----------------------*/
//#define QUEEN_NUM 5  
//int label[QUEEN_NUM][QUEEN_NUM]={ 0,0,0,0,0,  
//                                  0,0,0,0,0,  
//                                  0,0,0,0,0,  
//                                  0,0,0,0,0,  
//                                  0,0,0,0,0       };  

/*--------------------六个皇后----------------------*/
//#define QUEEN_NUM 6  
//int label[QUEEN_NUM][QUEEN_NUM]={ 0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,  
//                                  0,0,0,0,0,0  
//                                                  };  

/*--------------------七个皇后----------------------*/
//#define QUEEN_NUM 7  
//int label[QUEEN_NUM][QUEEN_NUM]={ 0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0,  
//                                  0,0,0,0,0,0,0  
//                                                  };  

/*--------------------八个皇后----------------------*/
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
	if (abs(i - m) == abs(j - n))//对角区域填充  
	{
		if (label[i][j] == 0)
			label[i][j] = num;
	}

	int i = 0, j = 0;
	while (i<QUEEN_NUM)//行填充  
	{
		if (label[i][n] == 0)
			label[i][n] = num;
		++i;
	}
	while (j<QUEEN_NUM)//列填充  
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
bool EightQueen(int n/*皇后个数*/, int c/*已经放置的皇后个数*/)
{
	//static int count=0;  
	//小于3x3的棋盘是无解的  
	if (n<4)
		return false;

	for (int i = 0; i<n; ++i)
	{
		if (label[c - 1][i] == 0)//存在可以放置第c个皇后的位置  
		{
			label[c - 1][i] = c + 1;
			if (c == n)/*已经放置完毕所有的皇后*/
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
			//  现场恢复，无论下一个皇后是否顺利放置，都应该恢复现场。原因是
			//
			//  如果下一个皇后放置失败，那么自然应该将本次放置的皇后去除，重新放置，所以需要进行现场恢复（即回溯）；
			//  如果下一个皇后放置成功，意味着本次放置已经满足条件，是一个解，此时需要恢复现场，进行下一次的重新放置，寻找下一个解。
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