// overloaded functions
#include <iostream>
using namespace std;

//정수형을 입력하면 두개의 숫자를 더한다.
int sum(int a, int b)
{
	return a + b;
}

//실수형을 입력하면 두개의 숫자를 더한다.
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