// firstpointer.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
// my first pointer


#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{   //Variable declaration
	int firstvalue, secondvalue;
	int * mypointer;

	//assign value to variables
	mypointer = &firstvalue;
	*mypointer = 10;

	mypointer = &secondvalue;
	*mypointer = 20;

	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n';
	return 0;
}


