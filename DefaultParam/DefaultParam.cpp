// DefaultParam.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int TestFunc(int = 10);
//nParam �Ű������� ����Ʈ ���� 10�̴�.
int TestFunc(int nParam) {
	return nParam;
}
int _tmain(int argc,_TCHAR* argv[])
{
	//ȣ���ڰ� ���μ��� ��� ���� �ʾ����Ƿ� ����Ʈ ���� �����Ѵ�.
	std::cout << TestFunc() << std::endl;

	//ȣ���ڰ� ���μ��� Ȯ�������Ƿ� ����Ʈ���� �����Ѵ�.
	std::cout << TestFunc(20) << std::endl;
    return 0;
}

