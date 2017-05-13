// NewDeleteSample.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//인스턴스 만 동적으로 생성하는 경우
	int *pData = new int;

	//초기값을 기술하는 경우
	int *pNewData = new int(10);
	
	*pData = 5;
	std::cout << *pData << std::endl;
	std::cout << *pNewData << std::endl;

	delete pData;
	delete pNewData;
    
}

