// DefaultParam.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int TestFunc(int = 10);
//nParam 매개변수의 디폴트 값은 10이다.
int TestFunc(int nParam) {
	return nParam;
}
int _tmain(int argc,_TCHAR* argv[])
{
	//호출자가 실인수를 기술 하지 않았으므로 디폴트 값을 적용한다.
	std::cout << TestFunc() << std::endl;

	//호출자가 실인수를 확정했으므로 디폴트값은 무시한다.
	std::cout << TestFunc(20) << std::endl;
    return 0;
}

