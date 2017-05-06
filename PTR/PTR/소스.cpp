#include<iostream>
using namespace std;
int main() {
	int a = 20;
	int *ptr_a = &a;

	cout << "the valu of a is " << a <<endl;
	cout << "The address of a is " << &a << endl;
	cout << "The value of of ptr_a is " << ptr_a <<endl;
	cout << "The point of  a is " << *ptr_a <<endl;

	return 0;
}
