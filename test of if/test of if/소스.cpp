#include<iostream>
void main() {
	int a, b;
	std::cout << "input two numbers" << std::endl;
	std::cin >> a >> b;

	if (a > b) {
		std::cout << "max(" << a << "," << b << ") is" << a << std::endl;
	}
	else if (a<b) {
		std::cout << "max(" << a << "," << b << ") is " << b << std::endl;
	}

}