// Pointer_exaple001.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc,_TCHAR* argv[])
{
	int a = 5;
	int *p1;
	p1 = &a;
	cout << "a의 값은" << a << endl;
	cout << "p1의 값은" << p1 << endl;
	cout << "a의 주소 값은 " << &a << endl;
	cout << "포인터 P1의 값은 " << *p1 << endl;

    return 0;
}

