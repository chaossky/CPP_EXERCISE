#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int size;
	cin >> size;
	int sum = 0;
	//cout << "Å©±â"<<size << endl;
	vector<int> arr;
	for (int i = 0; i < size; ++i) {
		int a;
		cin >> a;
		arr.push_back(a);
	}
	for (int j = 0; j < size; ++j) {
		sum += arr[j];
	}

	cout << sum;
	return 0;
}