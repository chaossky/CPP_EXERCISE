// overloaded functions
#include <iostream>
using namespace std;

//�������� �Է��ϸ� �ΰ��� ���ڸ� ���Ѵ�.
int sum(int a, int b)
{
	return a + b;
}

//�Ǽ����� �Է��ϸ� �ΰ��� ���ڸ� ���Ѵ�.
double sum(double a, double b)
{
	return a + b;
}

int main()
{
	cout << sum(10, 20) << '\n';
	cout << sum(1.0, 1.5) << '\n';
	cout << sum(1.0, 3.0) << endl;
	cout << sum(1.0, 4.0) << '\n';
	return 0;
}