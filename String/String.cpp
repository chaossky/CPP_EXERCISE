#include<iostream>
#include "stdafx.h"
#include<string>

int main() {
	std::string myString("the is not they or their"); 
	std::cout << myString <<std::endl;
	myString.append("add");
	std::cout << myString << std::endl;

}