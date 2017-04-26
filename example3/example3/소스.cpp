// factorial calculator
#include <iostream>
using namespace std;
//팩토리얼을 구하는데 자신의 함수를 함수내에서 사용한다.
long factorial(long a)
{
	if (a > 1)
		return (a * factorial(a - 1));
	else
		return 1;
}

int main()
{
	long number = 10;
	cout << number << "! = " << factorial(number)<<endl;
	return 0;
}