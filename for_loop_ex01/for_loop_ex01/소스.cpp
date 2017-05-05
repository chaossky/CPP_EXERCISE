#include<iostream>
#include<string>

int main() {
	//int i is already declared and initalized, 
	//of there is no need to specify initialize the number in for statement
	int i = 0;
	for (; i < 10; i++ ) std::cout << i << " ";

	std::cout << std::endl;

	std::cout << "j contains ";
	int j = 0;

	// increase number in the statement
	// if not (no initial value, and increment) it's going to be infinite loop
	for (; j < 10;) {
		std::cout << j << ' ';
		j=j+2;
	}

	std::cout << std::endl;
	// when given 2 variables are conditional
	for (int n = 0, k = 100; n != k; ++n, --k) {
		std::cout << "n is " << n << "  k is " << k << std::endl;
	}


	std::cout << std::endl;
	/*
	for ( declaration : range ) statement;

This kind of for loop iterates over all the elements in range, 
where declaration declares some variable able to take the value of an element 
in this range. Ranges are sequences of elements, including arrays, containers, 
and any other type supporting the functions begin() and end(); 

	*/
	std::string str{ "Hello!" };
	for (char c : str) {
		std::cout << "[" << c << "]";
	}

	std::cout << std::endl;
	return 0;
	}