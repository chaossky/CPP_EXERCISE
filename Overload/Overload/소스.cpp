// overloading functions
#include <iostream>
using namespace std;

//정수값을 입력하면 두개의 숫자를 곱한다.
int operate(int a, int b)
{
	return (a*b);
}

//실수형을 입력하면 두개의 숫자를 나눈다.
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