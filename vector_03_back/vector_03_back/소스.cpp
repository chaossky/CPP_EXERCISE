#include<iostream>
#include<vector>
using namespace std;

int main() {
	//create myvectory
	vector<int> myvector;

	//assign a value in myvector
	myvector.push_back(10);

	//back()-access last element
	//push_back()-Add element at the end

	//The example uses push_back to add a new element 
	//to the vector each time a new integer is read.

	while (myvector.back() != 0) 
	{
		myvector.push_back(myvector.back() - 1);	
	}

	cout << "my vector contains :"  ;
	for (unsigned i = 0; i < myvector.size(); i++) 
	{
		cout << ' ' << myvector[i];
	}
	cout << '\n';

	return 0;
}