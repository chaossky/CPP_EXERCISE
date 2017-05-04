/*
vector::begin() -Return iterator to beginning
Returns an iterator pointing to the first element in the vector.

Notice that, 

unlike member vector::front, which returns a reference to the first element, 

this function returns a random access iterator pointing to it.

If the container is empty, the returned iterator value shall not be dereferenced.

See also
vector::front  - Access first element -Returns a reference to the first element in the vector.
vector::back   - Access last element - Returns a reference to the last element in the vector.

vector::end    - Return iterator to end 

vector::rbegin - Return reverse iterator to reverse beginning 
vector::rend   - Return reverse iterator to reverse end 

vector::at     - Access element - Returns a reference to the element at position n in the vector.
*/
#include<iostream>
#include<vector>
using namespace std;

int main() {
	//create vector
	vector<int> myvector;

	//assign values using for statement
	for (int i = 0; i < 10; i++) 
	{
		myvector.push_back(i);
	}

	//print the elements in myvectory
	cout << "myvector contains :";
	for (vector<int>::iterator iter = myvector.begin(); iter != myvector.end();++iter) 
	{
		cout << ' ' << *iter;
	}
	cout << '\n';
	return 0;

}