// CinString.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<string>
#include<iostream>
#include<cstdio>


int _tmain(int argc, _TCHAR* argv[]) {
	int nAge;
	std::cout << "나이를 입력하세요. " << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "직업을 입력하세요. " << std::endl;
	std::cin >> szJob;

	std::string strName;
	std::cout << "이름을 입력하세요. " << std::endl;
	std::cin >> strName;

	std::cout << "당신의 이름은" << strName 
		<< "이고,  나이는 " << nAge << " 살이며, 직업은" 
		<< szJob << "입니다. " << std::endl;
	std::cout << "   " << std::endl;

	return 0;
}


