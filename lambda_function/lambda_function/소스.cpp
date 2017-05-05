#include<iostream>

void main()
{
	[](const int& a, const int& b) {
		std::cout << a + b << std::endl;
	}
	(43, 5);
}