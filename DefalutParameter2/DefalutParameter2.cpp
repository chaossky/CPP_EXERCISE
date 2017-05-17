// DefalutParameter2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int TestFunc(int nParam1, int nParam2=2) {
	return nParam1*nParam2;
}


int _tmain(int argc,_TCHAR* argv[])
{
	std::cout << TestFunc(10) << std::endl;
	std::cout << TestFunc(10, 5) << std::endl;
    return 0;
}

