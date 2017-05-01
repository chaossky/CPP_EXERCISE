#include <vector>
#include <iostream>
using namespace std;

int main() {
	//create a vector to store integer values	
	vector<int> vector_1;
	int i;

	//display the original size of vector_1
	cout << "vector size=" << vector_1.size() << endl;

	//push 5 values into the vector_1
	for (i = 0; i < 5; i++) {
		vector_1.push_back(i);
	}
	
	//display extended size of vec
	cout << "vector size=" << vector_1.size() << endl;
	
	//access 5 values from the vector_1
	for (i = 0; i < 5; i++) {
		cout << "value of vec [" << i << "] =" << vector_1[i] << endl;
	}

	//use iterator to access the values
	vector<int>::iterator v = vector_1.begin();
	while (v != vector_1.end())
	{
		cout << "the value of v =" << *v << endl;
		v++;
	}
	return 0;
}
