// CoutString.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<string>
#include<iostream>



int _tmain(int argc, _TCHAR* argv[])

{
	std::string strData = "Test String";
	std::cout << "Sample String"<< std::endl;
	std::cout << strData<< std::endl;

	strData = "New String";
	std::cout << strData << std::endl;

	std::cout << "����" << 20 << "��" << "�Դϴ�." << std::endl;
	return 0;
}

