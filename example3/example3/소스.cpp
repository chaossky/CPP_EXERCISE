// factorial calculator
#include <iostream>
using namespace std;
//���丮���� ���ϴµ� �ڽ��� �Լ��� �Լ������� ����Ѵ�.
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