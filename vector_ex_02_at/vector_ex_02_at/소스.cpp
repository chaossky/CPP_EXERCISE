#include<iostream>
#include<vector>
using namespace std;

int main() {
	//make myvector
	vector<int> myvector(10);
	
	//assign value to myvector
	for (unsigned i = 0; i < myvector.size(); i++) 
	{
		myvector.at(i) = i;
	}
	

	cout << "The first method: Using for & at() method"<<endl;
	//print the elements of myvector in two ways
	for (unsigned j = 0; j < myvector.size(); j++)
	{
		cout << ' ' << myvector.at(j);
	}
	cout << endl;
	cout <<"----------------" <<endl;

	cout << "the second method:using iterator" << endl;
	vector<int>::iterator iter;
	for (iter = myvector.begin(); iter != myvector.end(); ++iter) {
	
		// all the elements are initialized with zero(0)
		cout << ' '<<*iter ;
	}
	cout << endl;
	
}