// RValueSample.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int TestFunc(int nParam) {
	int nResult = nParam * 2;

	return nResult;
}



int _tmain(int argc, _TCHAR* argv[])
{
	int nInput = 0;//���� ������ ����� ������ '�ӽð��'�� ���� r-value������ ����� ����
	cout << "Input Number : ";
	cin >> nInput;

	//����������� ������� �ӽ� ��ü�� ���� r-value����
	int &&rdata = nInput + 5;
	cout << rdata << endl;

	//�Լ� ��ȯ���� ������� �ӽ� ��ü�� ���� r-value����
	int &&result = TestFunc(10); //�Լ� ��ȯ���� ���� r-value������ ����� ����
	//���� �߿� �Ѱ��� �ӽ� ���
	//���� �ӽð���� �̾����� ���꿡 Ȱ��� ���Ŀ� �Ҹ��ϴ� r-value
	//r-value������ ���� �� ����� ��� ���� �����ڸ� �ο� �Ҽ� �ִ�.�� ��

	//���� ������ �� �ִ�.
	result += 10;
	cout << result << endl;

    return 0;
}

