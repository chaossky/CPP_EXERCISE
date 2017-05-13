// CoutString.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

	std::cout << "저는" << 20 << "살" << "입니다." << std::endl;
	return 0;
}

