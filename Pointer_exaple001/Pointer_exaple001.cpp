// Pointer_exaple001.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc,_TCHAR* argv[])
{
	int a = 5;
	int *p1;
	p1 = &a;
	cout << "a�� ����" << a << endl;
	cout << "p1�� ����" << p1 << endl;
	cout << "a�� �ּ� ���� " << &a << endl;
	cout << "������ P1�� ���� " << *p1 << endl;

    return 0;
}

