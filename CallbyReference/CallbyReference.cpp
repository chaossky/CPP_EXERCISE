// CallbyReference.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void testFunc(int &rParam) {
	//��ȣ���� �Լ����� ������ ���� �����ߴ�.
	rParam = 100;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int nData = 0;

	//������ ���� �μ� �����̴�.
	testFunc(nData);
	cout << nData << endl;
    return 0;
}

