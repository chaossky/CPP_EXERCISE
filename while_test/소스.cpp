/*
#include<std_lib_facilities.h>
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS 1
*/
#include<iostream>

using namespace std;

//템플릿 함수를 정해 보았다.
template<typename T>
inline T const& Square(T const& i)
{
	return i*i;
}

int main() {
	int i = 0;
	while (i < 100) {
		cout << i << '\t' << Square(i) << '\n';
		i++;

	}
}