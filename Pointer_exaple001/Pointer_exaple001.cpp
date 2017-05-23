// Pointer_exaple001.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc,_TCHAR* argv[])
{/*
 int a = 5;
	int *p1;
	p1 = &a;
	cout << "a의 값은" << a << endl;
	cout << "p1의 값은" << p1 << endl;
	cout << "&a is pointer to the address store the value " << &a << endl;
	cout << "p1 value pointeed by a " << *p1 << endl;
	*/
	//Declare array whose size is 5
	int numbers[5];
	int * pointer1;

	pointer1 = numbers;
    *pointer1 = 10;
	pointer1++;
	*pointer1 = 20;
	pointer1 = &numbers[2];
	*pointer1 = 30;
	pointer1 = numbers + 3;
	*pointer1 = 40;
	pointer1 = numbers;
	*(pointer1 + 4) = 50;

	for (int n = 0; n < 5; n++) {
		cout << numbers[n] <<",";
	}

    return 0;
}

