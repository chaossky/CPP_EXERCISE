#include<iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main() {
	double r = 5.0;
	double circle;
	double area;
	
	circle = 2 * PI*r;
	area = PI*r*r;
	cout <<"The cirles circumcise is " <<circle;
	cout << NEWLINE;
	cout << "The area is "<<area;
	cout << NEWLINE;

	return 0;
}