// RValueSample.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	int nInput = 0;//덧셈 연산의 결과로 생성된 '임시결과'에 대한 r-value참조자 선언과 정의
	cout << "Input Number : ";
	cin >> nInput;

	//산술연산으로 만들어진 임시 객체에 대한 r-value참조
	int &&rdata = nInput + 5;
	cout << rdata << endl;

	//함수 반환으로 만들어진 임시 객체에 대한 r-value참조
	int &&result = TestFunc(10); //함수 반환값에 대한 r-value참조자 선언과 정의
	//가장 중요 한것은 임시 결과
	//보통 임시결과는 이어지는 연산에 활용된 직후에 소멸하는 r-value
	//r-value참조는 이제 곧 사라질 대상에 대해 참조자를 부여 할수 있다.는 것

	//값을 변경할 수 있다.
	result += 10;
	cout << result << endl;

    return 0;
}

