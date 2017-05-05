#include<iostream>
#include<array>
using namespace std;

int main() {
	//create array
	array<int, 5> myarray = { 2,15,34,12,45 };

	cout << "myarray contains : ";
	//iterating array to check the contents of array
	for (auto it = myarray.begin(); it != myarray.end(); ++it)
	{
		cout << ' ' << *it;
	}
	cout << '\n';
	//print array using for statement
	for (int i=0; i < myarray.size(); i++) {
		cout << ' ' << myarray.at(i);
	}
	cout << '\n';
	return 0;

}
