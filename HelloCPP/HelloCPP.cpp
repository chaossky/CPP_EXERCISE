// HelloCPP.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//


//미리 컴파일된 헤더 파일(Pre-compiled header file)
// 프로젝트 파일 전체에 적용하고 싶은 선언을 작성할 목적으로 존재하는 파일
#include "stdafx.h" 

//C++에서 사용자 정의 헤더가 아닌 표준헤더 파일은 모두 .h 확장명을 생략한다.
#include <iostream>

// 전세계의 문자를 하나의 데이터 형식 안에 담는 유니코드를 지원하기 위해 기존의 
// int main(int argc, char* argv[])를 변경한 것
// _tmain()함수와 _TCHAR자료형은 모두 유니코드를 지원하기 위해 재 선언 된것이다.

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Hello, World" << std::endl;
	return 0;
}

