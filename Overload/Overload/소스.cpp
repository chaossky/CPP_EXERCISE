// overloading functions
#include <iostream>
using namespace std;

//�������� �Է��ϸ� �ΰ��� ���ڸ� ���Ѵ�.
int operate(int a, int b)
{
	return (a*b);
}

//�Ǽ����� �Է��ϸ� �ΰ��� ���ڸ� ������.
double operate(double a, double b)
{
	return (a / b);
}

int main()
{
	int x = 5, y = 2;
	double n = 5.0, m = 12.0;
	cout << operate(x, y) << '\n';
	cout << operate(n, m) << '\n';
	return 0;
}