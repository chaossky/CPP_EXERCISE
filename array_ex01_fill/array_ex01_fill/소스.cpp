#include<iostream>
#include<array>

using namespace std;

int main() {
	array<int, 6> myarray;

	myarray.fill(6);

	cout << "my array contains:";
	for (int& x : myarray) {
		cout << ' ' << x;
	}
	cout << '\n';

	return 0;

}