// CinString.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<string>
#include<iostream>
#include<cstdio>


int _tmain(int argc, _TCHAR* argv[]) {
	int nAge;
	std::cout << "���̸� �Է��ϼ���. " << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "������ �Է��ϼ���. " << std::endl;
	std::cin >> szJob;

	std::string strName;
	std::cout << "�̸��� �Է��ϼ���. " << std::endl;
	std::cin >> strName;

	std::cout << "����� �̸���" << strName 
		<< "�̰�,  ���̴� " << nAge << " ���̸�, ������" 
		<< szJob << "�Դϴ�. " << std::endl;
	std::cout << "   " << std::endl;

	return 0;
}


