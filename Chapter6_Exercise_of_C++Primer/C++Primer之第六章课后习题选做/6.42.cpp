#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<stack>
using namespace std;
struct Quad {
	Quad();
	Quad(int n, int a, int b, int c) : _n(n), _x(a), _y(b), _z(c) 
	{
	}
	int _n;         // Ҫ�ƶ�����������  
	int _x, _y, _z;    // ������������  
};
int hanoi_digui(int n,int a,int b,int c);
int hanoi_diedai(int n, int a, int b, int c);
int main()
{
	int n,a=1,b=2,c=3;
	cin >> n;
	hanoi_diedai(n,a,b,c);
	cout << "�ƶ��Ĵ���Ϊ" << pow(2, n) - 1 << endl;
	system("pause");
	return 0;
}
int hanoi_digui(int n, int a, int b, int c)//��a�ƶ���c
{
	if (n == 1)
		cout << a << "->" << c <<"\n";
	else
	{
		hanoi_digui(n - 1, a, c, b);//������n-1��a�ƶ���b
		cout << a << "->" << c << "\n";//�����һ����a�ƶ���c
		hanoi_digui(n - 1, b, a, c);//��b�����n-1�ƶ���c����ɴ�a��c
	}
	return 0;
}
int hanoi_diedai(int n, int a, int b, int c)//�ݹ���������ͨ����ջ���õ���ʵ��
{
	std::stack<Quad> s;
	s.push(Quad(n, a, b, c));
	while (!s.empty()) {
		Quad q = s.top();
		s.pop();
		n = q._n;
		a = q._x;
		b = q._y;
		c = q._z;
		if (n == 1) {
			std::cout << "Move top disk from peg " << q._x
				<< " to peg " << q._z << "\n";
		}
		else {
			s.push(Quad(n - 1, b, a, c));
			s.push(Quad(1, a, b, c));
			s.push(Quad(n - 1, a, c, b));
		}
	}
	return 0;
}